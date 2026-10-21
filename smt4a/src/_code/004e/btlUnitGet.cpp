/* NON_MATCHING: retail retains separate signed bounds branches and adds the unit-array header after indexing; compiled code schedules those operations differently. */
#include "common.h"

struct BattleUnit {
    u32 storage[0x495]; // 0x1254-byte unit work slot
};
struct BattleUnitArray {
    u32 unk00;           // 0x00
    BattleUnit units[12]; // 0x04
};
struct BattleActionState {
    u32 unk00;              // 0x00
    BattleUnitArray* units; // 0x04
};
struct BattleUnitReference {
    u8 unk00[0xa4]; // 0x00
    s32 index;      // 0xa4
};

extern "C" {
extern BattleActionState g_btlAction;

// Resolves a reference to one of the twelve battle-unit work slots.
BattleUnit* btlUnitGet(BattleUnitReference* const* reference)
{
    if (*reference != NULL) {
        s32 index = (*reference)->index;
        if (index < 0) {
            return NULL;
        }
        if (index < 12) {
            return &g_btlAction.units->units[index];
        }
        return NULL;
    }
    return NULL;
}
}
