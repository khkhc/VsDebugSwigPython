#include "UNT.h"
wstring AsciiToUnicode(const string& str) {
    // Ԥ��-�������п��ֽڵĳ���    
    int unicodeLen = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, nullptr, 0);
    // ��ָ�򻺳�����ָ����������ڴ�    
    wchar_t* pUnicode = (wchar_t*)malloc(sizeof(wchar_t) * unicodeLen);
    // ��ʼ�򻺳���ת���ֽ�    
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, pUnicode, unicodeLen);
    wstring ret_str = pUnicode;
    free(pUnicode);
    return ret_str;
}
string UnicodeToAscii(const wstring& wstr) {
    // Ԥ��-�������ж��ֽڵĳ���    
    int ansiiLen = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    // ��ָ�򻺳�����ָ����������ڴ�    
    char* pAssii = (char*)malloc(sizeof(char) * ansiiLen);
    // ��ʼ�򻺳���ת���ֽ�    
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, pAssii, ansiiLen, nullptr, nullptr);
    string ret_str = pAssii;
    free(pAssii);
    return ret_str;
}
wstring Utf8ToUnicode(const string& str) {
    // Ԥ��-�������п��ֽڵĳ���    
    int unicodeLen = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
    // ��ָ�򻺳�����ָ����������ڴ�    
    wchar_t* pUnicode = (wchar_t*)malloc(sizeof(wchar_t) * unicodeLen);
    // ��ʼ�򻺳���ת���ֽ�    
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, pUnicode, unicodeLen);
    wstring ret_str = pUnicode;
    free(pUnicode);
    return ret_str;
}
string UnicodeToUtf8(const wstring& wstr) {
    // Ԥ��-�������ж��ֽڵĳ���    
    int ansiiLen = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    // ��ָ�򻺳�����ָ����������ڴ�    
    char* pAssii = (char*)malloc(sizeof(char) * ansiiLen);
    // ��ʼ�򻺳���ת���ֽ�    
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
{// stringתwstring
    unsigned len = str.size() * 2;// Ԥ���ֽ���
    setlocale(LC_CTYPE, "");     //������ô˺���
    wchar_t* p = new wchar_t[len];// ����һ���ڴ���ת������ַ���
    mbstowcs(p, str.c_str(), len);// ת��
    std::wstring str1(p);
    delete[] p;// �ͷ�������ڴ�
    return str1;
}



std::string WstringToString(const std::wstring str)
{// wstringתstring
    unsigned len = str.size() * 4;
    setlocale(LC_CTYPE, "");
    char* p = new char[len];
    wcstombs(p, str.c_str(), len);
    std::string str1(p);
    delete[] p;
    return str1;
}