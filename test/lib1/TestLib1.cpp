#include <gtest/gtest.h>

#include "src/lib1/lib1.hpp"


TEST(TestLib1, TestC1) {

    C1 c1;

    ASSERT_EQ(c1.foo(), 1U);

}