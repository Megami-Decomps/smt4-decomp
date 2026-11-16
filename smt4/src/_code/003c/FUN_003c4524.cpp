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
    u32 selected = asdListBoxGetSelectedItemId(menu->list);
    u64 *flags = &battle->editorMask;
    switch (selected) {
    case 0:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x1000;
        else
            *flags &= ~(u64)0x1000;
        break;
    case 1:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x2000;
        else
            *flags &= ~(u64)0x2000;
        break;
    case 2:
        battle->debugMenu.command = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->list), selected);
        break;
    case 3:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x40000;
        else
            *flags &= ~(u64)0x40000;
        break;
    case 4:
        if (listBoxItemHasOwner(menu->list, selected))
            *flags |= 0x200000;
        else
            *flags &= ~(u64)0x200000;
        break;
    default:
        break;
    }
}
}
