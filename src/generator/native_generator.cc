#include "generator/native_generator.h"

#include <random>

#include "util/puzzle_utils.h"

namespace sudoku::generator
{
    class NativeGenerator : public BaseGenerator
    {
        std::vector<std::vector<uint8_t>> NativeGenerator::generate() override {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> rands(1, 10);

            return generate(gen, rands);
        }

        std::vector<std::vector<uint8_t>> NativeGenerator::generate(std::mt19937 gen, std::uniform_int_distribution<> rands) {
            std::vector<std::vector<uint8_t>>grid = std::vector<std::vector<uint8_t>>(9, std::vector<uint8_t>(9, 0));

            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 0; j++) {
                    while (true){
                        uint8_t pick = rands(gen);
                    
                        if (sudoku::util::is_valid_number(grid, i, j, pick)) {
                            grid[i][j] = pick;
                            break;
                        }
                    }
                }
            }

            return grid;
        }
    };
} // namespace sudoku::generator
