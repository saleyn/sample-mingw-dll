cmake_minimum_required(VERSION 3.11)
project(example)

set(CMAKE_CXX_STANDARD 17)

# This will force static linking of libraries into a shared library/DLL
set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

add_library(test SHARED example.cpp)
target_compile_definitions(test PRIVATE -DBUILDING_EXAMPLE_DLL)
# This is an alternative to CMAKE_SHARED_LINKER_FLAGS
#target_link_options(test PRIVATE -static-libgcc -static-libstdc++ -static)

add_executable(testit testit.cpp)
target_link_libraries(testit test)

install(TARGETS test testit RUNTIME DESTINATION bin)
