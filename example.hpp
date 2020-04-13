#ifndef EXAMPLE_DLL_H
#define EXAMPLE_DLL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_EXAMPLE_DLL
#define EXAMPLE_DLL __declspec(dllexport)
#else
#define EXAMPLE_DLL __declspec(dllimport)
#endif

#if defined(WIN32) || defined(__MINGW64__) || defined(__MINGW32__)
  #define WINAPI __stdcall
#else
  #define WINAPI
#endif

EXAMPLE_DLL void WINAPI hello(const char *s);

EXAMPLE_DLL int WINAPI LengthW(const wchar_t*s);

EXAMPLE_DLL int WINAPI Double(int x);

#ifdef __cplusplus
}
#endif

// NOTE: this function is not declared extern "C"
void EXAMPLE_DLL CppFunc(void);

// NOTE: this class must not be declared extern "C"
class EXAMPLE_DLL MyClass
{
public:
        MyClass() {};
        virtual ~MyClass() {};
        void func(void);
};

#endif  // EXAMPLE_DLL_H
