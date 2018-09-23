enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
find_package(GMock REQUIRED)
include_directories(${GMOCK_INCLUDE_DIRS})

add_executable(test test.cxx)

target_link_libraries(test GTest::GTest GTest::Main)
