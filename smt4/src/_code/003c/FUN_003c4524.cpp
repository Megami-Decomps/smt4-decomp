/* NON_MATCHING: debug menu values and toggles recovered; one extra saved pointer and flag-result register allocation differ. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "shard/listBoxItemHasOwner.h"

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
    u32 flags;
    switch (selected) {
    case 0:
        flags = listBoxItemHasOwner(menu->list, selected) ?
                state->flags | 0x1000 : state->flags & ~0x1000;
        break;
    case 1:
        flags = listBoxItemHasOwner(menu->list, selected) ?
                state->flags | 0x2000 : state->flags & ~0x2000;
        break;
    case 2:
        state->command = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->list), selected);
        return;
    case 3:
        flags = listBoxItemHasOwner(menu->list, selected) ?
                state->flags | 0x40000 : state->flags & ~0x40000;
        break;
    case 4:
        flags = listBoxItemHasOwner(menu->list, selected) ?
                state->flags | 0x200000 : state->flags & ~0x200000;
        break;
    default:
        return;
    }
    state->flags = flags;
}
}
