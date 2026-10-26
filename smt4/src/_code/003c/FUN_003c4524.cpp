/* NON_MATCHING: registers and branches match; retail loads the flags word before the compare of the owner result, the build loads it after. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

struct BattleDebugList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
};

extern "C" {
u32 asdListBoxGetSelectedItemId(u32 list);

// Apply the selected battle debug-menu value or toggle its corresponding battle flag.
void FUN_003c4524(BattleDebugList* menu, BtlMainState* battle)
{
    // Both fields lie beyond the known IV battle-state prefix.
    struct BattleDebugState {
        /* 0x0000 */ u8 unk0000[0x2268];
        /* 0x2268 */ u32 command;
        /* 0x226C */ u8 unk226C[0x223C];
        /* 0x44A8 */ u32 flags;
    };
    BattleDebugState* state = reinterpret_cast<BattleDebugState*>(battle);
    u32 selected = asdListBoxGetSelectedItemId(menu->list);
    u32 *flags = &state->flags;
    switch (selected) {
    case 0:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x1000;
        else
            *flags &= ~0x1000;
        break;
    case 1:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x2000;
        else
            *flags &= ~0x2000;
        break;
    case 2:
        state->command = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->list), selected);
        break;
    case 3:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x40000;
        else
            *flags &= ~0x40000;
        break;
    case 4:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x200000;
        else
            *flags &= ~0x200000;
        break;
    default:
        break;
    }
}
}
