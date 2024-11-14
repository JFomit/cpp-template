#include "example-header.h"
#include "gtest/gtest.h"

TEST(sample, sample) {
  ASSERT_STREQ(SayHello().c_str(), "Hello, world!");
}