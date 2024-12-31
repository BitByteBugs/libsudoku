/**
 * a
 */

#include <cstdint>
#include <vector>

#include "base_generator.h"

namespace sudoku::generator
{
    class NativeGenerator : public BaseGenerator{
        public:
            std::vector<std::vector<uint8_t>> generate(uint8_t difficulty) override;
    };
} // namespace sudoku::generator
