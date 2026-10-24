/* NON_MATCHING: retail unrolls the 12-slot scan by two (checks slot i and i+1 per iteration) and adds the 0x11a2c member offset to a pre-scaled index; built keeps a plain one-slot loop */
#include "common.h"

extern "C" {

struct UnitSlot {
    /* 0x000 */ u8 unk000[0x14c];
};

struct BattleUnitTable {
    /* 0x00000 */ u8 unk00000[0x11a2c];
    /* 0x11a2c */ struct {
        u16 state;
        u8 unk02[0x14c - 2];
    } units[12];
};

struct BattleUi {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BattleUnitTable *table;
};

extern BattleUi g_btlUi;

/* Returns 1 when no unit slot is in a busy state (1..4). */
u32 FUN_004ab784(void)
{
    s32 i;

    if (g_btlUi.table != NULL) {
        for (i = 0; i < 12; i++) {
            u32 state = g_btlUi.table->units[i].state;
            if (state - 1 < 4) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
