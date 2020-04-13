#include "example.hpp"
#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
  auto cs = std::string(argc > 1 ? argv[0] : "abc");
  std::wstring s(cs.begin(), cs.end());

  std::wcout << s << L": " << LengthW(s.c_str()) << std::endl;
  return 0;
}