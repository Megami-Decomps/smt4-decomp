#include "quest_center/QuestText.h"
#include "gfx/ColoredQuad.h"
#include "ui/DebugItemList.h"
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern const char DAT_00405890[];
extern const char DAT_004058c8[];
u32 flaggedEntryGetValueByState(FlaggedValueHolder *selection);

/* Draws the visible item names and a cursor, or the empty-list message. */
void debugItemListDraw(DebugItemList *work)
{
    if (!(work->flags & 0x20)) {
        return;
    }
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, 128, 128, 128, 0.0f, 128);
    u32 color = 0xFFFFFFFF;
    s32 count = work->selection.visibleRows;
    if (count > work->selection.count)
        count = work->selection.count;
    if (count == 0) {
        textDrawString(8.0f, 8.0f, 0.0f, 2, 1.0f, color, 1.0f, DAT_00405890);
        return;
    }
    for (s32 row = 0; row < count; ++row) {
        const char *text = questGetTitleOrDescription(work->items[row].id, 0);
        textDrawString(24.0f, (f32)(row * 14 + 8), 0.0f, 2, 1.0f, color, 1.0f, text);
    }
    s32 selected = flaggedEntryGetValueByState(&work->selection);
    textDrawString(8.0f, (f32)(selected * 14 + 8), 0.0f, 2, 1.0f, color, 1.0f, DAT_004058c8);
}
}
