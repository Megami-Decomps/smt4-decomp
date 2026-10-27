/* NON_MATCHING: rewritten from retail; retail forms the first id address through a pool offset and the second from 0x5A8 without sharing them, and orders the selected/unselected setup differently. */
#include "common.h"

/* A layout slot: the position of an element relative to the panel. */
struct LayoutSlot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

struct ScreenPoint {
    f32 x;
    f32 y;
};

/* One listed row (0x20 bytes). */
struct RowEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 count;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ const char *name;
};

/* The sub-state the panel embeds at 0x55C (its selected byte is read by a linker-inlined getter). */
struct CursorState {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 selected;
    /* 0x12 */ u8 unk12[0x26];
};

/* The same rows seen from 0x5A8: the id follows a leading word. */
struct RowIdEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

struct RowList {
    u8 unk5A8[4];
    /* 0x5AC */ RowEntry entries[1];
};

struct RowPanel {
    /* 0x000 */ u8 unk000[0xC8];
    /* 0x0C8 */ u8 layout[0x494];
    /* 0x55C */ CursorState cursor;
    /* 0x594 */ u8 unk594[0x14];
    union {
        RowList list;
        /* 0x5A8 */ RowIdEntry idEntries[1];
    };
};

extern "C" {
s8 uiSubStateGetSelected(const CursorState *cursor);
LayoutSlot *FUN_002bf4f0(u8 *layout, u32 id);
void uiDrawScrollingSelectionEntry(RowPanel *panel, s32 index, s32 alpha, s32 row);
void FUN_002be56c(u8 *layout, s32 style, u32 color, const char *text, f32 x, f32 y, f32 scale, f32 c, f32 d);
void FUN_00231bcc(u8 *layout, u32 image, s32 x, s32 y, s32 alpha, u32 flags);
s32 FUN_00262cb0(u16 id);
s32 FUN_00288e68(s32 id);
void FUN_002b6c34(s16 id, s32 x, s32 y, s32 alpha, s32 a, s32 b);
void pairCopy(u8 *layout, ScreenPoint *point);
s32 textFormatBuffer(char *destination, const char *format, ...);
void drawTextAtRelativePosition(u8 *layout, s32 a, s32 x, s32 y, s32 b, s32 c, u32 color, s32 alpha, const char *text);

/* Draws one row of the panel: its name box, the demon icon with its id and the count. */
void FUN_003abae8(RowPanel *panel, s32 index, s32 row, s32 selected, s32 alpha)
{
    char text[44];
    u32 id = panel->list.entries[row].id;
    f32 scale = (f32)(0x100 - alpha) * (1.0f / 256.0f);
    LayoutSlot *slot;
    if (selected == 0)
        slot = FUN_002bf4f0(panel->layout, index + 0x40E);
    else
        slot = FUN_002bf4f0(panel->layout, index + 0x42F);
    s32 baseX = slot->x;
    s32 baseY = slot->y;
    s32 style;
    u32 color;
    u32 nameBox;
    if (selected != 0) {
        uiDrawScrollingSelectionEntry(panel, index, alpha, uiSubStateGetSelected(&panel->cursor));
        style = 3;
        color = 0xFFFFFFFF;
        nameBox = 0x4E0;
    } else {
        style = 2;
        color = 0xFF;
        nameBox = 0x4CE;
    }
    if (FUN_00262cb0(panel->idEntries[row].id))
        color = 0x5A5A5AFF;
    const char *name = panel->list.entries[row].name;
    LayoutSlot *box = FUN_002bf4f0(panel->layout, nameBox);
    FUN_002be56c(panel->layout, style, color, name, (f32)(box->x + baseX), (f32)(box->y + baseY), scale, 1.0f, 0.0f);
    u32 iconBox;
    if (selected == 0) {
        iconBox = 0x4CD;
    } else {
        iconBox = 0x476;
        FUN_00231bcc(panel->layout, 0x4DF, baseX, baseY, alpha, 1);
    }
    LayoutSlot *icon = FUN_002bf4f0(panel->layout, iconBox);
    ScreenPoint origin;
    pairCopy(panel->layout, &origin);
    f32 iconX = (f32)(icon->x + baseX) + origin.x;
    f32 iconY = (f32)(icon->y + baseY) + origin.y;
    s32 shown = FUN_00288e68(id);
    FUN_002b6c34((s16)shown, (s32)iconX, (s32)iconY, alpha, 0, 0);
    textFormatBuffer(text, "%8d", panel->list.entries[row].count);
    LayoutSlot *countBox;
    if (selected == 0)
        countBox = FUN_002bf4f0(panel->layout, 0x4DE);
    else
        countBox = FUN_002bf4f0(panel->layout, 0x4F0);
    drawTextAtRelativePosition(panel->layout, 0, countBox->x + baseX, countBox->y + baseY, 0, 7, 0xFFFFFFFF, alpha, text);
}

} /* extern "C" */
