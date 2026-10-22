/* NON_MATCHING: retail derives the loop end as 4 + 50 at run time (an inlined range helper) and needs fewer saved registers */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BtlTargetMasks {
    u8 unk00[0x58];
    u64 active;     /* 0x58 */
    u8 unk60[0x10];
    u64 targetable; /* 0x70 */
    u8 unk78[8];
    u64 excluded;   /* 0x80 */
};

struct BtlEntrySelector {
    u8 unk00[0x68];
    s16 entryIndex; /* 0x68 */
};

extern "C" {
extern BtlTargetMasks g_btlMain;

/* Whether another active, targetable enemy entry shares the selected entry's id but not its selection slot. */
u32 FUN_003f06b4(BtlMainStateA *state, BtlEntrySelector *selector)
{
    if (selector != NULL) {
        BtlCombatantEntryA *self = &state->entries[selector->entryIndex];
        s32 i;

        for (i = 4; i < 54; i++) {
            BtlCombatantEntryA *other = &state->entries[i];

            if (other != NULL && (g_btlMain.active & other->flags) &&
                !(g_btlMain.excluded & other->flags) && (other->flags & g_btlMain.targetable) &&
                other->indexView.selectionIndex != self->indexView.selectionIndex &&
                other->id == self->id) {
                return 1;
            }
        }
    }
    return 0;
}
}
