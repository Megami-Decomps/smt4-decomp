/* NON_MATCHING: retail hoists the unit base pointer and the id-list base offset (8) into registers and indexes with a register offset; built recomputes addresses per access */
#include "common.h"

struct UnitMember {
    u8 unk00[8];        // 0x00
    s16 ids[50];        // 0x08
    u8 unk6C[0xF8];     // 0x6C
    u8 data[0x2A4];     // 0x164
};

struct UnitListState {
    u8 unk0000[0x1FFC];   // 0x0000
    UnitMember *units;    // 0x1FFC
};

extern "C" {

/* Finds the unit (of 109) whose id list contains `id` and returns its data block (offset 0x164); NULL when none does. */
u8 *FUN_001568f8(UnitListState *state, s32 id)
{
    for (s32 unit = 0; unit < 109; unit++) {
        for (s32 i = 0; i < 50; i++) {
            s32 entry = state->units[unit].ids[i];

            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return state->units[unit].data;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
