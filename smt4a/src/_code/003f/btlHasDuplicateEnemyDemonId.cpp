/* NON_MATCHING: 39 lines; btlRosterGroupRange matches the group bounds, remaining: initial r1/r0/r6 setup and r7/r8 register swap in the loop. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "util/SlotRangeSelect.h"

struct BtlEntrySelector {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ s16 entryIndex;
};

/* Returns 1 when another active enemy combatant in group 1 shares the selector entry's demon id. */
extern "C" u32 btlHasDuplicateEnemyDemonId(BtlMainStateA *state, BtlEntrySelector *selector)
{
    if (selector != NULL) {
        BtlCombatantEntryA *self = &state->entries[selector->entryIndex];
        const BtlMainGlobalsA *btl = &g_btlMain;
        s32 first = 0;
        s32 count = 0;
        btlRosterGroupRange(1, first, count);
        for (s32 i = first; i < first + count; i++) {
            BtlCombatantEntryA *other = &state->entries[i];
            if (other != NULL &&
                (other->flags & btl->combatantMasks.required) &&
                !(btl->exclusionMask & other->flags) &&
                (other->flags & btl->actorCategories[2]) &&
                other->selectionIndex != self->selectionIndex &&
                other->data.id == self->data.id) {
                return 1;
            }
        }
    }
    return 0;
}
