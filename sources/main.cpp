#include "tests/gtest.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>


//int argc, char* argv[]
int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

    system("pause");

    return 0;
}