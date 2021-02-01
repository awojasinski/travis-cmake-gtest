#include "gtest/gtest.h"

extern "C" {
#include "bar.h"
}

TEST(bar_a, ok) {
  ASSERT_EQ(bar_a(10, 20), 20);
}