file(GLOB TEST_SOURCES "*.cc")

add_executable(test_generator ${TEST_SOURCES} ${SOURCES})
target_link_libraries(test_generator GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_generator)
