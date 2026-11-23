/* NON_MATCHING: register allocation differs (slide in r7 rather than r4, the tab-flag base folds +190), retail keeps slide + 1 in r9 from before the loop and computes the row base only when rows are visible; the draw sequence is the same. */
#include "common.h"
#include <stdio.h>
#include "bible/BibleAnalyzeWork.h"

extern "C" {

/* A text layout record: a position at 8/10 and a pointer to the box size. */
typedef struct AnalyzeTextBox {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;
} AnalyzeTextBox;

typedef struct AnalyzeWorkView {
    u8 unk0000[0xA5B4];
    u32 targetId;
} AnalyzeWorkView;

typedef struct AnalyzeFlagView {
    u8 unk0000[0xA6BE];
    u8 secondTab;
} AnalyzeFlagView;

extern u32 g_btlDevilListCallbackContext[];

void uiRectDrawAtBottomRight(void *panel, s32 id, s32 a, s32 b, s32 slide, f32 offset);
void FUN_00231bcc(void *panel, s32 id, s32 a, s32 b, s32 slide, s32 c);
u32 dataLookupDisplayName(u8 *out, u32 id);
AnalyzeTextBox *layoutFindTableEntry(void *panel, u32 id);
s32 textMeasureOnLayer(const char *text, s32 mode);
void drawTextAtSnappedRectangle(void *panel, f32 x, f32 y, f32 scale, f32 c, s32 a, s32 b, f32 d, const char *text);
s32 FUN_0029e924(void *list);
s32 flaggedEntryGetValueByState(void *list);
void bibleAnalyzeDrawRow(AnalyzeWork *work, s32 index, s32 selected, s32 id);
void scrollMenuDrawLayer(AnalyzeWork *work, s32 step);

/* Draws the analyze panel: the slid-in frame, the two tab headers, the target's name centred in
 * its box, and the visible rows (the selected row last). */
void bibleAnalyzeDrawMenu(AnalyzeWork *work)
{
    s32 slide = work->slide;
    f32 offset = (f32)(0x100 - slide);
    f32 scale = offset * (1.0f / 256.0f);

    uiRectDrawAtBottomRight(work->panel, 13, 0, 0, slide, offset);
    s32 tab = ((AnalyzeFlagView *)work)->secondTab == 0 ? 0x1025 : 0x1023;
    FUN_00231bcc(work->panel, tab - 4, 0, 0, slide, 1);
    FUN_00231bcc(work->panel, tab, 0, 0, slide, 1);
    tab = ((AnalyzeFlagView *)work)->secondTab == 1 ? 0x1026 : 0x1024;
    FUN_00231bcc(work->panel, tab - 4, 0, 0, slide, 1);
    FUN_00231bcc(work->panel, tab, 0, 0, slide, 1);

    u8 nameBuffer[4];
    char text[64];
    u32 name = dataLookupDisplayName(nameBuffer, ((AnalyzeWorkView *)work)->targetId);

    sprintf(text, "%s%s", name, g_btlDevilListCallbackContext[1]);
    AnalyzeTextBox *box = layoutFindTableEntry(work->panel, 0x102B);
    s32 width = textMeasureOnLayer(text, 2);

    drawTextAtSnappedRectangle(work->panel, (f32)(box->x + *box->size / 2 - width / 2), (f32)box->y, scale, 1.0f, 2,
                 -1, 0.0f, text);

    s32 first = FUN_0029e924(work->list);
    s32 visible = work->rowCount;
    if (work->visibleRows < visible)
        visible = work->visibleRows;
    AnalyzeRow *rows = work->rows;

    for (s32 i = 0; i < visible; i++) {
        if (work->mode != 2 || flaggedEntryGetValueByState(work->list) != i) {
            bibleAnalyzeDrawRow(work, i + 1, 0, rows[first + i].id);
        }
    }
    if (work->rowCount > 0 && work->mode == 2) {
        s32 id = work->rows[flaggedEntryGetValueByState(work->list) + first].id;

        bibleAnalyzeDrawRow(work, flaggedEntryGetValueByState(work->list) + 1, 1, id);
    }
    scrollMenuDrawLayer(work, slide + 1);
}

}
