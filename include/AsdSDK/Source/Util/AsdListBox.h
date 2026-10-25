/* AsdSDK/Source/Util/AsdListBox.cpp: the engine's scrolling list box (debug menus).
 *
 * A list box is a process (callbacks FUN_001fe640-style update/end) that owns an AsdListBoxModel:
 * a list of AsdListBoxItems and the widget that draws them. Items are described by
 * AsdListBoxEntry tables and come in four kinds. */
#ifndef ASDSDK_SOURCE_UTIL_ASDLISTBOX_H
#define ASDSDK_SOURCE_UTIL_ASDLISTBOX_H

#include "AsdSDK/Source/Util/AsdList.h"

#define ASD_LISTBOX_PATH_LEN 0x100

/* AsdListBoxItem.type / AsdListBoxEntry.type */
#define ASD_LISTBOX_PLAIN 0  /* a label only */
#define ASD_LISTBOX_TEXT 1   /* a string value */
#define ASD_LISTBOX_TOGGLE 2 /* on/off */
#define ASD_LISTBOX_INT 3    /* integer with a range */
#define ASD_LISTBOX_FLOAT 4  /* float with a range */

typedef union AsdListBoxNumber {
    s32 i;
    f32 f;
} AsdListBoxNumber;

/* An item as the list holds it (0x220 bytes). */
typedef struct AsdListBoxItem {
    /* 0x000 */ u32 id;
    /* 0x004 */ u8 type;
    /* 0x005 */ u8 flags;                    /* INT items: copy of the entry's flags */
    /* 0x006 */ char label[ASD_LISTBOX_PATH_LEN];
    /* 0x106 */ char text[ASD_LISTBOX_PATH_LEN]; /* TEXT items: the value */
    /* 0x206 */ u8 pad206[2];
    /* 0x208 */ s32 intValue;                /* TOGGLE: 0/1 */
    /* 0x20c */ f32 floatValue;
    /* 0x210 */ AsdListBoxNumber min;
    /* 0x214 */ AsdListBoxNumber max;
    /* 0x218 */ u32 unk218;
    /* 0x21c */ u32 callback;
} AsdListBoxItem;

/* One row of the table a list box is built from (0x20 bytes). */
typedef struct AsdListBoxEntry {
    /* 0x00 */ const char *label;
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 pad05[3];
    /* 0x08 */ const char *text;             /* TEXT */
    /* 0x0c */ s32 value;                    /* TOGGLE, INT, FLOAT (an integer; FLOAT converts it) */
    /* 0x10 */ AsdListBoxNumber min;
    /* 0x14 */ AsdListBoxNumber max;
    /* 0x18 */ u8 flags;
    /* 0x19 */ u8 pad19[3];
    /* 0x1c */ u32 callback;                 /* nonzero: stored in the item */
} AsdListBoxEntry;

/* What FUN_002c08f0 returns for a list box. */
typedef struct AsdListBoxModel {
    /* 0x00 */ union {
        u8 list[0xc];
        AsdList items;
    };
    /* 0x0c */ u8 view[0x1c];                /* the scrolling widget */
    /* 0x28 */ s32 viewCursor;               /* the widget's cursor row (view + 0x1c) */
    /* 0x2c */ u8 unk2c[0x40];
    /* 0x6c */ s32 selectedCursor;
    /* 0x70 */ u32 nextItemId;
} AsdListBoxModel;

/* The list box object (0x18c bytes). */
typedef struct AsdListBox {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ u8 widget[0x28];             /* row widget, set up by rowWidgetInit/colorSetRgba */
    /* 0x034 */ s32 unk34;
    /* 0x038 */ u32 flags;
    /* 0x03c */ u8 unk3c;
    /* 0x03d */ u8 pad3d[0xb];
    /* 0x048 */ f32 x;
    /* 0x04c */ f32 y;
    /* 0x050 */ f32 width;
    /* 0x054 */ f32 height;
    /* 0x058 */ s32 rowCount;
    /* 0x05c */ s32 rowHeight;
    /* 0x060 */ u8 unk60[8];
    /* 0x068 */ s32 unk68;
    /* 0x06c */ u8 unk6c[0x120];
} AsdListBox;

extern "C" {
u8 FUN_002a21c8(void);
}

#endif
