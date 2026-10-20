#include "shard/Shard003D.h"

extern "C" {

extern s32 jyoucyuGetTableEntry(u32 index);
extern void FUN_0036be10(u32 a, u32 b);

void FUN_003d5000(u32 value)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_0036be10(value, 0);
    }
}

} /* extern "C" */
