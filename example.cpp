#include <stdio.h>
#include <cstdlib>
#include <string>
#include <cwchar>
#include "example.hpp"

void hello(const char *s)     { printf("Hello %s\n", s); }
int LengthW(const wchar_t* s) { std::wstring ws(s); std::string ss(ws.begin(), ws.end()); return ss.length(); }
int Double(int x)             { return 2 * x; }
void CppFunc(void)            { puts("CppFunc"); }
void MyClass::func(void)      { puts("MyClass.func()"); }
