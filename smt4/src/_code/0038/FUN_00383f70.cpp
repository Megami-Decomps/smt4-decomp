#include "quest_center/QuestText.h"
#include "gfx/ColoredQuad.h"
/* NON_MATCHING: selection pointer is hoisted across row draws; saved registers and VFP argument scheduling differ. */
#include "ui/DebugItemList.h"
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern const char DAT_00405890[];
extern const char DAT_004058c8[];
u32 flaggedEntryGetValueByState(FlaggedValueHolder *selection);

// Draw the visible item names and a cursor, or the empty-list message.
void FUN_00383f70(DebugItemList *work)
{
    if (!(work->flags & 0x20)) {
        return;
    }
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, 128, 128, 128, 0.0f, 128);
    // The bounds lie in the holder's byte-aligned padding; adding s32 fields there would move its layout.
    struct ListBoundsView { u8 unk00[4]; s32 count; s32 visible; };
    typedef char ListBoundsOffsetCheck[offsetof(ListBoundsView, count) == 4 &&
        offsetof(ListBoundsView, visible) == 8 ? 1 : -1];
    ListBoundsView *bounds = (ListBoundsView *)&work->selection;
    s32 count = bounds->count;
    if (bounds->visible < count) {
        count = bounds->visible;
    }
    if (count == 0) {
        textDrawString(8.0f, 8.0f, 0.0f, 2, 1.0f, ~0u, 1.0f, DAT_00405890);
        return;
    }
    for (s32 row = 0; row < count; ++row) {
        const char *text = FUN_002bcddc(work->items[row].id, 0);
        textDrawString(24.0f, (f32)(row * 14 + 8), 0.0f, 2, 1.0f, ~0u, 1.0f, text);
    }
    s32 selected = flaggedEntryGetValueByState(&work->selection);
    textDrawString(8.0f, (f32)(selected * 14 + 8), 0.0f, 2, 1.0f, ~0u, 1.0f, DAT_004058c8);
}
}
