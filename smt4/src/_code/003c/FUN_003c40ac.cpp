/* NON_MATCHING: readable rewrite of the romwright dump (same switch, 29 items); retail forms each flag address in a fresh register (add r1,r4,#0x4400; add r1,r1,#0xa8; ldr r2,[r1]) and shares the final `str r2,[r1]` tail, the build updates the battle pointer in place. */
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "battle/btlHelp.h"
#include "battle/btlMain.h"

/* The debug flag menu screen: its list box. */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

extern "C" {

extern s32 DAT_00439ad4;
u32 asdListBoxGetSelectedItemId(u32 job);
s32 *gameGetSlotTable(void);

/* Applies the selected list item of the battle flag menu: toggles of the battle flag bits and counters. */
void FUN_003c40ac(BattleFlagMenu *menu, BtlMainState *battle)
{
    u8 *state = reinterpret_cast<u8 *>(battle);
    u32 item = asdListBoxGetSelectedItemId(menu->listBox);
    switch (item) {
    case 0:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x4;
        else
            battle->editorControl.flags &= ~0x4u;
        break;
    case 1:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x8;
        else
            battle->editorControl.flags &= ~0x8u;
        break;
    case 2:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x10;
        else
            battle->editorControl.flags &= ~0x10u;
        break;
    case 3:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x20;
        else
            battle->editorControl.flags &= ~0x20u;
        break;
    case 4:
        *reinterpret_cast<u32 *>(state + 0x4A50) = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 5:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x40;
        else
            battle->editorControl.flags &= ~0x40u;
        break;
    case 6:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x80;
        else
            battle->editorControl.flags &= ~0x80u;
        break;
    case 7:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x100;
        else
            battle->editorControl.flags &= ~0x100u;
        break;
    case 8:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x200;
        else
            battle->editorControl.flags &= ~0x200u;
        break;
    case 9:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x400;
        else
            battle->editorControl.flags &= ~0x400u;
        break;
    case 10:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x800;
        else
            battle->editorControl.flags &= ~0x800u;
        break;
    case 11:
        *reinterpret_cast<u32 *>(state + 0x49C8) = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 12:
        *gameGetSlotTable() = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 13:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x20000;
        else
            battle->editorControl.flags &= ~0x20000u;
        break;
    case 14:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x400000;
        else
            battle->editorControl.flags &= ~0x400000u;
        break;
    case 15:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x800000;
        else
            battle->editorControl.flags &= ~0x800000u;
        break;
    case 16:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x1000000;
        else
            battle->editorControl.flags &= ~0x1000000u;
        break;
    case 17:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x2000000;
        else
            battle->editorControl.flags &= ~0x2000000u;
        break;
    case 18:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x4000000;
        else
            battle->editorControl.flags &= ~0x4000000u;
        break;
    case 19:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x8000000;
        else
            battle->editorControl.flags &= ~0x8000000u;
        break;
    case 20:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x10000000;
        else
            battle->editorControl.flags &= ~0x10000000u;
        break;
    case 21:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags |= 0x20000000;
        else
            battle->editorControl.flags &= ~0x20000000u;
        break;
    case 22:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags44AC |= 0x1;
        else
            battle->editorControl.flags44AC &= ~0x1u;
        break;
    case 23:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags44AC |= 0x2;
        else
            battle->editorControl.flags44AC &= ~0x2u;
        break;
    case 24:
        *reinterpret_cast<u32 *>(state + 0x2F2C) = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 25:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags44AC |= 0x4;
        else
            battle->editorControl.flags44AC &= ~0x4u;
        break;
    case 26:
        *reinterpret_cast<u32 *>(state + 0x2F34) = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 27:
        DAT_00439ad4 = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(menu->listBox), item);
        break;
    case 28:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->editorControl.flags44AC |= 0x40;
        else
            battle->editorControl.flags44AC &= ~0x40u;
        break;
    }
}

} /* extern "C" */
