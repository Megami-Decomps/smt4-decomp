#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

/* unit-local: the target-selection table's per-slot entry and view used by btlActionTargetSlotScore. */
struct ActionTargetSlot {
    /* 0x00 */ s32 taken;
    /* 0x04 */ u8 unk04[0xc];
};

/* unit-local: target-slot table view for btlActionTargetSlotScore. */
struct ActionTargetSlots {
    /* 0x000 */ u8 unk000[0x9e4];
    /* 0x9E4 */ ActionTargetSlot slots[1];
};

/* unit-local: owner wrapper holding the battle state pointer. */
struct ActionTargetOwner {
    /* 0x00 */ BtlMainStateA *battle;
};

extern "C" {

/* Whether the combatant at listedId (or the one it redirects to) is free and targetable. */
u32 btlActionTargetSlotScore(ActionTargetOwner *owner, ActionTargetSlots *table, s32 listedId)
{
    s32 index = listedId;
    BtlCombatantEntryA *target = btlMainFindEntryByListedId(owner->battle, listedId);
    if (target != NULL) {
        index = target->selectionIndex;
    }
    if (table->slots[index].taken == 0) {
        if ((owner->battle->entries[index].flags & g_btlAction.targetableMask) != 0 &&
            (owner->battle->entries[index].flags & g_btlAction.untargetableMask) == 0 &&
            owner->battle->entries[index].targetDelay <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
