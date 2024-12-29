#include "puzzle_utils.h"

namespace sudoku::util
{
    bool is_valid_number(std::vector<std::vector<uint8_t>> &grid, int row, int col, uint8_t num) {
        // Check row
        for (int i = 0; i < 9; i++) {
            if (grid[row][i] == num) {
                return false;
            }
        }

        // Check column
        for (int i = 0; i < 9; i++) {
            if (grid[i][col] == num) {
                return false;
            }
        }

        // Check 3x3
        int start_row = (row / 3) * 3;
        int start_col = (col / 3) * 3;

        for (int i = start_row; i < start_row + 3; i++) {
            for (int j = start_col; j < start_col + 3; j++) {
                if (grid[i][j] == num) {
                    return false;
                }
            }
        }

        return true;
    }
} // namespace sudoku::util
