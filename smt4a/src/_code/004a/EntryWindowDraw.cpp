#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiControl.h"
#include "code/Code002a_Smt4a.h"

/* Style block of an entry window. */
struct EntryStyle {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 variant;
};

/* The menu window as the entry drawers read it. */
struct EntryWindow {
    /* 0x000 */ u8 unk000[0xC8];
    /* 0x0C8 */ u8 textArea[0x750];
    /* 0x818 */ EntryStyle style;
    /* 0x82A */ u8 unk82A[0x26];
    /* 0x850 */ s32 fade;
    /* 0x854 */ u8 unk854[0xC];
    /* 0x860 */ u8 hidden;
};

extern "C" {

/* Per-entry layout tables of the entry window: two numeric columns, the caption position, the
 * caption label (32 bytes each) and the text colour. */
u32 g_entryWindowNumberFirst[10];
u32 g_entryWindowNumberSecond[10];
s32 g_entryWindowCaptionX[10];
s32 g_entryWindowCaptionY[10];
char g_entryWindowCaptionLabels[10][32];
u32 g_entryWindowColors[10];

extern const char DAT_0052b724[]; /* "     ???" */

void efctSetSpeed(f32 scale);
void drawSetColorFromRGBA8(u32 color);
s8 touchSelectionGetSelected(const EntryStyle *style);
void FUN_002e7284(TextLayoutContextA *context, s32 x, s32 y, s32 fade, const char *text);
void FUN_00183bb0(void);
void FUN_004a80d8(EntryWindow *window, s32 index, s32 fade, s32 variant, f32 scale);
void demonIconPanelDrawRow(EntryWindow *window, s32 enabled, u32 textId, s32 index, s32 alternate, s32 fade);
void FUN_004a7cb0(EntryWindow *window, u32 textId, s32 index, s32 alternate, s32 fade, f32 scale);
void FUN_004a7ba0(EntryWindow *window, u32 textId, s32 index, s32 alternate, s32 fade, f32 scale);
void FUN_004a7814(EntryWindow *window, u32 first, s32 index, s32 alternate, s32 fade, u32 second);

void FUN_004a2a30(EntryWindow *panel, s32 entry, s32 alternate, u32 textId, f32 scale)
{
    s32 fade = panel->fade;
    if (alternate != 0)
        fade++;
    f32 multiplier = 1.0f;
    if (FUN_002a4b28(static_cast<u16>(textId)) == 0)
        multiplier = 0.5f;
    if (alternate != 0)
        FUN_004a80d8(panel, entry, fade, touchSelectionGetSelected(&panel->style), scale);
    f32 entryScale = scale * multiplier;
    s32 enabled = 0;
    if (panel->hidden == 0)
        enabled = 1;
    efctSetSpeed(entryScale);
    demonIconPanelDrawRow(panel, enabled, textId, entry, alternate, fade);
    FUN_004a7cb0(panel, textId, entry, alternate, fade, entryScale);
    FUN_004a7ba0(panel, textId, entry, alternate, fade, entryScale);
    efctSetSpeed(entryScale);
    FUN_004a7814(panel, g_entryWindowNumberFirst[entry], entry, alternate, fade, g_entryWindowNumberSecond[entry]);
    drawSetColorFromRGBA8(g_entryWindowColors[entry]);
    if (FUN_002a4b28(static_cast<u16>(textId)) != 0)
        FUN_002e7284(reinterpret_cast<TextLayoutContextA *>(panel->textArea), g_entryWindowCaptionX[entry], g_entryWindowCaptionY[entry], fade, g_entryWindowCaptionLabels[entry]);
    else
        drawTextAtRelativePosition(reinterpret_cast<TextLayoutContextA *>(panel->textArea), 0, g_entryWindowCaptionX[entry], g_entryWindowCaptionY[entry],
            0, 0, 0xFFFFFFFF, fade, DAT_0052b724);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
}

/* Draws one entry of the window in the style `mode` selects (plain, flagged, scaled text, ...),
 * with text drawn at half size unless the label is single-byte. */
void FUN_004a3238(EntryWindow *window, s32 index, u32 mode, s32 enabled, u32 text, f32 scale)
{
    u32 color = window->fade;
    f32 textScale = 1.0f;

    if (FUN_002a4b28(text & 0xFFFF) == 0) {
        textScale = 0.5f;
    }

    switch (mode) {
    case 0:
        if (enabled != 0) {
            FUN_004a80d8(window, index, color, touchSelectionGetSelected(&window->style), scale);
            return;
        }
        break;
    case 1: {
        s32 visible = 0;
        if (window->hidden == 0)
            visible = 1;

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
        FUN_004a7814(window, g_entryWindowNumberFirst[index], index, enabled, color, g_entryWindowNumberSecond[index]);
        efctSetSpeed(1.0f);
        return;
    case 5:
        if (index == 0) {
            drawSetColorFromRGBA8(g_entryWindowColors[0]);
        } else if (g_entryWindowColors[index - 1] != g_entryWindowColors[index]) {
            drawSetColorFromRGBA8(g_entryWindowColors[index]);
        }
        efctSetSpeed(scale * textScale);
        if (FUN_002a4b28(text & 0xFFFF) != 0) {
            FUN_002e7284(reinterpret_cast<TextLayoutContextA *>(window->textArea), g_entryWindowCaptionX[index], g_entryWindowCaptionY[index], color, g_entryWindowCaptionLabels[index]);
        } else {
            drawTextAtRelativePosition(reinterpret_cast<TextLayoutContextA *>(window->textArea), 0, g_entryWindowCaptionX[index], g_entryWindowCaptionY[index], 0, 0, 0xFFFFFFFF, color, "     ???");
        }
        efctSetSpeed(1.0f);
        return;
    }
}

} /* extern "C" */
