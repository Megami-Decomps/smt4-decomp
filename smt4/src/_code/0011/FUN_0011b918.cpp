#include "common.h"

extern "C" {

typedef struct Counter {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0x40];
    /* 0x48 */ u16 unk48;
    /* 0x4A */ u16 unk4A;
} Counter;

void FUN_0011b918(Counter *counter)
{
    counter->unk00 = 0;
    counter->unk04 = 0;
    counter->unk48 = 0;
    counter->unk4A = 0;
}

} /* extern "C" */
