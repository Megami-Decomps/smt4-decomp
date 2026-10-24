/* NON_MATCHING: readable rebuild from asm of the debug battle-flag menu's list setup (title "btl Flag Menu"; items are the flag bits of the battle state and a few counters, the last item is a tail call); armcc here reloads the flag words and orders the shift/mask expressions differently (retail ands then shifts each bit, keeping zero in r7). */
#include "common.h"

/* The debug menu (only the list handle). */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 list;
};

extern "C" {
extern u32 DAT_004346e8[];
extern s32 DAT_00439ad4;

u32 asdListBoxCreateDefault(u32 owner, s32 id, s32 flag);
void asdListBoxAddItems(u32 list, const u32 *names, s32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 list, const char *text);
void asdListBoxSetItemMode2(u32 list, s32 item, s32 value);
void asdListBoxSetItemMode3(u32 list, s32 item, s32 value, s32 min, s32 max, s32 flag);
s32 *gameGetSlotTable(void);

/* Fills the debug list with the battle state's flag bits and counters. */
void FUN_003c39fc(BattleFlagMenu *menu, u8 *state)
{
    menu->list = asdListBoxCreateDefault(*(u32 *)(state + 0x5C), 0x73, 0);
    asdListBoxAddItems(menu->list, DAT_004346e8, 29);
    asdListBoxSetByteValue(menu->list, 1);
    jobSetText(menu->list, "btl Flag Menu");
    u32 flags = *(u32 *)(state + 0x44A8);
    asdListBoxSetItemMode2(menu->list, 0, (flags & 0x4) >> 2);
    asdListBoxSetItemMode2(menu->list, 1, (flags & 0x8) >> 3);
    asdListBoxSetItemMode2(menu->list, 2, (flags & 0x10) >> 4);
    asdListBoxSetItemMode2(menu->list, 3, (flags & 0x20) >> 5);
    asdListBoxSetItemMode2(menu->list, 5, (flags & 0x40) >> 6);
    asdListBoxSetItemMode2(menu->list, 6, (flags & 0x80) >> 7);
    asdListBoxSetItemMode3(menu->list, 4, *(s32 *)(state + 0x4A50), 0, 99999, 0);
    asdListBoxSetItemMode2(menu->list, 7, (flags & 0x100) >> 8);
    asdListBoxSetItemMode2(menu->list, 8, (flags & 0x200) >> 9);
    asdListBoxSetItemMode2(menu->list, 9, (flags & 0x400) >> 10);
    asdListBoxSetItemMode2(menu->list, 10, (flags & 0x800) >> 11);
    asdListBoxSetItemMode3(menu->list, 11, *(s32 *)(state + 0x49C8), 0, 400, 0);
    asdListBoxSetItemMode3(menu->list, 12, *gameGetSlotTable(), 0, 999999999, 0);
    asdListBoxSetItemMode2(menu->list, 13, (flags & 0x20000) >> 17);
    asdListBoxSetItemMode2(menu->list, 14, (flags & 0x400000) >> 22);
    asdListBoxSetItemMode2(menu->list, 15, (flags & 0x800000) >> 23);
    asdListBoxSetItemMode2(menu->list, 16, (flags & 0x1000000) >> 24);
    asdListBoxSetItemMode2(menu->list, 17, (flags & 0x2000000) >> 25);
    asdListBoxSetItemMode2(menu->list, 18, (flags & 0x4000000) >> 26);
    asdListBoxSetItemMode2(menu->list, 19, (flags & 0x8000000) >> 27);
    asdListBoxSetItemMode2(menu->list, 20, (flags & 0x10000000) >> 28);
    asdListBoxSetItemMode2(menu->list, 21, (flags & 0x20000000) >> 29);
    u32 more = *(u32 *)(state + 0x44AC);
    asdListBoxSetItemMode2(menu->list, 22, (more & 1) != 0);
    asdListBoxSetItemMode2(menu->list, 23, (more & 2) != 0);
    asdListBoxSetItemMode3(menu->list, 24, *(s32 *)(state + 0x2F2C), -1, 999, 0);
    asdListBoxSetItemMode2(menu->list, 25, (more & 4) != 0);
    asdListBoxSetItemMode3(menu->list, 26, *(s32 *)(state + 0x2F34), 0, 4, 0);
    asdListBoxSetItemMode3(menu->list, 27, DAT_00439ad4, -1, 999, 0);
    asdListBoxSetItemMode2(menu->list, 28, (more & 0x40) != 0);
}

} /* extern "C" */
