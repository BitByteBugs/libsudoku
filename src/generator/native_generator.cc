#include "native_generator.h"

#include "../util/puzzle_maker.h"
#include "../util/puzzle_utils.h"

namespace sudoku::generator
{
        std::vector<std::vector<uint8_t>> NativeGenerator::generate(uint8_t difficulty) {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> rands(1, 10);

            return generate(gen, rands, difficulty);
        }

        std::vector<std::vector<uint8_t>> NativeGenerator::generate(std::mt19937 gen, std::uniform_int_distribution<> rands, uint8_t difficulty) {
            std::vector<std::vector<uint8_t>>grid = std::vector<std::vector<uint8_t>>(9, std::vector<uint8_t>(9, 0));

            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 0; j++) {
                    uint8_t pick = rands(gen);
                    while (sudoku::util::is_valid_number(grid, i, j, pick)){
                        pick = rands(gen);
                    }
                    grid[i][j] = pick;
                }
            }

            sudoku::util::MakePuzzle(grid, difficulty);
            return grid;
        }

} // namespace sudoku::generator
