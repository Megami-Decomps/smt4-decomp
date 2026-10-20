#include "common.h"

extern "C" {

typedef struct Counters {
    /* 0x000 */ u8 unk000[0x670];
    /* 0x670 */ u32 unk670;
} Counters;

extern struct {
    u8 unk0[4];
    Counters *counters;
} DAT_0043dcb0;

s32 FUN_002015a4(void)
{
    return (s16)DAT_0043dcb0.counters->unk670;
}

} /* extern "C" */
