cmake_minimum_required(VERSION 3.10)
project(pacman)

# Archivos del Projecto
set(PROJECT_SOURCE
        main.cpp
        CCirculo.cpp CCirculo.h Udefiniciones.h CmCirculos.cpp CmCirculos.h CFigura.cpp CFigura.h CRectangulo.cpp CRectangulo.h CPoligono.cpp CPoligono.h)

# C++ Standard se sugiere 11 o 14
set(CMAKE_CXX_STANDARD 14)

set(SFML_ROOT "~/DevLibraries/SFML-2.5.1-macOS-clang")

set(SFML_INCLUDE_DIR "${SFML_ROOT}/include")
set(SFML_LIBRARY_DIR "${SFML_ROOT}/lib")

if (APPLE)
    set(SFML_DIR "${SFML_ROOT}/Frameworks/SFML.framework/Resources/CMake")
else()
    set(SFML_DIR "${SFML_ROOT}/lib/CMake/SFML")
endif()

link_directories(${SFML_LIBRARY_DIR})
include_directories(${SFML_INCLUDE_DIR})

# Instrucciones para generar el ejecutable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})

include(FindPkgConfig)
pkg_check_modules( SFML sfml-all)

target_link_libraries (${PROJECT_NAME}
        sfml-system
        sfml-window
        sfml-graphics
        )
