#include "common.h"

extern "C" {

typedef struct Counters {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 unk008;
    /* 0x009 */ u8 unk009[0x645];
    /* 0x64E */ s16 unk64E;
    /* 0x650 */ s16 unk650;
} Counters;

extern struct {
    u8 unk0[4];
    Counters *counters;
} DAT_0043dcb0;

u32 FUN_002af600(u32 id)
{
    u32 result;
    u8 matches;

    matches = (int)DAT_0043dcb0.counters->unk64E == id;
    if (matches) {
        id = DAT_0043dcb0.counters->unk008;
    }
    if ((matches && id == 1) && (DAT_0043dcb0.counters->unk650 < 1)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
