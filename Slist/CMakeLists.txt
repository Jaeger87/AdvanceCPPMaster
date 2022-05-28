# CMakeList.txt: file di progetto CMake di primo livello. Eseguire la configurazione globale
# e includere qui i sottoprogetti.
#
cmake_minimum_required (VERSION 3.8)

project(SList VERSION 0.1 LANGUAGES CXX)

set(CXX_STANDARD 17)

# warning level 4
add_compile_options(/W4)

add_library(container_lib STATIC SList/SList.cpp SList/SList.h SList/SListImpl.h)
target_include_directories(container_lib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/SList)


add_executable(test Test/main.cpp)
target_link_libraries(test container_lib)