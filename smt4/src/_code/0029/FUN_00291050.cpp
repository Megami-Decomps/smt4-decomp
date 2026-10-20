#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
} Pair;

void FUN_00291050(Pair *pair)
{
    pair->unk0 = 0;
    pair->unk4 = 0;
}

} /* extern "C" */
