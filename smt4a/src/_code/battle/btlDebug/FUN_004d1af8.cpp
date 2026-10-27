/* NON_MATCHING: typed rewrite of the battle flag menu builder (396 vs 395 rows, call order identical); retail loads the 64-bit mask halves with ldr/ldm pairs in a different order and register assignment than this build (ldrd/ldr). */
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

/* The debug flag menu screen: its list box. */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

extern "C" {

extern u64 DAT_005715f8[49];
extern const AsdListBoxEntry DAT_00571b40[33];
extern u32 DAT_0057a6e8;

u32 jobIsValid(u32 handle);
u32 jobStop(u32 handle, u16 delay);
void FUN_003592dc(u32 handle);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 list, u32 id, s32 on);
void asdListBoxSetIntItem(u32 list, u32 id, s32 value, s32 minimum, s32 maximum, u32 option);
u32 *gameGetSlotTable(void);
s32 FUN_003e53ec(void);

/* Rebuilds the battle flag menu: closes the old list box and fills a new one with the marker flag toggles and counters. */
void FUN_004d1af8(BattleFlagMenu *menu, BtlMainStateA *battle)
{
    u8 *state = reinterpret_cast<u8 *>(battle);
    if (jobIsValid(menu->listBox) != 0) {
        FUN_003592dc(menu->listBox);
        jobStop(menu->listBox, 0);
    }
    menu->listBox = asdListBoxCreateDefaultFlags(*reinterpret_cast<u32 *>(state + 0x80), 0x75, 0, 0);
    asdListBoxAddItems(menu->listBox, DAT_00571b40, 33);
    asdListBoxSetByteValue(menu->listBox, 1);
    jobSetText(menu->listBox, "btl Flag Menu");
    asdListBoxSetToggleItem(menu->listBox, 0, (battle->markerMasks.bits & DAT_005715f8[9]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 1, (battle->markerMasks.bits & DAT_005715f8[10]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 2, (battle->markerMasks.bits & DAT_005715f8[11]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 3, (battle->markerMasks.bits & DAT_005715f8[12]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 5, (DAT_005715f8[13] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 6, (DAT_005715f8[14] & battle->markerMasks.bits) != 0);
    asdListBoxSetIntItem(menu->listBox, 4, *reinterpret_cast<s32 *>(state + 0x4D5C), 0, 99999, 0);
    asdListBoxSetToggleItem(menu->listBox, 7, (DAT_005715f8[15] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 8, (battle->markerMasks.bits & DAT_005715f8[46]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 9, (DAT_005715f8[16] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 10, (DAT_005715f8[17] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 11, (DAT_005715f8[18] & battle->markerMasks.bits) != 0);
    asdListBoxSetIntItem(menu->listBox, 12, *reinterpret_cast<s32 *>(state + 0x4CD4), 0, 400, 0);
    asdListBoxSetIntItem(menu->listBox, 13, *gameGetSlotTable(), 0, 999999999, 0);
    asdListBoxSetToggleItem(menu->listBox, 14, (battle->markerMasks.bits & DAT_005715f8[24]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 15, (DAT_005715f8[28] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 16, (battle->markerMasks.bits & DAT_005715f8[29]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 17, (battle->markerMasks.bits & DAT_005715f8[30]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 18, (battle->markerMasks.bits & DAT_005715f8[31]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 19, (DAT_005715f8[32] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 20, (DAT_005715f8[33] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 21, (DAT_005715f8[34] & battle->markerMasks.bits) != 0);
    asdListBoxSetToggleItem(menu->listBox, 22, (battle->markerMasks.bits & DAT_005715f8[35]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 23, (battle->markerMasks.bits & DAT_005715f8[38]) != 0);
    asdListBoxSetToggleItem(menu->listBox, 24, (DAT_005715f8[39] & battle->markerMasks.bits) != 0);
    asdListBoxSetIntItem(menu->listBox, 25, *reinterpret_cast<s32 *>(state + 0x302C), 0xffffffff, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 26, (DAT_005715f8[40] & battle->markerMasks.bits) != 0);
    asdListBoxSetIntItem(menu->listBox, 27, *reinterpret_cast<s32 *>(state + 0x3034), 0, 4, 0);
    asdListBoxSetIntItem(menu->listBox, 28, DAT_0057a6e8, -1, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 29, (battle->markerMasks.bits & DAT_005715f8[44]) != 0);
    asdListBoxSetIntItem(menu->listBox, 30, FUN_003e53ec(), 0, 8, 0);
    asdListBoxSetToggleItem(menu->listBox, 31, (battle->markerMasks.bits & DAT_005715f8[48]) != 0);
    asdListBoxSetIntItem(menu->listBox, 32, *reinterpret_cast<s32 *>(state + 0x4D6C), 0, 10, 0);
}

} /* extern "C" */
