#ifndef SUDOKU_UTIL_PUZZLE_MAKER_H
#define SUDOKU_UTIL_PUZZLE_MAKER_H

#include <cstdint>
#include <vector>

namespace sudoku::util
{
    enum DifficultyLevel: uint8_t {
        EASY,
        NORMAL,
        HARD,
        VERY_HARD,
        EXPERT,
        LIMIT_OF_DIFFICULTY // Indicate the end of enum. Don't use this level and don't define level lower.
    };
    void MakePuzzle(std::vector<std::vector<uint8_t>>& grid, DifficultyLevel difficulty);

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
    Difficulty GetInstance(DifficultyLevel difficulty);
} // namespace sudoku::util
#endif  // SUDOKU_UTIL_PUZZLE_MAKER_H
