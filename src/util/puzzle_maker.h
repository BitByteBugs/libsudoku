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
            virtual uint8_t GetBlankNumbers();
    };

    class Easy: public Difficulty {
        public:
            uint8_t GetBlankNumbers() override;
    };
    class Normal: public Difficulty {
        public:
            uint8_t GetBlankNumbers() override;
    };
    class Hard: public Difficulty {
        public:
            uint8_t GetBlankNumbers() override;
    };
    class VeryHard: public Difficulty {
        public:
            uint8_t GetBlankNumbers() override;
    };
    class Expert: public Difficulty {
        public:
            uint8_t GetBlankNumbers() override;
    };
} // namespace sudoku::util
#endif  // SUDOKU_UTIL_PUZZLE_MAKER_H
