#include "common.h"

namespace {
struct KeyedAccumulator {
    /* 0x0000 */ u8 unk0000[0x2270];
    /* 0x2270 */ u32 keys[6];
    /* 0x2288 */ s32 totals[6];
    /* 0x22A0 */ s32 replacementIndex;
};
}

// Accumulate for an existing nonzero key, or replace the next circular slot.
extern "C" void keyedAccumulatorAdd(KeyedAccumulator *work, u32 key, s32 amount)
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
