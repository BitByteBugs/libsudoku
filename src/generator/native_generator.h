#ifndef SUDOKU_GENERATOR_NATIVE_GENERATOR_H
#define SUDOKU_GENERATOR_NATIVE_GENERATOR_H

/**
 * a
 */

#include <cstdint>
#include <random>
#include <vector>

#include "base_generator.h"

namespace sudoku::generator
{
    class NativeGenerator : public sudoku::generator::BaseGenerator {
        public:
            std::vector<std::vector<uint8_t>> generate(uint8_t difficulty) override;
        private:
            std::vector<std::vector<uint8_t>> generate(std::mt19937 gen, std::uniform_int_distribution<> rands, uint8_t difficulty);
    };
} // namespace sudoku::generator
#endif  // SUDOKU_GENERATOR_NATIVE_GENERATOR_H
