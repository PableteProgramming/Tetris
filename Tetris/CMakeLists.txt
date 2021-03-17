set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${SRC_DIR}/all.cpp)

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(
        ${PROJECT_NAME} PUBLIC
        "/MTd"
    )
endif()


add_compile_definitions(SFML_STATIC)

target_sources(
    ${PROJECT_NAME} PUBLIC
    ${SRC_DIR}/main.cpp
)

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SFML_INCLUDE_PATH}
)

target_link_libraries(
    ${PROJECT_NAME} PUBLIC
    ${LIBS}
)
