/* Battle UI unit slots: a 0x14C-byte stride over the UI work area, with the busy state of slot n at 0x11A2C + n * 0x14C. */
#include "common.h"

extern "C" {

struct UnitSlot {
    /* 0x000 */ u8 unk000[0x14c];
};

struct BattleUi {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ UnitSlot *slots;
};

extern BattleUi g_btlUi;

#define UNIT_SLOT_STATE(slot) (*reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(slot) + 0x11A2C))

/* Returns 1 when no unit slot is in a busy state (1..4). */
u32 FUN_004ab784(void)
{
    UnitSlot *slots = g_btlUi.slots;

    if (slots != NULL) {
        for (s32 i = 0; i < 12; i += 2) {
            u32 first = UNIT_SLOT_STATE(&slots[i]);
            if (first - 1 < 4) {
                return 0;
            }
            u32 second = UNIT_SLOT_STATE(&slots[i + 1]);
            if (second - 1 < 4) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
