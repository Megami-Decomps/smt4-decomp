#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Pair;

void FUN_001314f0(Pair *pair, u32 a, u32 b)
{
    pair->unk4 = a;
    pair->unk8 = b;
}

} /* extern "C" */
