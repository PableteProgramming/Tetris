set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${SRC_DIR}/all.cpp)

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(
        ${PROJECT_NAME} PUBLIC
        "/MTd"
    )
    add_custom_command(TARGET ${PROJECT_NAME} PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${RES_DIR} ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}/resources)

    if(${COPY_DLLS})
        add_custom_command(TARGET ${PROJECT_NAME} PRE_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${DLLS_DIR} ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}
        )
    endif()
else()
    add_custom_command(TARGET ${PROJECT_NAME} PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${RES_DIR} ${CMAKE_CURRENT_BINARY_DIR}/resources)

    if(${COPY_DLLS})
        add_custom_command(TARGET ${PROJECT_NAME} PRE_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${DLLS_DIR} ${CMAKE_CURRENT_BINARY_DIR}
        )
    endif()
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
