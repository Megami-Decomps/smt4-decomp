/* NON_MATCHING: the battle flags are read as one 64-bit mask and re-read per row as in retail; retail keeps the zero in r7 and reuses r5 for the second flag-word base while the build uses r5/r7/r8 for them. */
#include "common.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "battle/btlMain.h"

/* The debug menu (only the list handle). */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
};

/* The battle flag words at 0x44A8 and 0x44AC read together as one 64-bit mask. */
struct BattleFlagView {
    u8 unk0000[0x44A8];
    u64 flags;
};

extern "C" {
extern u32 DAT_004346e8[];
extern s32 DAT_00439ad4;

void asdListBoxAddItems(u32 list, const u32 *names, s32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 list, const char *text);
void asdListBoxSetItemMode2(u32 list, s32 item, s32 value);
void asdListBoxSetItemMode3(u32 list, s32 item, s32 value, s32 min, s32 max, s32 flag);
s32 *gameGetSlotTable(void);

/* Fills the debug list with the battle state's flag bits and counters. */
void FUN_003c39fc(BattleFlagMenu *menu, BtlMainState *battle)
{
    u8 *state = reinterpret_cast<u8 *>(battle);
    const BattleFlagView *view = reinterpret_cast<const BattleFlagView *>(battle);
    menu->list = asdListBoxCreateDefault(*(u32 *)(state + 0x5C), 0x73, 0, 0);
    asdListBoxAddItems(menu->list, DAT_004346e8, 29);
    asdListBoxSetByteValue(menu->list, 1);
    jobSetText(menu->list, "btl Flag Menu");
    asdListBoxSetItemMode2(menu->list, 0, ((u32)view->flags & 0x4) >> 2);
    asdListBoxSetItemMode2(menu->list, 1, ((u32)view->flags & 0x8) >> 3);
    asdListBoxSetItemMode2(menu->list, 2, ((u32)view->flags & 0x10) >> 4);
    asdListBoxSetItemMode2(menu->list, 3, ((u32)view->flags & 0x20) >> 5);
    asdListBoxSetItemMode2(menu->list, 5, ((u32)view->flags & 0x40) >> 6);
    asdListBoxSetItemMode2(menu->list, 6, ((u32)view->flags & 0x80) >> 7);
    asdListBoxSetItemMode3(menu->list, 4, *(s32 *)(state + 0x4A50), 0, 99999, 0);
    asdListBoxSetItemMode2(menu->list, 7, ((u32)view->flags & 0x100) >> 8);
    asdListBoxSetItemMode2(menu->list, 8, ((u32)view->flags & 0x200) >> 9);
    asdListBoxSetItemMode2(menu->list, 9, ((u32)view->flags & 0x400) >> 10);
    asdListBoxSetItemMode2(menu->list, 10, ((u32)view->flags & 0x800) >> 11);
    asdListBoxSetItemMode3(menu->list, 11, *(s32 *)(state + 0x49C8), 0, 400, 0);
    asdListBoxSetItemMode3(menu->list, 12, *gameGetSlotTable(), 0, 999999999, 0);
    asdListBoxSetItemMode2(menu->list, 13, ((u32)view->flags & 0x20000) >> 17);
    asdListBoxSetItemMode2(menu->list, 14, ((u32)view->flags & 0x400000) >> 22);
    asdListBoxSetItemMode2(menu->list, 15, ((u32)view->flags & 0x800000) >> 23);
    asdListBoxSetItemMode2(menu->list, 16, ((u32)view->flags & 0x1000000) >> 24);
    asdListBoxSetItemMode2(menu->list, 17, ((u32)view->flags & 0x2000000) >> 25);
    asdListBoxSetItemMode2(menu->list, 18, ((u32)view->flags & 0x4000000) >> 26);
    asdListBoxSetItemMode2(menu->list, 19, ((u32)view->flags & 0x8000000) >> 27);
    asdListBoxSetItemMode2(menu->list, 20, ((u32)view->flags & 0x10000000) >> 28);
    asdListBoxSetItemMode2(menu->list, 21, ((u32)view->flags & 0x20000000) >> 29);
    asdListBoxSetItemMode2(menu->list, 22, (view->flags & 0x100000000ULL) != 0);
    asdListBoxSetItemMode2(menu->list, 23, (view->flags & 0x200000000ULL) != 0);
    asdListBoxSetItemMode3(menu->list, 24, *(s32 *)(state + 0x2F2C), -1, 999, 0);
    asdListBoxSetItemMode2(menu->list, 25, (view->flags & 0x400000000ULL) != 0);
    asdListBoxSetItemMode3(menu->list, 26, *(s32 *)(state + 0x2F34), 0, 4, 0);
    asdListBoxSetItemMode3(menu->list, 27, DAT_00439ad4, -1, 999, 0);
    asdListBoxSetItemMode2(menu->list, 28, (view->flags & 0x4000000000ULL) != 0);
}

} /* extern "C" */
