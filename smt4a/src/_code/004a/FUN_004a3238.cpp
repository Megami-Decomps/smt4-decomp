/* NON_MATCHING: retail reads the window variant as add-immediates plus a displaced ldrsb and anchors the three case-5 tables (cf8/d20/d48) on one pool word (d20 +- 0x28); ours loads separate pool words, so case 0 shrinks and the switch offsets shift. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiControl.h"
#include "code/Code002a_Smt4a.h"

/* Style block of an entry window. */
struct EntryStyle {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 variant;
};

/* The menu window as the entry drawer reads it. */
struct EntryWindow {
    /* 0x000 */ u8 unk000[0xC8];
    /* 0x0C8 */ u8 textArea[0x750];
    /* 0x818 */ EntryStyle style;
    /* 0x82A */ u8 unk82A[0x26];
    /* 0x850 */ u32 color;
    /* 0x854 */ u8 unk854[0xC];
    /* 0x860 */ u8 hidden;
};

/* Per-entry label records (0x20 bytes each). */
struct EntryLabel {
    /* 0x00 */ u8 unk00[0x20];
};

extern "C" {

void efctSetSpeed(f32 speed);
void drawSetColorFromRGBA8(u32 color);
void FUN_002e7284(void *textArea, u32 x, u32 y, u32 color, EntryLabel *label);
void FUN_004a7814(EntryWindow *window, u32 first, s32 index, s32 enabled, u32 color, u32 second);
void demonIconPanelDrawRow(EntryWindow *window, s32 flag, u32 text, s32 index, s32 enabled, u32 color);
void FUN_004a7ba0(EntryWindow *window, u32 text, s32 index, s32 enabled, u32 color, f32 scale);
void FUN_004a7cb0(EntryWindow *window, u32 text, s32 index, s32 enabled, u32 color, f32 scale);
void FUN_004a80d8(EntryWindow *window, s32 index, u32 color, s32 variant, f32 scale);

extern u32 DAT_005e1ca8[10];
extern u32 DAT_005e1cd0[10];
extern u32 DAT_005e1cf8[10];
extern u32 DAT_005e1d20[10];
extern EntryLabel DAT_005e1d48[10];
extern u32 DAT_005e1e88[];

/* Draws one entry of the window in the style `mode` selects (plain, flagged, scaled text, ...),
 * with text drawn at half size unless the label is single-byte. */
void FUN_004a3238(EntryWindow *window, s32 index, u32 mode, s32 enabled, u32 text, f32 scale)
{
    u32 color = window->color;
    f32 textScale = 1.0f;

    if (FUN_002a4b28(text & 0xFFFF) == 0) {
        textScale = 0.5f;
    }

    switch (mode) {
    case 0:
        if (enabled != 0) {
            EntryStyle *style = &window->style;

            FUN_004a80d8(window, index, color, style->variant, scale);
            return;
        }
        break;
    case 1: {
        bool visible = window->hidden == 0;

        efctSetSpeed(scale * textScale);
        demonIconPanelDrawRow(window, visible, text, index, enabled, color);
        efctSetSpeed(1.0f);
        return;
    }
    case 2:
        FUN_004a7cb0(window, text, index, enabled, color, scale * textScale);
        break;
    case 3:
        FUN_004a7ba0(window, text, index, enabled, color, scale * textScale);
        return;
    case 4:
        efctSetSpeed(scale * textScale);
        FUN_004a7814(window, DAT_005e1ca8[index], index, enabled, color, DAT_005e1cd0[index]);
        efctSetSpeed(1.0f);
        return;
    case 5:
        if (index == 0) {
            drawSetColorFromRGBA8(DAT_005e1e88[0]);
        } else if (DAT_005e1e88[index - 1] != DAT_005e1e88[index]) {
            drawSetColorFromRGBA8(DAT_005e1e88[index]);
        }
        efctSetSpeed(scale * textScale);
        if (FUN_002a4b28(text & 0xFFFF) != 0) {
            FUN_002e7284(window->textArea, DAT_005e1cf8[index], DAT_005e1d20[index], color, &DAT_005e1d48[index]);
        } else {
            drawTextAtRelativePosition(window->textArea, 0, DAT_005e1cf8[index], DAT_005e1d20[index], 0, 0, 0xFFFFFFFF, color, "     ???");
        }
        efctSetSpeed(1.0f);
        return;
    }
}

} /* extern "C" */
