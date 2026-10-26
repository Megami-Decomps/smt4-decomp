/* NON_MATCHING: flag-store folding, two-byte counter clearing and active-slot address decomposition differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code0029.h"
#include "gamedata/GameDataAccess_VariantA.h"

struct ActiveFlagEntrySlotView {
    u16 id;
    u16 counters[6];
};
/* Active slots extend the shared prefix; their counters retain two-byte alignment. */
struct ActiveFlagBlockView {
    GameFlagBlockPrefixIV prefix;
    ActiveFlagEntrySlotView slots[4];
    u16 primaryCounters[6];
    u16 primaryCounter;
};
typedef char ActiveFlagBlockViewOffsetsCheck[offsetof(ActiveFlagBlockView, slots) == 0x842 &&
    offsetof(ActiveFlagBlockView, primaryCounters) == 0x87A ? 1 : -1];

extern "C" {
s32 table1bOr1cGetRecordValue(u32 id);
void words3Clear(void *words);
void FUN_0023ddbc(u32 flag, s32 value);

u32 FUN_0028eeb8(u32 id)
{
    GameFlagBlockPrefixIV *flags = reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock());
    GameFlagEntryIV *entry = &((GameFlagEntryIV *)flags->unk200)[id];
    ActiveFlagBlockView *block = (ActiveFlagBlockView *)gameGetFlagBlock();
    if (!(entry->flags & 1) && id < 0x15e)
        return 0;
    s32 selectionKind = table1bOr1cGetRecordValue(id);
    if (!FUN_00298f88(id) && selectionKind && block->prefix.selectedEntryIndex)
        return 0;
    entry->flags = (entry->flags & ~4) | 2;
    if (entry->value)
        entry->flags |= 0x40;
    else
        entry->flags &= ~0x40;
    entry->flags &= ~0x80;
    entry->secondaryFlags &= ~5;
    if (FUN_00298f88(id)) {
        if (selectionKind == 1) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (!block->slots[slot].id) {
                    block->slots[slot].id = id;
                    words3Clear(block->slots[slot].counters);
                    return 1;
                }
            }
        }
    } else if (selectionKind) {
        block->prefix.selectedEntryIndex = id;
        block->primaryCounters[0] = 0;
        block->primaryCounters[1] = 0;
        block->primaryCounters[2] = 0;
        block->primaryCounters[3] = 0;
        block->primaryCounters[4] = 0;
        block->primaryCounters[5] = 0;
        block->primaryCounter = 0;
        for (u32 flag = 0x500; flag < 0x520; ++flag) {
            GameFlagBlockPrefixIV *current = reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock());
            FUN_0023ddbc(flag, 0);
            current->packedFlags[flag >> 3] &= ~(1u << (flag & 7));
        }
    }
    return 1;
}
}
