/* NON_MATCHING: the entry flags load as an ldr pair where retail uses ldrd, and the index copy is scheduled before the r1 argument move; the unk158 address now matches retail (entries + (0x158 + index * 0x408)). */
#include "battle/btlAction.h"

/* The 0x408-byte combatant entry as the action target check sees it. */
struct ActionTargetEntry {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x66];
    /* 0x06E */ s16 selectionIndex;
    /* 0x070 */ u8 unk070[0xe8];
    /* 0x158 */ s32 unk158; /* positive: not selectable yet */
    /* 0x15C */ u8 unk15c[0x2ac];
};

typedef char ActionTargetEntrySizeCheck[sizeof(ActionTargetEntry) == 0x408 ? 1 : -1];

struct ActionTargetBattle {
    /* 0x0000 */ u8 unk0000[0x1ffc];
    /* 0x1FFC */ ActionTargetEntry *entries;
};

struct ActionTargetOwner {
    /* 0x00 */ ActionTargetBattle *battle;
};

struct ActionTargetSlot {
    /* 0x00 */ s32 taken;
    /* 0x04 */ u8 unk04[0xc];
};

struct ActionTargetSlots {
    /* 0x000 */ u8 unk000[0x9e4];
    /* 0x9E4 */ ActionTargetSlot slots[1];
};

extern "C" {

extern BtlActionGlobals g_btlAction;

ActionTargetEntry *FUN_003f0e20(ActionTargetBattle *battle, s32 index);

/* Whether the combatant at index (or the one it redirects to) is free and targetable. */
u32 FUN_004e83ac(ActionTargetOwner *owner, ActionTargetSlots *table, s32 index)
{
    ActionTargetEntry *target = FUN_003f0e20(owner->battle, index);
    if (target != NULL) {
        index = target->selectionIndex;
    }
    if (table->slots[index].taken == 0) {
        u64 flags = owner->battle->entries[index].flags;
        if ((flags & g_btlAction.targetableMask) != 0 && (flags & g_btlAction.untargetableMask) == 0 &&
            *reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(owner->battle->entries) + (0x158 + index * 0x408)) <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
