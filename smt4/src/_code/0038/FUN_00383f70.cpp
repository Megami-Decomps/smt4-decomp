/* NON_MATCHING: selection pointer is hoisted across row draws; saved registers and VFP argument scheduling differ. */
#include "ui/DebugItemList.h"
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern const char DAT_00405890[];
extern const char DAT_004058c8[];
void FUN_002c1b64(RenderCtx *context, s32 mode);
void FUN_002c0944(u32 red, u32 green, u32 blue, u32 alpha, f32 x, f32 y, f32 width, f32 height, f32 scale);
const char *FUN_002bcddc(u16 id, u32 category);
u32 flaggedEntryGetValueByState(FlaggedValueHolder *selection);

// Draw the visible item names and a cursor, or the empty-list message.
void FUN_00383f70(DebugItemList *work)
{
    if (!(work->flags & 0x20)) {
        return;
    }
    FUN_002c1b64(g_titleScene, 0);
    FUN_002c0944(128, 128, 128, 128, 0.0f, 0.0f, 320.0f, 240.0f, 0.0f);
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
        textDrawString(2, ~0u, DAT_00405890, 8.0f, 8.0f, 0.0f, 1.0f, 1.0f);
        return;
    }
    for (s32 row = 0; row < count; ++row) {
        const char *text = FUN_002bcddc(work->items[row].id, 0);
        textDrawString(2, ~0u, text, 24.0f, (f32)(row * 14 + 8), 0.0f, 1.0f, 1.0f);
    }
    s32 selected = flaggedEntryGetValueByState(&work->selection);
    textDrawString(2, ~0u, DAT_004058c8, 8.0f, (f32)(selected * 14 + 8), 0.0f, 1.0f, 1.0f);
}
}
