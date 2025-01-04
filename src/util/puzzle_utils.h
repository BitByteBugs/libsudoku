#ifndef SUDOKU_UTIL_PUZZLE_UTILS_H
#define SUDOKU_UTIL_PUZZLE_UTILS_H

#include <cstdint>
#include <vector>

namespace sudoku::util
{
    bool is_valid_number(std::vector<std::vector<uint8_t>> &grid, int row, int col, uint8_t num);
}  // namespace sudoku
#endif  // SUDOKU_UTIL_PUZZLE_UTILS_H
