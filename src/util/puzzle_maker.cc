#include "puzzle_maker.h"

#include <random>

namespace {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> rands(0, 9);

    uint8_t GetRandomNumber() {
        return rands(gen);
    }
}  // namspace

namespace sudoku::util
{
    void MakePuzzle(std::vector<std::vector<uint8_t>>& grid, uint8_t difficulty) {
        Difficulty level = sudoku::util::GetInstance(difficulty);
        uint8_t blankNumbers = level.GetBlanckNumbers();

        for (int i = 0; i < blankNumbers; i++) {
            int row = GetRandomNumber();
            int col = GetRandomNumber();

            while (grid[row][col] != 0) {
                row = GetRandomNumber();
                col = GetRandomNumber();
            }

            grid[row][col] = 0;
        }
    }

    Difficulty GetInstance(uint8_t difficulty) {
        switch (difficulty) {
            case DifficultyLevel::EASY:
                sudoku::util::Easy easy;
                return easy;
            case DifficultyLevel::NORMAL:
                sudoku::util::Normal normal;
                return normal;
            case DifficultyLevel::HARD:
                sudoku::util::Hard hard;
                return hard;
            case DifficultyLevel::VERY_HARD:
                sudoku::util::VeryHard veryHard;
                return veryHard;
            case DifficultyLevel::EXPERT:
                sudoku::util::Expert expert;
                return expert;
        }
    }
    class Easy : public Difficulty
    {
        public:
            uint8_t Easy::GetBlanckNumbers() override {
                return 15 + GetRandomNumber();
            }
    };

    class Normal : public Difficulty {
        public:
            uint8_t Normal::GetBlanckNumbers() override {
                return 25 + GetRandomNumber();
            }
    };

    class Hard : public Difficulty {
        public:
            uint8_t Hard::GetBlanckNumbers() override {
                return 35 + GetRandomNumber();
            }
    };

    class VeryHard : public Difficulty {
        public:
            uint8_t VeryHard::GetBlanckNumbers() override {
                return 45 + GetRandomNumber();
            }
    };

    class Expert : public Difficulty {
        public:
            uint8_t Expert::GetBlanckNumbers() override {
                return 55 + GetRandomNumber();
            }
    };


}