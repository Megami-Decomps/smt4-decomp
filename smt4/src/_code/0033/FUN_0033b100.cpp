/* NON_MATCHING: pending-action resets use different saved registers (retail keeps 96, 204 and zero in r6-r8). */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

struct UnitActionView {
    u8 unk000[0x14c];
    u32 pending[2];
};

/* Drop the unit's queued action words. */
static __inline void clearPending(UnitActionView *unit)
{
    unit->pending[0] = 0;
    unit->pending[1] = 0;
}

extern "C" void FUN_0033b100(BtlMainState *state, s32 mode)
{
    struct EntryUnitView {
        u8 unk000[0xcc];
        UnitActionView unit;
    };
    typedef char EntryUnitLayoutCheck[offsetof(EntryUnitView, unit) == 0xcc &&
        offsetof(UnitActionView, pending) == 0x14c ? 1 : -1];
    for (s32 action = 0; action < BTL_ENTRY_COUNT; ++action) {
        s32 index = state->actions.records[action].participant.combatantIndex;
        if (index >= 0) {
            u32 flags = state->entries[index].flags;
            if ((flags & BTL_ENTRY_FLAG_ACTIVE) != 0 && (flags & BTL_ENTRY_FLAG_BLOCKED) == 0) {
                UnitActionView *unit = &((EntryUnitView *)&state->entries[index])->unit;
                if (unit != NULL) {
                    if (mode == 0) {
                        if ((flags & BTL_ENTRY_FLAG_PRESENT) == 0) {
                            clearPending(unit);
                        }
                    } else if (mode == 1) {
                        if ((flags & BTL_ENTRY_FLAG_PRESENT) != 0) {
                            clearPending(unit);
                        }
                    } else {
                        clearPending(unit);
                    }
                }
            }
        }
    }
}
