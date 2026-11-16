#include "common.h"

extern "C" {
const u8 *saveGetIndexedFlagBytes();
/* Tests the indexed bit using one-based indices. */
s32 gameTestIndexedAuxiliaryFlag(s32 index)
{
    --index;
    const u8 *flags = saveGetIndexedFlagBytes();
    return (flags[index / 8] & (1u << (index % 8))) != 0;
}
}
