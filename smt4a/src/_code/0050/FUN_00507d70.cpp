#include "common.h"

struct CounterPair {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ s32 limit;
    /* 0x40 */ s32 count;
};

/* How many counts remain below the limit. */
extern "C" s32 FUN_00507d70(const CounterPair *pair)
{
    return pair->limit - pair->count;
}
