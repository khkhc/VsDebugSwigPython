#include "UNT.h"
wstring AsciiToUnicode(const string& str) {
    // 预算-缓冲区中宽字节的长度    
    int unicodeLen = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, nullptr, 0);
    // 给指向缓冲区的指针变量分配内存    
    wchar_t* pUnicode = (wchar_t*)malloc(sizeof(wchar_t) * unicodeLen);
    // 开始向缓冲区转换字节    
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, pUnicode, unicodeLen);
    wstring ret_str = pUnicode;
    free(pUnicode);
    return ret_str;
}
string UnicodeToAscii(const wstring& wstr) {
    // 预算-缓冲区中多字节的长度    
    int ansiiLen = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    // 给指向缓冲区的指针变量分配内存    
    char* pAssii = (char*)malloc(sizeof(char) * ansiiLen);
    // 开始向缓冲区转换字节    
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, pAssii, ansiiLen, nullptr, nullptr);
    string ret_str = pAssii;
    free(pAssii);
    return ret_str;
}
wstring Utf8ToUnicode(const string& str) {
    // 预算-缓冲区中宽字节的长度    
    int unicodeLen = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
    // 给指向缓冲区的指针变量分配内存    
    wchar_t* pUnicode = (wchar_t*)malloc(sizeof(wchar_t) * unicodeLen);
    // 开始向缓冲区转换字节    
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, pUnicode, unicodeLen);
    wstring ret_str = pUnicode;
    free(pUnicode);
    return ret_str;
}
string UnicodeToUtf8(const wstring& wstr) {
    // 预算-缓冲区中多字节的长度    
    int ansiiLen = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    // 给指向缓冲区的指针变量分配内存    
    char* pAssii = (char*)malloc(sizeof(char) * ansiiLen);
    // 开始向缓冲区转换字节    
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, pAssii, ansiiLen, nullptr, nullptr);
    string ret_str = pAssii;
    free(pAssii);
    return ret_str;
}
string AsciiToUtf8(const string& str) {
    return UnicodeToUtf8(AsciiToUnicode(str));
}
string Utf8ToAscii(const string& str) {
    return UnicodeToAscii(Utf8ToUnicode(str));
}

std::wstring StringToWstring(const std::string str)
{// string转wstring
    unsigned len = str.size() * 2;// 预留字节数
    setlocale(LC_CTYPE, "");     //必须调用此函数
    wchar_t* p = new wchar_t[len];// 申请一段内存存放转换后的字符串
    mbstowcs(p, str.c_str(), len);// 转换
    std::wstring str1(p);
    delete[] p;// 释放申请的内存
    return str1;
}



std::string WstringToString(const std::wstring str)
{// wstring转string
    unsigned len = str.size() * 4;
    setlocale(LC_CTYPE, "");
    char* p = new char[len];
    wcstombs(p, str.c_str(), len);
    std::string str1(p);
    delete[] p;
    return str1;
}