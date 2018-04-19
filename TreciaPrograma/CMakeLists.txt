cmake_minimum_required (VERSION 3.6)

project (antra_uzd)

set(CMAKE_CCX_STANDARD 11)

SET(GCC_COVERAGE_COMPILE_FLAGS "-O2 -fopenmp")

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

set(SOURCE_FILES 2.4/main.cpp 2.4/main.h 2.4/funkcijosBeStrukturos.cpp 2.4/funkcijosBeStrukturos.h 2.4/funkcijosSuDeque.cpp 2.4/funkcijosSuDeque.h 2.4/funkcijosSuStruktura.cpp 2.4/funkcijosSuStruktura.h 2.4/funkcijosSuList.cpp 2.4/funkcijosSuList.h 2.4/stdafx.cpp 2.4/stdafx.h 2.4/targetver.h)

add_executable(antra_uzd ${SOURCE_FILES})
add_executable(opop 2.4/funkcijosBeStrukturos.cpp 2.4/funkcijosSuDeque.cpp 2.4/funkcijosSuStruktura.cpp  2.4/funkcijosSuList.cpp 2.4/main.cpp)