#include <Python.h>
#include <iostream>
#include <string>
#include "UNT.h"
using namespace std;

int main()
{
#ifdef _WIN64
	Py_SetPythonHome(L"./Python/libx64");
#else
	Py_SetPythonHome(L"./Python/lib");
#endif
	Py_Initialize();
	string code;
	do
	{
		PyRun_SimpleString(AsciiToUtf8(code).c_str());
		cout << ">>> ";
		getline(cin, code);
	} while (code != "quit()");
	Py_Finalize();
}