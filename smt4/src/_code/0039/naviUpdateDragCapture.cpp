/* NON_MATCHING: only the scheduling of the 0.0f constant load and one VFP register choice in the capture block differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "AsdSDK/TexTableEntryRange.h"

struct CursorPoint {
    f32 x, y;
};

struct NavigationDrag {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x18];
    /* 0x02c */ CursorPoint origin;
    /* 0x034 */ CursorPoint cursor;
    /* 0x03c */ CursorPoint velocity;
    /* 0x044 */ CursorPoint previous;
    /* 0x04c */ CursorPoint current;
    /* 0x054 */ u8 unk054;
    /* 0x055 */ s8 heldFrames;
    /* 0x056 */ u8 unk056[0x10c];
    /* 0x162 */ u8 cursorData[1];
};

extern "C" {
s32 effectForwardModeOne(s32, s32, s32, s32);
s32 FUN_002319c0(void);
void FUN_003c2e0c(s32 *x, s32 *y);
CursorPoint *NaviMain_GetCursorPos(void *cursorData);

// Capture the initial drag position and track whether the pointer remains held.
u32 naviUpdateDragCapture(NavigationDrag *drag)
{
    s32 a, b, c, d;
    s32 x, y;
    if (!(drag->flags & 0x2000000)) {
        FUN_00231434(0x1c, 0xfa4, &a, &b, &c, &d);
        if (effectForwardModeOne(a, b, c, d) && !g_gameState.inputBlocked) {
            FUN_003c2e0c(&x, &y);
            drag->flags |= 0x10000;
            drag->previous.x = x;
            drag->previous.y = y;
            drag->current.x = x;
            drag->current.y = y;
            CursorPoint cursor = *NaviMain_GetCursorPos(drag->cursorData);
            drag->origin.x = x;
            drag->origin.y = y;
            drag->cursor = cursor;
            drag->velocity.x = 0.0f;
            drag->velocity.y = 0.0f;
            drag->unk054 = 0;
            drag->heldFrames = 0;
        } else {
            if (drag->flags & 0x10000) {
                if (!FUN_002319c0() || g_gameState.inputBlocked) {
                    drag->flags &= ~0x20000;
                } else {
                    if (drag->heldFrames < 0xffff)
                        ++drag->heldFrames;
                    if (drag->heldFrames > 0)
                        drag->flags |= 0x20000;
                }
            }
        }
    }
    return 0;
}
}
