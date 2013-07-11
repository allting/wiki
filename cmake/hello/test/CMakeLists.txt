
include_directories (${PROJECT_SOURCE_DIR}/src)
link_directories(${Boost_LIBRARY_DIRS})
add_executable (test test.cpp)
add_definitions(-DBOOST_TEST_DYN_LINK)

target_link_libraries(test ${Boost_LIBRARIES})
