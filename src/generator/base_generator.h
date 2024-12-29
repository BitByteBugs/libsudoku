#include <cstdint>
#include <memory>
#include <vector>

namespace sudoku::generator
{
    class BaseGenerator {
        public:
            virtual std::vector<std::vector<uint8_t>> generate();
    };
} // namespace sudoku::generator
