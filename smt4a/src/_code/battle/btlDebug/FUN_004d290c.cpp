/* NON_MATCHING: typed rewrite (678 vs 661 rows); retail forms some of the 64-bit mask loads through the shared DAT_005715f8[0] base (e.g. ldr r2,[r1,#88]) and the rest with ldm/ldrd from separate symbols, and orders the load/orr pairs differently. */
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

/* The debug flag menu screen: its list box. */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

extern "C" {

/* The table of flag masks the menu items toggle in the battle's 64-bit marker flags. */
extern u64 DAT_005715f8[49];
extern u32 DAT_0057a6e8;
u32 asdListBoxGetSelectedItemId(u32 job);
u32 *asdListBoxGetIntValuePtr(u32 listBox, u32 id);
u8 *gameGetSlotTable(void);

/* Applies the selected list item of the battle flag menu: toggles of the marker flag bits and counters. */
void FUN_004d290c(BattleFlagMenu *menu, BtlMainStateA *battle)
{
    u8 *state = reinterpret_cast<u8 *>(battle);
    u32 item = asdListBoxGetSelectedItemId(menu->listBox);
    switch (item) {
    case 0:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[9];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[9];
        break;
    case 1:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[10];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[10];
        break;
    case 2:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[11];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[11];
        break;
    case 3:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[12];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[12];
        break;
    case 4:
        *reinterpret_cast<u32 *>(state + 0x4D5C) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 5:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[13];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[13];
        break;
    case 6:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[14];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[14];
        break;
    case 7:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[15];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[15];
        break;
    case 8:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[46];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[46];
        break;
    case 9:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[16];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[16];
        break;
    case 10:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[17];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[17];
        break;
    case 11:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[18];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[18];
        break;
    case 12:
        *reinterpret_cast<u32 *>(state + 0x4CD4) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 13:
        *reinterpret_cast<u32 *>(gameGetSlotTable()) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 14:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[24];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[24];
        break;
    case 15:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[28];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[28];
        break;
    case 16:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[29];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[29];
        break;
    case 17:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[30];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[30];
        break;
    case 18:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[31];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[31];
        break;
    case 19:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[32];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[32];
        break;
    case 20:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[33];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[33];
        break;
    case 21:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[34];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[34];
        break;
    case 22:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[35];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[35];
        break;
    case 23:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[38];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[38];
        break;
    case 24:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[39];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[39];
        break;
    case 25:
        *reinterpret_cast<u32 *>(state + 0x302C) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 26:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[40];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[40];
        break;
    case 27:
        *reinterpret_cast<u32 *>(state + 0x3034) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 28:
        DAT_0057a6e8 = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 29:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[44];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[44];
        break;
    case 30:
        *reinterpret_cast<s16 *>(gameGetSlotTable() + 0x2C4E) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    case 31:
        if (listBoxItemHasOwner(menu->listBox, item) != 0)
            battle->markerMasks.bits |= DAT_005715f8[48];
        else
            battle->markerMasks.bits &= ~DAT_005715f8[48];
        break;
    case 32:
        *reinterpret_cast<u32 *>(state + 0x4D6C) = *asdListBoxGetIntValuePtr(menu->listBox, item);
        break;
    }
}

} /* extern "C" */
