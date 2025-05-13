#include <gtest/gtest.h>
#include "sub.h"

TEST(MultTest, HandlesPositiveInput)
{
int mult = mult(5, 2);

EXPECT_EQ(mult, 10);
}
