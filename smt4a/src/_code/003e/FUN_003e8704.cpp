#include "common.h"

namespace {
struct KeyedAccumulator {
    /* 0x0000 */ u8 unk0000[0x236C];
    /* 0x236C */ u32 keys[6];
    /* 0x2384 */ s32 totals[6];
    /* 0x239C */ s32 replacementIndex;
};
}
extern "C" {
/* Accumulates an existing key or replaces the next slot in the six-entry ring. */
void FUN_003e8704(KeyedAccumulator *work, u32 key, s32 amount)
{
    for (s32 i = 0; i < 6; ++i) {
        if (work->keys[i] != 0 && work->keys[i] == key) {
            work->totals[i] += amount;
            return;
        }
    }
    work->keys[work->replacementIndex] = key;
    work->totals[work->replacementIndex] = amount;
    ++work->replacementIndex;
    if (work->replacementIndex > 5) {
        work->replacementIndex = 0;
    }
}
}
