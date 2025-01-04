#ifndef SUDOKU_UTIL_PUZZLE_MAKER_H
#define SUDOKU_UTIL_PUZZLE_MAKER_H

#include <cstdint>
#include <vector>

namespace sudoku::util
{
    enum DifficultyLevel { EASY, NORMAL, HARD, VERY_HARD, EXPERT };
    void MakePuzzle(std::vector<std::vector<uint8_t>>& grid, uint8_t difficulty);

    class Difficulty {
        public:
            virtual uint8_t GetBlanckNumbers();
    };

    class Easy: public Difficulty {};
    class Normal: public Difficulty {};
    class Hard: public Difficulty {};
    class VeryHard: public Difficulty {};
    class Expert: public Difficulty {};
} // namespace sudoku::util
#endif  // SUDOKU_UTIL_PUZZLE_MAKER_H
