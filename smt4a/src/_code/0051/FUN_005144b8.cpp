/* NON_MATCHING: armcc merges the adjacent loads into ldrd; retail uses two ldr (+12 first, then +8). */
#include "common.h"

struct PairWords {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 first;
    /* 0x0c */ u32 second;
};

/* Sum of the two words. */
extern "C" u32 FUN_005144b8(const PairWords *pair)
{
    return pair->second + pair->first;
}
