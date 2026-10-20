#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[0x3b4];
    /* 0x3b4 */ u32 slots[16];
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;

BtlUnit *btlUnitGet(u32 id);
u32 scrGetArg(u32 index);

/* Script command: stores script argument 0 in slot (script argument 1) of the script unit, if the slot exists. Returns 1. */
u32 scrCommUnitSlotSet(void)
{
    u32 value = scrGetArg(0);
    u32 slot = scrGetArg(1);

    if (slot >= 16) {
        return 1;
    }
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    stats->slots[slot] = value;
    return 1;
}

} /* extern "C" */
