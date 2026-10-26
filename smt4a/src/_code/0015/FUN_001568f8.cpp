/* NON_MATCHING: the hoisted unit-table base matches retail; retail also keeps the id-list offset (8) in a register and indexes with a register offset, the build folds it into the ldrsh immediate. */
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
    UnitMember *units = state->units;
    for (s32 unit = 0; unit < 109; unit++) {
        for (s32 i = 0; i < 50; i++) {
            s32 entry = units[unit].ids[i];

            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return units[unit].data;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
