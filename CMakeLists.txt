cmake_minimum_required(VERSION 3.12)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "ON if dll. OFF if static" FORCE)
set(SFML_USE_STATIC_STD_LIBS ON CACHE BOOL "ON if static. OFF if dll" FORCE)

project(Tetris)

find_package(OpenGL REQUIRED)

set(SFML_DIRECTORY SFML)
set(SFML_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${SFML_DIRECTORY}/include)

set(EXE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/output/${CMAKE_CXX_COMPILER_ID})

message("Exe path: " ${EXE_PATH})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXE_PATH})

add_subdirectory(${SFML_DIRECTORY})

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(TETRIS_PLATLIBS freetype jpeg)
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    set(TETRIS_PLATLIBS winmm gdi32)
endif()

set(LIBS sfml-graphics sfml-window sfml-system sfml-audio ${OPENGL_LIBRARY} ${TETRIS_PLATLIBS} ${SFML_LIBRARIES})

add_subdirectory(Tetris)