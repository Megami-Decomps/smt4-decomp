#include "common.h"

extern "C" {
const u8 *FUN_001c35e8();
/* Tests the indexed bit using one-based indices. */
s32 FUN_00343bd8(s32 index)
{
    --index;
    const u8 *flags = FUN_001c35e8();
    return (flags[index / 8] & (1u << (index % 8))) != 0;
}
}
