/**
 * a
 */

#include <cstdint>
#include <random>
#include <vector>

#include "base_generator.h"

namespace sudoku::generator
{
    class NativeGenerator : public BaseGenerator {
        public:
            std::vector<std::vector<uint8_t>> generate(uint8_t difficulty) override;
        private:
            std::vector<std::vector<uint8_t>> generate(std::mt19937 gen, std::uniform_int_distribution<> rands, uint8_t difficulty);
    };
} // namespace sudoku::generator
