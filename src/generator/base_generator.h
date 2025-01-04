#ifndef SUDOKU_GENERATOR_BASE_GENERATOR_H
#define SUDOKU_GENERATOR_BASE_GENERATOR_H

#include <cstdint>
#include <memory>
#include <vector>

namespace sudoku::generator
{
    class BaseGenerator {
        public:
            virtual std::vector<std::vector<uint8_t>> generate(uint8_t difficulty) {};
            BaseGenerator() {};
            ~BaseGenerator() {};
    };
} // namespace sudoku::generator
#endif  // SUDOKU_GENERATOR_BASE_GENERATOR_H
