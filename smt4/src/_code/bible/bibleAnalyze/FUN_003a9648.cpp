/* NON_MATCHING: VFP argument setup (the sliding-offset float and the text position) and the pool-constant loads are scheduled differently; the draw sequence is the same. */
#include "common.h"

extern "C" {

/* One list row (0x20 bytes): its id is the short at 4. */
typedef struct AnalyzeRow {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[0x1A];
} AnalyzeRow;

/* A text layout record: a position at 8/10 and a pointer to the box size. */
typedef struct AnalyzeTextBox {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;
} AnalyzeTextBox;

/* The analyze screen's work block (only the fields drawn here). */
typedef struct AnalyzeWork {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 mode;               /* 2: a row is selected */
    /* 0x018 */ u8 unk018[8];
    /* 0x020 */ u8 list[4];             /* the scroll list state */
    /* 0x024 */ s32 visibleRows;
    /* 0x028 */ s32 rowCount;
    /* 0x02C */ u8 unk02c[0x9C];
    /* 0x0C8 */ u8 panel[0x4CC];
    /* 0x594 */ s32 slide;              /* the panel's slide-in offset, 0..256 */
    /* 0x598 */ u8 unk598[0x10];
    /* 0x5A8 */ AnalyzeRow rows[1];
} AnalyzeWork;

typedef struct AnalyzeWorkView {
    u8 unk0000[0xA5B4];
    u32 targetId;
} AnalyzeWorkView;

typedef struct AnalyzeFlagView {
    u8 unk0000[0xA6BE];
    u8 secondTab;
} AnalyzeFlagView;

extern u32 DAT_0043d990[];

void uiRectDrawAtBottomRight(void *panel, s32 id, s32 a, s32 b, s32 slide, f32 offset);
void FUN_00231bcc(void *panel, s32 id, s32 a, s32 b, s32 slide, s32 c);
u32 dataLookupDisplayName(u8 *out, u32 id);
s32 textFormatBuffer(char *buffer, const char *format, ...);
AnalyzeTextBox *FUN_002bf4f0(void *panel, u32 id);
s32 curveEvaluateStandard(const char *text, s32 mode);
void FUN_002be56c(void *panel, s32 a, s32 b, const char *text, f32 x, f32 y, f32 scale, f32 c, f32 d);
s32 FUN_0029e924(void *list);
s32 FUN_00240d5c(void *list);
void FUN_003aa044(AnalyzeWork *work, s32 index, s32 selected, s32 id);
void FUN_0022d7b0(AnalyzeWork *work, s32 step);

/* Draws the analyze panel: the slid-in frame, the two tab headers, the target's name centred in
 * its box, and the visible rows (the selected row last). */
void FUN_003a9648(AnalyzeWork *work)
{
    s32 slide = work->slide;
    f32 offset = (f32)(0x100 - slide);

    uiRectDrawAtBottomRight(work->panel, 13, 0, 0, slide, offset);
    s32 tab = ((AnalyzeFlagView *)work)->secondTab == 0 ? 0x1025 : 0x1023;
    FUN_00231bcc(work->panel, tab - 4, 0, 0, slide, 1);
    FUN_00231bcc(work->panel, tab, 0, 0, slide, 1);
    tab = ((AnalyzeFlagView *)work)->secondTab == 1 ? 0x1026 : 0x1024;
    FUN_00231bcc(work->panel, tab - 4, 0, 0, slide, 1);
    FUN_00231bcc(work->panel, tab, 0, 0, slide, 1);

    u8 nameBuffer[8];
    char text[64];
    u32 name = dataLookupDisplayName(nameBuffer, ((AnalyzeWorkView *)work)->targetId);

    textFormatBuffer(text, "%s%s", name, DAT_0043d990[1]);
    AnalyzeTextBox *box = FUN_002bf4f0(work->panel, 0x102B);
    s32 width = curveEvaluateStandard(text, 2);

    FUN_002be56c(work->panel, 2, -1, text, (f32)(box->x + *box->size / 2 - width / 2), (f32)box->y,
                 offset * (1.0f / 256.0f), 1.0f, 0.0f);

    s32 first = FUN_0029e924(work->list);
    s32 visible = work->rowCount < work->visibleRows ? work->rowCount : work->visibleRows;

    for (s32 i = 0; i < visible; i++) {
        if (work->mode != 2 || FUN_00240d5c(work->list) != i) {
            FUN_003aa044(work, i + 1, 0, work->rows[first + i].id);
        }
    }
    if (work->rowCount > 0 && work->mode == 2) {
        s32 id = work->rows[FUN_00240d5c(work->list) + first].id;

        FUN_003aa044(work, FUN_00240d5c(work->list) + 1, 1, id);
    }
    FUN_0022d7b0(work, slide + 1);
}

}
