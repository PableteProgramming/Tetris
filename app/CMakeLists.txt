set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${SRC_DIR}/main.cpp)

add_compile_definitions(SFML_STATIC)

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SFML_INCLUDE_PATH}
)

target_link_libraries(
    ${PROJECT_NAME} PUBLIC
    ${LIBS}
)

target_link_options(
    ${PROJECT_NAME} PUBLIC
    -mwindows
)