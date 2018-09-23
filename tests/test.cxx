#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <string>

TEST(FooTest, StrCompare) {
  std::vector<std::string> output{"hi", "ho"};
  EXPECT_EQ(output[0], "hi");
  EXPECT_EQ(output[1], "ho");
}

