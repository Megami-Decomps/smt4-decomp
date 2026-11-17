/* NON_MATCHING: retail derives the loop end as 4 + 50 at run time (an inlined range helper) and needs fewer saved registers */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

struct BtlEntrySelector {
    u8 unk00[0x68];
    s16 entryIndex; /* 0x68 */
};

extern "C" {

/* Whether another active, targetable enemy entry shares the selected entry's id but not its selection slot. */
u32 FUN_003f06b4(BtlMainStateA *state, BtlEntrySelector *selector)
{
    if (selector != NULL) {
        BtlCombatantEntryA *self = &state->entries[selector->entryIndex];
        s32 i;

        for (i = 4; i < 54; i++) {
            BtlCombatantEntryA *other = &state->entries[i];

            if (other != NULL && (g_btlMain.combatantMasks.required & other->flags) &&
                !(g_btlMain.exclusionMask & other->flags) && (other->flags & g_btlMain.actorCategories[2]) &&
                other->selectionIndex != self->selectionIndex &&
                other->data.id == self->data.id) {
                return 1;
            }
        }
    }
    return 0;
}
}
