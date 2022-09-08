#pragma once
#include "windows.h"  
#include <iostream>  
#include <string>  
using namespace std;

//**************string******************//  
// ASCII��Unicode��ת  
wstring AsciiToUnicode(const string& str);
string  UnicodeToAscii(const wstring& wstr);
// UTF8��Unicode��ת  
wstring Utf8ToUnicode(const string& str);
string  UnicodeToUtf8(const wstring& wstr);
// ASCII��UTF8��ת  
string  AsciiToUtf8(const string& str);
string  Utf8ToAscii(const string& str);