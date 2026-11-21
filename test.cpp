#include <gtest/gtest.h>
#include "macros.h"
#include "calc.h"

TEST(Lab9_2_1_Test, Branch1Test)
{
    EXPECT_DOUBLE_EQ(calcBranch1(6, 2, 4), 4.0);
    EXPECT_DOUBLE_EQ(calcBranch1(5, 1, 4), 1.0);
}


