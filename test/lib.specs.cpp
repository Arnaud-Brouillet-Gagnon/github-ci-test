#include "gtest/gtest.h"
#include "lib.h"

using namespace testing;

class LibTests : public ::Test {

}

TEST_F(LibTests, Square_Should_Square_The_Number){
    int input = 18;

    EXPECT_EQ(square(input), input*input);
}