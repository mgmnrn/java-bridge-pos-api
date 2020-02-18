#include "stdafx.h"
#include "mn_mta_pos_exam_BridgePosAPI.h"
#include <PosAPI.h>
#include <codecvt>
#include <locale>
#include <vector>

using namespace vatps;
using namespace std;

/*
* std::string-ийг std::wstring төрөлрүү хөрвүүлэх method
*/
wstring s2ws(const string& str)
{
	typedef codecvt_utf8<wchar_t> convert_typeX;
	wstring_convert<convert_typeX, wchar_t> converterX;
	return converterX.from_bytes(str);
}
/*
* std::wstring-ийг std::string төрөлрүү хөрвүүлэх method
*/
string ws2s(const wstring& wstr)
{
	typedef codecvt_utf8<wchar_t> convert_typeX;
	wstring_convert<convert_typeX, wchar_t> converterX;
	return converterX.to_bytes(wstr);
}
JNIEXPORT jstring JNICALL Java_mn_mta_pos_exam_BridgePosAPI_put(JNIEnv
	*env, jclass c, jstring param){
	const char* strParam = env->GetStringUTFChars(param, 0);
	UString data = s2ws(string(strParam));
	UString result = PosAPI::put(data);
	return env->NewStringUTF(ws2s(result).c_str());
}
JNIEXPORT jstring JNICALL
Java_mn_mta_pos_exam_BridgePosAPI_returnBill
(JNIEnv *env, jclass c, jstring param){
	const char* strParam = env->GetStringUTFChars(param, 0);
	UString data = s2ws(string(strParam));
	UString result = PosAPI::returnBill(data);
	return env->NewStringUTF(ws2s(result).c_str());
}
JNIEXPORT jstring JNICALL Java_mn_mta_pos_exam_BridgePosAPI_sendData
(JNIEnv *env, jclass c){
	UString result = PosAPI::sendData();
	return env->NewStringUTF(ws2s(result).c_str());
}
