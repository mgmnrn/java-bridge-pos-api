# java-bridge-pos-api
Ebarimt posApi-г жава програмчлалын хэлтэй холбон дундын сан гаргаж авах жишээ

Java програмчлалын хэл нь С++ хэлтэй холбогдох бүрэн боломжтой бөгөөд холбогдохын тулд JNI /Java Native Interface/-ийн тусламжтайгаар холбогдоно

Үүсгэсэн BridgePosAPI.dll, PosAPI.dll сангуудыг бусад туслах сангуудын хамт C:/Windows/Sun/Java/Bin хавтсанд хуулж өгнө. Хэрэв уг хавтас үүсээгүй бол гараар үүсгэж өгнө. Мөн уг хавтасанд заавал хуулах шаардлагагүй ба хүсвэл jar файлын дэргэд хуулж өгөх эсвэл System.getProperty(“java.library.path”) /хэвлэж харах/ тодорхойлсон замуудад мөн адил хуулж өгч болно.
