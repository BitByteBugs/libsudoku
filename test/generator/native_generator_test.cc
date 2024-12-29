#include "../../src/generator/native_generator.h"

#include <gtest/gtest.h>

TEST(NativeGeneratorTest, BasicAssertions) {
    sudoku::generator::NativeGenerator generator = sudoku::generator::NativeGenerator();

    auto result = generator.generate();

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            EXPECT_NE(result[i][j], 0);
        }
    }
}