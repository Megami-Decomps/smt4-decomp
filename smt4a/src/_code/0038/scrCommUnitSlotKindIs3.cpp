#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[0x152];
    /* 0x152 */ u16 slots[1];   /* per-slot words: bits 10 and up hold the slot's kind */
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;

BtlUnit *btlUnitGet(u32 id);
s32 scrGetArg(s32 index);
void scrSetResult(s32 value);

/* Script command: reports whether slot `scrGetArg` of the script unit has kind 3. Returns 1. */
u32 scrCommUnitSlotKindIs3(s32 firstArg)
{
    s32 slot = scrGetArg(firstArg);
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    scrSetResult(stats->slots[slot] >> 10 == 3);
    return 1;
}

} /* extern "C" */
