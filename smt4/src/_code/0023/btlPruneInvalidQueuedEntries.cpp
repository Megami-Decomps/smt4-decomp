/* NON_MATCHING: the complete 24-instruction control flow matches, but flags, queue address and table-base registers are allocated differently. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W6_W6Match3_BattleQueue.h"

struct BattleQueueView {
    /* 0x0000 */ u8 unk0000[0x2f06];
    /* 0x2f06 */ s16 entries[12];
};

extern "C" void btlPruneInvalidQueuedEntries(BtlMainState* state)
{
    BattleQueueView* queue = (BattleQueueView*)state;
    for (s32 index = 0; index < 12; ++index) {
        s32 entry = queue->entries[index];
        if (entry >= 0) {
            u32 flags = state->entries[entry].flags;
            if ((flags & BTL_ENTRY_FLAG_ACTIVE) == 0) {
                queue->entries[index] = -1;
            } else if (flags & BTL_ENTRY_FLAG_BLOCKED) {
                queue->entries[index] = -1;
            }
        }
    }
}
