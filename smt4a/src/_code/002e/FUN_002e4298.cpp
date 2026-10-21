/* NON_MATCHING: retail helpers pass six extended-value words in registers and keep the output pointer in fp, a custom ABI not expressible by these C++ declarations. */
#include "common.h"
extern "C" {
struct ExtendedValue { u32 first, second, third; };
ExtendedValue FUN_001c58e8(ExtendedValue left, ExtendedValue right);
void FUN_001c57ac(void *output, ExtendedValue value);
void FUN_002e4298(const ExtendedValue *left, const ExtendedValue *right, void *output) {
    if (!((left->first | right->first) & 0x40000000)) FUN_001c57ac(output, FUN_001c58e8(*left, *right));
}
}
