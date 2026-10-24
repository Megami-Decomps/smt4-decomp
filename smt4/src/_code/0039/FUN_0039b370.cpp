/* NON_MATCHING: retail shares one 16-byte stack block between the stylus sample and the hit-test rectangle and reads the touch/previous-touch pairs with scalar loads; this build merges them into vldmia pairs and keeps the game-state pointer in r7 (about 200 diff lines). */
#include "map/mapDepart.h"
#include "map/NavigationInterpolation.h"

/* The navigation object seen as the touch-drag scroller that FUN_0039b370 drives. */
struct NavigationDrag {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 flags; /* 0x20000: the stylus is dragging the cursor */
    /* 0x014 */ u8 unk014[0x18];
    /* 0x02C */ NavigationPoint touchStart;
    /* 0x034 */ NavigationPoint cursorStart;
    /* 0x03C */ NavigationPoint velocity; /* kept after the stylus is lifted */
    /* 0x044 */ NavigationPoint touch;
    /* 0x04C */ NavigationPoint previousTouch;
    /* 0x054 */ s8 stillFrames; /* frames the stylus has not moved, capped at 99 */
    /* 0x055 */ u8 unk055[0x10D];
    /* 0x162 */ u8 cursorData[1];
};
typedef char NavigationDragOffsets[
    offsetof(NavigationDrag, touchStart) == 0x2C && offsetof(NavigationDrag, stillFrames) == 0x54 &&
    offsetof(NavigationDrag, cursorData) == offsetof(NavigationInterpolation, cursorData) ? 1 : -1];

/* The stylus position as the touch readers report it; the hit-test query fills the same block. */
struct TouchSample {
    s32 y;
    s32 x;
    s32 extentX;
    s32 extentY;
};

extern "C" {
extern GameState g_gameState;
extern f32 DAT_0044cdc8; /* velocity damping per frame */

s32 FUN_0039b648(NavigationDrag *drag);
s32 FUN_002bffd8(s32 *x, s32 *y);
s32 FUN_003c2e14(s32 *x, s32 *y);
s32 FUN_003c2e0c(s32 *x, s32 *y);
s32 FUN_00231434(s32 a, s32 b, s32 *x, s32 *y, s32 *width, s32 *height);
u32 effectForwardModeOne(s32 x, s32 y, s32 width, s32 height);
NavigationPoint *NaviMain_GetCursorPos(u8 *cursorData);
void NaviMain_SetCursorPos(u8 *cursorData, NavigationPoint *position);

/* Per-frame touch drag of the navigation cursor: follows the stylus while it is down and coasts afterwards. */
u32 FUN_0039b370(NavigationDrag *drag)
{
    if (FUN_0039b648(drag) != 0) {
        return 0;
    }
    u8 *cursor = drag->cursorData;
    TouchSample sample;
    if (drag->flags & 0x20000) {
        if (FUN_002bffd8(&sample.x, &sample.y) && g_gameState.unk18 == 0) {
            NavigationPoint position;
            position.x = drag->cursorStart.x + ((f32)sample.x - drag->touchStart.x);
            position.y = drag->cursorStart.y + ((f32)sample.y - drag->touchStart.y);
            NaviMain_SetCursorPos(cursor, &position);
            if ((f32)sample.x == drag->touch.x && (f32)sample.y == drag->touch.y) {
                if (drag->stillFrames < 99) {
                    drag->stillFrames = drag->stillFrames + 1;
                }
            } else {
                drag->previousTouch = drag->touch;
                drag->touch.x = (f32)sample.x;
                drag->touch.y = (f32)sample.y;
            }
        } else if (FUN_003c2e14(&sample.x, &sample.y) != 0 || g_gameState.unk18 != 0) {
            drag->flags &= ~0x20000;
            if (drag->stillFrames > 2) {
                drag->velocity.x = 0.0f;
                drag->velocity.y = 0.0f;
            } else {
                drag->velocity.x = drag->touch.x - drag->previousTouch.x;
                drag->velocity.y = drag->touch.y - drag->previousTouch.y;
            }
        }
    } else {
        FUN_00231434(0x1C, 0xFA4, &sample.y, &sample.x, &sample.extentX, &sample.extentY);
        if (effectForwardModeOne(sample.y, sample.x, sample.extentX, sample.extentY) && g_gameState.unk18 == 0) {
            s32 x, y;
            FUN_003c2e0c(&x, &y);
            drag->touchStart.x = (f32)sample.x;
            drag->touchStart.y = (f32)sample.y;
            drag->cursorStart = *NaviMain_GetCursorPos(cursor);
            drag->touch.x = (f32)sample.x;
            drag->touch.y = (f32)sample.y;
            drag->previousTouch.x = (f32)sample.x;
            drag->previousTouch.y = (f32)sample.y;
            drag->stillFrames = 0;
            drag->flags |= 0x20000;
        }
    }
    if ((drag->flags & 0x20000) == 0) {
        f32 vx = drag->velocity.x;
        if (!(vx < -0.5f || vx > 0.5f) && !(drag->velocity.y < -0.5f || drag->velocity.y > 0.5f)) {
            drag->velocity.x = 0.0f;
            drag->velocity.y = 0.0f;
            return 0;
        }
        drag->velocity.x = vx * DAT_0044cdc8;
        drag->velocity.y = drag->velocity.y * DAT_0044cdc8;
        NavigationPoint position = *NaviMain_GetCursorPos(cursor);
        position.x += drag->velocity.x;
        position.y += drag->velocity.y;
        NaviMain_SetCursorPos(cursor, &position);
    }
    return 0;
}
}
