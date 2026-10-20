#include "shard/Shard003D.h"

extern "C" {

extern s32 jyoucyuGetTableEntry(u32 index);
extern void FUN_003d5520(u32 a, u32 b, u32 c);

void FUN_003d2d34(u32 a, u32 b, u32 c)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        FUN_003d5520(a, b, c);
    }
}

} /* extern "C" */
