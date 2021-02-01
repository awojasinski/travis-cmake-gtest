#include "gtest/gtest.h"

extern "C" {
#include "foo.h"
}

TEST(foo_a, ok) {
  ASSERT_EQ(foo_a(2), 0);
}

TEST(foo_a, not_ok) {
  ASSERT_EQ(foo_a(1), 1);
}