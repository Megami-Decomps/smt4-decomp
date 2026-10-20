#include "shard/Shard003A.h"

extern "C" {

typedef struct FloatPair {
    /* 0x00 */ s8 value;
    /* 0x04 */ f32 a;
    /* 0x08 */ f32 b;
} FloatPair;

extern FloatPair DAT_005c10c0;

s32 getFloatPairValue(void)
{
    return DAT_005c10c0.value;
}

} /* extern "C" */
