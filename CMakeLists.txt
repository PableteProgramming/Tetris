cmake_minimum_required(VERSION 3.12)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "ON if dll. OFF if static" FORCE)
set(SFML_USE_STATIC_STD_LIBS ON CACHE BOOL "ON if static. OFF if dll" FORCE)
set(RES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)

project(Tetris)

find_package(OpenGL REQUIRED)

set(SFML_DIRECTORY SFML)
set(SFML_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${SFML_DIRECTORY}/include)

add_subdirectory(${SFML_DIRECTORY})


set(LIBS sfml-graphics sfml-window sfml-system ${OPENGL_LIBRARY} winmm gdi32 ${SFML_LIBRARIES})

add_subdirectory(app)