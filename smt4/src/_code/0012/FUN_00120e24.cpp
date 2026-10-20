/* NON_MATCHING: register allocation only: retail keeps the base sum in r7, the first lookup in r6 and the config pointer in r5 (summing the three base words in a different order); built uses r6/r5/r7 and loads the third word last. */
#include "common.h"

extern "C" {

typedef struct Totals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 mode;
    /* 0x08 */ s32 bonus;
    /* 0x0C */ s32 baseA;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 baseC;
    /* 0x18 */ s32 baseB;
    /* 0x1C */ u8 flagA;
    /* 0x1D */ u8 flagB;
    /* 0x1E */ u8 flagC;
    /* 0x1F */ u8 unk1F;
    /* 0x20 */ s32 count;
} Totals;

typedef struct Config {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 value;
} Config;

extern Config DAT_0044e908;

u32 FUN_002baf30(void);
u32 FUN_002bafb0(void);
s32 FUN_0013127c(u32 a, u32 value);
s32 FUN_001310c4(u32 a, u32 value);

/* Adds up the object's base amounts, the two lookups and the optional bonus and per-item amounts. */
s32 FUN_00120e24(Totals *totals)
{
    s32 base = totals->baseA + totals->baseB + totals->baseC;
    s32 first = FUN_0013127c(FUN_002baf30(), DAT_0044e908.value);
    s32 second = FUN_001310c4(FUN_002bafb0(), DAT_0044e908.value);
    s32 total = second + first + base;
    u8 hasItems;
    s32 count;

    if (totals->flagA == 1) {
        total = total + totals->bonus;
    }
    if (totals->mode == 1 && totals->flagC != 0) {
        total = total + totals->bonus;
    }
    hasItems = totals->flagB != 0;
    count = 0;
    if (hasItems) {
        count = totals->count;
    }
    if (hasItems && 0 < count) {
        total = total + count * 8;
    }
    return total;
}

} /* extern "C" */
