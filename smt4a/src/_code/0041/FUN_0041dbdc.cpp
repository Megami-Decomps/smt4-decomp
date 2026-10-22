/* NON_MATCHING: prologue order only: retail copies `selected` to r5 (movs r5, r1) and stores the selected byte after `mov r0, #1`; built stores it before. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[100];
} Entry;

typedef struct Menu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s8 selected;
    /* 0x015 */ u8 unk015[3];
    /* 0x018 */ u32 mode;
    /* 0x01C */ u8 unk01C[0x2DC];
    /* 0x2F8 */ s32 total;
    /* 0x2FC */ s32 prevTotal;
    /* 0x300 */ s32 bonus;
    /* 0x304 */ s32 extra;
    /* 0x308 */ s32 value;
    /* 0x30C */ s8 busy;
    /* 0x30D */ u8 unk30D[3];
    /* 0x310 */ Entry entryA;
    /* 0x374 */ Entry entryB;
    /* 0x3D8 */ Entry current;
} Menu;

s32 sysPlaySe(u32 id);
s32 FUN_0041f020(Menu *menu, s32 selected);
s32 rt_memcpy_w(void *dest, void *src, s32 size);
s32 resourceRunOperationIfUnblocked(Entry *entry);
s32 flaggedEntryGetValueA(Entry *entry);
s32 FUN_0041fc24(Menu *menu);
s32 FUN_0041e2d8(Menu *menu);

/* Switches the menu between its two entries (`selected` nonzero: B), refreshes the current entry's values and the total. */
void FUN_0041dbdc(Menu *menu, s32 selected)
{
    u32 se;

    menu->selected = selected;
    if (selected != 0) {
        menu->bonus = 1;
        menu->mode = 2;
        se = 0x10C;
    } else {
        menu->mode = 1;
        se = 0x10B;
        menu->bonus = 0;
    }
    sysPlaySe(se);
    FUN_0041f020(menu, selected);
    if (selected != 0) {
        rt_memcpy_w(&menu->entryA, &menu->current, 100);
        rt_memcpy_w(&menu->current, &menu->entryB, 100);
    } else {
        rt_memcpy_w(&menu->entryB, &menu->current, 100);
        rt_memcpy_w(&menu->current, &menu->entryA, 100);
    }
    menu->extra = resourceRunOperationIfUnblocked(&menu->current);
    menu->value = flaggedEntryGetValueA(&menu->current);
    menu->prevTotal = menu->total;
    menu->total = menu->value + menu->extra + menu->bonus;
    FUN_0041fc24(menu);
    if (menu->busy != 0) {
        return;
    }
    FUN_0041e2d8(menu);
}

} /* extern "C" */
