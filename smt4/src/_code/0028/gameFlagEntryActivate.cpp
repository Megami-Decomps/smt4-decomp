/* NON_MATCHING: retail reloads the entry flags for the final clears, uses unaligned word stores
 * for the primary counters, and joins the successful slot path with the common return. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code0029.h"
#include "gamedata/GameDataAccess_VariantA.h"
#include "code/Code001b.h"

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
void words3Clear(void *words);
void FUN_0023ddbc(u32 flag, s32 value);

/* Reports a game flag change to FUN_0023ddbc, then sets or clears the flag's bit (gameFlagSetValue's body). */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    GameFlagBlockPrefixIV *block = reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock());

    FUN_0023ddbc(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->packedFlags[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->packedFlags[index] &= keep;
    }
}

/* Clears the selection's flags 0x500-0x51f, as in questDeactivate. */
static __inline void clearSelectedQuestFlags(void)
{
    u32 flag;

    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Activates an available quest entry and resets its selection or repeat-slot progress. */
u32 gameFlagEntryActivate(u32 id)
{
    GameFlagBlockPrefixIV *flags = reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock());
    GameFlagEntryIV *entry = &((GameFlagEntryIV *)flags->unk200)[id];
    ActiveFlagBlockView *block = (ActiveFlagBlockView *)gameGetFlagBlock();
    if (!(entry->flags & 1) && id < 0x15e)
        return 0;
    s32 selectionKind = table1bOr1cGetRecordValue(id);
    if (!dataTable1bOr1cRecordHasFlag1(id) && selectionKind && block->prefix.selectedEntryIndex)
        return 0;
    entry->flags = (entry->flags & ~4) | 2;
    if (entry->value)
        entry->flags |= 0x40;
    else
        entry->flags &= ~0x40;
    entry->flags &= ~0x80;
    entry->secondaryFlags &= ~5;
    if (dataTable1bOr1cRecordHasFlag1(id)) {
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
        clearSelectedQuestFlags();
    }
    return 1;
}
}
