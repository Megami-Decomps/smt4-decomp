#include "battle/BtlMainAccess.h"

// Finds an existing or empty ID slot and increments its saturating counter.
extern "C" void btlIncrementSaturatingSlotCounter(BtlMainStateA* state, s32 id)
{
    for (s32 i = 0; i < 16; ++i) {
        BattleCountSlot* slot = &state->counters.slots[i];
        s32 stored = slot->id;
        if (stored != id) {
            if (stored != 0) {
                continue;
            }
            slot->id = static_cast<s16>(id);
        }
        if (slot->count < 0xffff) {
            ++slot->count;
        }
        return;
    }
}
