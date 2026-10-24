/* The SD card menu object (Apocalypse): a scrolling list with a placeholder entry. */
#ifndef UI_SDCARDMENU_H
#define UI_SDCARDMENU_H

#include "common.h"
#include <stddef.h>

/* Two integers and a scale, cleared together. */
struct ScaledPair {
    s32 first;
    s32 second;
    f32 scale;
};

/* One row of the data table (0x54 bytes); the leading six words are copied into the menu. */
struct MenuTableRow {
    u32 words[6];
    u8 unk18[0x3C];
};
typedef char MenuTableRowSizeCheck[sizeof(MenuTableRow) == 0x54 ? 1 : -1];

/* A fixed-size text field. */
struct MenuText {
    char text[24];
};

/* A menu entry (0x44 bytes): position, the table row, the "no card" label and its two icons. */
struct MenuEntry {
    /* 0x00 */ ScaledPair position;
    /* 0x0C */ u32 row[6];
    /* 0x24 */ MenuText label;
    /* 0x3C */ u32 iconOn;
    /* 0x40 */ u32 iconOff;
};
typedef char MenuEntrySizeCheck[sizeof(MenuEntry) == 0x44 ? 1 : -1];

/* The scale pair that pair10Clear finishes clearing (the pair itself ends 0x18 bytes in). */
struct MenuPair {
    /* 0x00 */ ScaledPair value;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
};

/* The menu's scrolling list widget (operated through the list helpers). */
struct MenuList {
    u8 unk000[0x24C];
};

struct SdCardMenu {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ s8 slot;
    /* 0x006 */ u8 unk006[0x12];
    /* 0x018 */ s32 entryCount;
    /* 0x01C */ u8 unk01C[0x4C];
    /* 0x068 */ u8 busy;
    /* 0x069 */ u8 unk069[0x28F];
    /* 0x2F8 */ s32 total;          /* list position + offset + count */
    /* 0x2FC */ s32 previousTotal;
    /* 0x300 */ s32 offset;
    /* 0x304 */ s32 listPosition;
    /* 0x308 */ s32 listValue;
    /* 0x30C */ u8 valid;
    /* 0x30D */ u8 unk30D[0xCB];
    /* 0x3D8 */ MenuList list;
    /* 0x624 */ ScaledPair cleared;
    /* 0x630 */ u32 enabled;
    /* 0x634 */ u32 row[6];
    /* 0x64C */ MenuText label;
    /* 0x664 */ MenuEntry entries[2];
    /* 0x6EC */ ScaledPair secondCleared;
    /* 0x6F8 */ MenuPair pair;
    /* 0x710 */ ScaledPair thirdCleared;
    /* 0x71C */ u8 unk71C[4];
};
typedef char SdCardMenuOffsetCheck[
    offsetof(SdCardMenu, total) == 0x2F8 && offsetof(SdCardMenu, valid) == 0x30C &&
    offsetof(SdCardMenu, list) == 0x3D8 && offsetof(SdCardMenu, cleared) == 0x624 &&
    offsetof(SdCardMenu, entries) == 0x664 && offsetof(SdCardMenu, pair) == 0x6F8 &&
    offsetof(SdCardMenu, thirdCleared) == 0x710 ? 1 : -1];

/* True when the list has scrolled past the first entry at `index`. */
static __inline bool sdCardMenuEntryScrolled(const SdCardMenu *menu, s32 index)
{
    return menu->offset + menu->listPosition + index >= 1;
}

#endif
