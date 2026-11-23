/* NON_MATCHING: stack frame (retail reserves 108 bytes, the name buffer at sp+20 and the text at sp+24, and saves r9 for slide + 1), register allocation and VFP argument scheduling differ; the draw sequence is the same. */
#include "common.h"
#include <stdio.h>
#include "shard/Shard004A.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0031_Smt4a.h"

extern "C" {

typedef struct AnalyzeFlagView {
    u8 unk0000[0xA97E];
    u8 secondTab;
} AnalyzeFlagView;

extern u32 DAT_0057f0a0[];

void uiDrawCompositeSpriteAtRectCorner(void *panel, s32 id, s32 a, s32 b, s32 slide, f32 offset);
void FUN_0049368c(void *panel, s32 id, s32 a, s32 b, s32 slide, s32 c);
u32 dataLookupDisplayName(u8 *out, u32 id);
s32 textMeasureOnLayer(const char *text, s32 mode);
void drawTextAtSnappedRectangle(void *panel, f32 x, f32 y, f32 scale, f32 c, s32 a, s32 b, f32 d, const char *text);
void bibleAnalyzeDrawRow(Screen4A *screen, s32 index, s32 selected, s32 id);
void owner4ASetSizeAndCall(Screen4A *screen, s32 step);

/* Draws the analyze panel: the slid-in frame, the two tab headers, the target's name centred in
 * its box, and the visible rows (the selected row last). */
void bibleAnalyzeDrawMenu(Screen4A *screen)
{
    s32 slide = screen->transition.slide;
    f32 offset = (f32)(0x100 - slide);
    f32 opacity = offset * (1.0f / 256.0f);

    uiDrawCompositeSpriteAtRectCorner(&screen->layout.rect, 13, 0, 0, slide, offset);
    s32 tab = ((AnalyzeFlagView *)screen)->secondTab == 0 ? 0x1025 : 0x1023;
    FUN_0049368c(&screen->layout.rect, tab - 4, 0, 0, slide, 1);
    FUN_0049368c(&screen->layout.rect, tab, 0, 0, slide, 1);
    tab = ((AnalyzeFlagView *)screen)->secondTab == 1 ? 0x1026 : 0x1024;
    FUN_0049368c(&screen->layout.rect, tab - 4, 0, 0, slide, 1);
    FUN_0049368c(&screen->layout.rect, tab, 0, 0, slide, 1);

    u8 nameBuffer[4];
    char text[64];
    u32 name = dataLookupDisplayName(nameBuffer, screen->displayNameId);

    sprintf(text, "%s%s", name, DAT_0057f0a0[1]);
    TextureTableEntryIV *box = layoutFindTableEntry(&screen->layout.rect, 0x102B);

    s32 width = textMeasureOnLayer(text, 2);

    drawTextAtSnappedRectangle(&screen->layout.rect, (f32)(box->x + box->placement->width / 2 - width / 2), (f32)box->y, opacity, 1.0f, 2,
                 -1, 0.0f, text);

    s32 first = resourceDispatchTaggedOperation(&screen->selection.holder);
    s32 visible = screen->selection.holder.count;
    if (screen->selection.holder.visibleRows < visible)
        visible = screen->selection.holder.visibleRows;

    for (s32 i = 0; i < visible; i++) {
        if (screen->state != 2 || FUN_0031d174(&screen->selection.holder) != i) {
            bibleAnalyzeDrawRow(screen, i + 1, 0, screen->rows[first + i].id);
        }
    }
    if (screen->selection.holder.count > 0 && screen->state == 2) {
        s32 id = screen->rows[FUN_0031d174(&screen->selection.holder) + first].id;

        bibleAnalyzeDrawRow(screen, FUN_0031d174(&screen->selection.holder) + 1, 1, id);
    }
    owner4ASetSizeAndCall(screen, slide + 1);
}

}
