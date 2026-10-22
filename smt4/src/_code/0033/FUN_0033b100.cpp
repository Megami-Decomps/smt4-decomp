/* NON_MATCHING: pending-action resets use different saved registers, writeback, and branch layout. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" void FUN_0033b100(BtlMainState *state, s32 mode)
{
    struct UnitActionView {
        u8 unk000[0x14c];
        u32 pending[2];
    };
    struct EntryUnitView {
        u8 unk000[0xcc];
        UnitActionView unit;
    };
    typedef char EntryUnitLayoutCheck[offsetof(EntryUnitView, unit) == 0xcc &&
        offsetof(UnitActionView, pending) == 0x14c ? 1 : -1];
    for (s32 action = 0; action < BTL_ENTRY_COUNT; ++action) {
        s32 index = state->actions.records[action].participant.combatantIndex;
        if (index >= 0) {
            BtlEntry *entry = &state->entries[index];
            u32 flags = entry->flags;
            if ((flags & BTL_ENTRY_FLAG_ACTIVE) != 0 && (flags & BTL_ENTRY_FLAG_BLOCKED) == 0) {
                UnitActionView *unit = &((EntryUnitView *)entry)->unit;
                if (unit != NULL) {
                    if (mode != 0) {
                        if (mode != 1 || (flags & BTL_ENTRY_FLAG_PRESENT) != 0) {
                            unit->pending[0] = 0;
                            unit->pending[1] = 0;
                        }
                    } else if ((flags & BTL_ENTRY_FLAG_PRESENT) == 0) {
                        unit->pending[0] = 0;
                        unit->pending[1] = 0;
                    }
                }
            }
        }
    }
}
