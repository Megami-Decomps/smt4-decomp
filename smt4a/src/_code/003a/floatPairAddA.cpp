#include "shard/Shard003A.h"

extern "C" {

typedef struct FloatPair {
    /* 0x00 */ s8 value;
    /* 0x04 */ f32 a;
    /* 0x08 */ f32 b;
} FloatPair;

extern FloatPair g_effMenuState;

void floatPairAddA(f32 delta)
{
    g_effMenuState.a += delta;
}

} /* extern "C" */
