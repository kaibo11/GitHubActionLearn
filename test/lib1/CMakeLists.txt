project(TestLib1)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR} sourceFiles)

add_executable(${PROJECT_NAME} ${sourceFiles})

target_link_libraries(${PROJECT_NAME} lib1 GTest::gtest GTest::gtest_main)

gtest_add_tests(TARGET      
    ${PROJECT_NAME}
)