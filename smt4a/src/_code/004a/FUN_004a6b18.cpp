/* NON_MATCHING: only the stack-argument/literal scheduling of the last call differs. */
#include "common.h"

extern "C" {
void words2Copy(const void *, void *);
s16 windowRegionGetLeft(const void *region);
s16 windowRegionGetTop(const void *region);
s16 windowRegionGetWidth(const void *region);
void uiDrawTableTextureAtRectCorner(const void *, s32, s32, s32, u32);
void uiDrawListScrollBar(void *, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, u32, u32);

void FUN_004a6b18(const void *panel, u32 color)
{
    struct Point {
        f32 x, y;
    };
    struct FramedPanelView {
        u8 unk00[0x50];
        void *frame;
        s16 width, height, depth;
        u8 unk5A[0xA];
        const Point *position;
    };
    const FramedPanelView *state = static_cast<const FramedPanelView *>(panel);
    if (state->frame != NULL) {
        Point position;
        words2Copy(state->position, &position);
        uiDrawTableTextureAtRectCorner(state->position, 0x5D5, static_cast<s32>(position.x),
                     static_cast<s32>(position.y), color);
        uiDrawListScrollBar(state->frame, static_cast<s32>(position.x), static_cast<s32>(position.y),
                     20, 0x56A, 0x56B, 0x56C, 0x566, 0x568, 0x567, 0x569,
                     windowRegionGetWidth(panel), windowRegionGetLeft(panel), windowRegionGetTop(panel), color, 0);
    }
}
}
