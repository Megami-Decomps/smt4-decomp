#include "common.h"

extern "C" {

typedef struct Counters {
    /* 0x000 */ u8 unk000[0x658];
    /* 0x658 */ u32 unk658;
    /* 0x65C */ u8 unk65C[4];
    /* 0x660 */ u32 unk660;
    /* 0x664 */ u32 unk664;
} Counters;

extern struct {
    u8 unk0[4];
    Counters *counters;
} DAT_0043dcb0;

s32 FUN_001c3688(void)
{
    return (s16)DAT_0043dcb0.counters->unk660;
}

} /* extern "C" */
