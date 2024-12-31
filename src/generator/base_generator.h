#include <cstdint>
#include <memory>
#include <vector>

namespace sudoku::generator
{
    class BaseGenerator {
        public:
            virtual std::vector<std::vector<uint8_t>> generate(uint8_t difficulty);
    };
} // namespace sudoku::generator
