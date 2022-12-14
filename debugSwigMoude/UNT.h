#pragma once
#include "windows.h"  
#include <iostream>  
#include <string>  
#include <locale.h> 

using namespace std;

//**************string******************//  
// ASCII与Unicode互转  
wstring AsciiToUnicode(const string& str);
string  UnicodeToAscii(const wstring& wstr);
// UTF8与Unicode互转  
wstring Utf8ToUnicode(const string& str);
string  UnicodeToUtf8(const wstring& wstr);
// ASCII与UTF8互转  
string  AsciiToUtf8(const string& str);
string  Utf8ToAscii(const string& str);
// string转wstring
std::wstring StringToWstring(const std::string str);
// wstring转string
std::string WstringToString(const std::wstring str);