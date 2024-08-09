#include <gtest/gtest.h>

TEST(InitialTest, TwoPlusTwoIsFour) {
  EXPECT_EQ(2 + 2, 4); //
}

TEST(InitialTest, HelloTest) {
  EXPECT_STRNE("Hello", "Test"); //
}
