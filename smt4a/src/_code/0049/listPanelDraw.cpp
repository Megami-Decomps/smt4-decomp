/* NON_MATCHING: 272 lines (251 vs 239 rows): the same operations, but retail keeps panel and x in an 80-byte frame
 * (52 bytes of it never referenced) and reloads them at every use, with the text kind and &g_renderCtx in registers;
 * this source keeps panel and x in registers and spills the text kind instead. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"
#include "ui/UiSpriteApi.h"
#include "gfx/StereoParallax.h"

extern "C" {


void efctSetSpeed(f32 speed);
void textDrawRangeFaded(const void *text, s32 x, s32 y, s32 fade, u32 start, s32 length, f32 scale);
u32 FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void FUN_0049ec78(ListPanel *panel, PanelRow *row, s32 x, s32 y, f32 speed, s32 z);
void stereoSpriteDrawSelectedChoice(ListPanel *panel, PanelRow *row, s32 x, s32 y, s32 z, f32 speed);
void FUN_0049e7e4(ListPanel *panel, s32 x, s32 y, f32 speed);

/* Draw an entry text row, if any of it is visible, clipped to the panel's row area. Retail inlined it: it tests
 * the row pointer for NULL, which the caller's &panel->rows[i] never is. */
static __inline void listPanelDrawEntryRow(ListPanel *panel, PanelRow *row, s32 x, s32 y, f32 speed)
{
    if (row == NULL || row->first > panel->scroll + 9 || panel->scroll > row->last) {
        return;
    }

    TextureTableEntryIV *line = asdTMTexTableEntryAt(0x33, 8);
    s32 textKind = row->textKind;
    s32 textY = (row->first - panel->scroll) * line->placement->height + y;
    TextureTableEntryIV *clip = asdTMTexTableEntryAt(0x33, 5);
    bool suspended = renderCtxSuspendScissor(g_renderCtx);

    FUN_00168e00(clip->x, clip->y, clip->placement->width, clip->placement->height);
    if (textKind == 2) {
        FUN_0049ec78(panel, row, x, textY, speed, 0x6A);
    } else if (textKind == 1) {
        stereoSpriteDrawSelectedChoice(panel, row, x, textY, 0x6A, speed);
    }
    if (suspended) {
        renderCtxResumeScissor(g_renderCtx);
    }
    renderPopStateStacks();
    efctSetSpeed(1.0f);
}

/* Draw the panel's frame, tab strip and the rows (icon strips and scissored entry text), then the
 * scroll bar below. */
void listPanelDraw(ListPanel *panel)
{
    s32 x = vec2GetXInt(&panel->sprite);
    s32 y = vec2GetYInt(&panel->sprite);
    f32 speed = vec2GetSpeed(&panel->sprite);

    efctSetSpeed(speed);
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    texDrawTableEntryAtStoredOrigin(2, 0x33, 6, x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f), y, 0x65);
    if (panel->type == 8 || panel->type == 9) {
        s32 tabX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);

        for (s32 tab = 0; tab < 4; tab++) {
            texDrawTableEntryAtStoredOrigin(2, 0x33, 0x2A + tab, tabX, y, 0x65);
        }
    }
    texDrawTableEntryAtStoredOrigin(2, 0x33, 5, x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f), y, 0x67);

    for (s32 i = 0; i < 5; i++) {
        PanelRow *row = &panel->rows[i];

        switch (row->kind) {
        case 0:
            break;
        case 1:
            {
                /* one icon cell for each visible entry the row covers */
                s32 cellsX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);

                for (s32 j = 0; j < 9; j++) {
                    TextureTableEntryIV *cell = asdTMTexTableEntryAt(0x33, 9 + j);
                    s32 cellX = cell->x + cellsX;
                    s32 cellY = cell->y + y;
                    s32 entry = panel->scroll + j;

                    if (row->first <= entry && entry < row->last && row->iconIndex >= 0) {
                        textDrawRangeFaded((const void *)panel->icons[row->iconIndex], cellX, cellY, 0x6A, 6,
                                           entry - row->first, speed);
                    }
                }
            }
            break;
        case 2:
            listPanelDrawEntryRow(panel, row, x, y, speed);
            break;
        }
    }
    FUN_0049e7e4(panel, x, y, speed);
}

} /* extern "C" */
