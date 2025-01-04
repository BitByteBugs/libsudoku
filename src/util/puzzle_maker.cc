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
    Difficulty GetInstance(DifficultyLevel difficulty) {
        switch (difficulty) {
            case DifficultyLevel::EASY:
            {
                sudoku::util::Easy easy;
                return easy;
            }
            case DifficultyLevel::NORMAL:
            {
                sudoku::util::Normal normal;
                return normal;
            }
            case DifficultyLevel::HARD:
            {
                sudoku::util::Hard hard;
                return hard;
            }
            case DifficultyLevel::VERY_HARD:
            {
                sudoku::util::VeryHard veryHard;
                return veryHard;
            }
            case DifficultyLevel::EXPERT:
            {
                sudoku::util::Expert expert;
                return expert;
            }
        }
    }
    
    uint8_t sudoku::util::Easy::GetBlankNumbers() {
        return 15 + GetRandomNumber();
    }
    
    uint8_t sudoku::util::Normal::GetBlankNumbers() {
        return 25 + GetRandomNumber();
    }

    uint8_t sudoku::util::Hard::GetBlankNumbers() {
        return 35 + GetRandomNumber();
    }

    uint8_t sudoku::util::VeryHard::GetBlankNumbers() {
        return 45 + GetRandomNumber();
    }

    uint8_t sudoku::util::Expert::GetBlankNumbers() {
        return 55 + GetRandomNumber();
    }

    void MakePuzzle(std::vector<std::vector<uint8_t>>& grid, uint8_t difficulty) {
        Difficulty level = sudoku::util::GetInstance(difficulty);
        uint8_t blankNumbers = level.GetBlankNumbers();

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
}