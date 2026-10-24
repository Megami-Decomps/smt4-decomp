/* NON_MATCHING: same control flow and stack layout as retail; the build schedules the f32 expression temporaries (s0-s3) and the early address setup of r5/r6 differently. */
#include <math.h>
#include "map/NaviDisplayTransition.h"
#include "map/mapDepart.h"

struct CursorPosition {
    f32 x;
    f32 y;
};

extern "C" {
extern GameState g_gameState;
extern f32 DAT_0044cdc8;  // scroll friction

s32 FUN_002bffd8(s32 *x, s32 *y);
f32 naviMainGetParameter(u16 *state);
CursorPosition *NaviMain_GetCursorPos(u16 *state);
void NaviMain_SetCursorPos(u16 *state, CursorPosition *position);

// Scrolls the navigation map: follows a touch drag while one is active, then lets the leftover speed coast.
void FUN_0039c728(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = reinterpret_cast<NaviDisplayTransitionView *>(display);
    u16 *mapState = &work->mapState;
    f32 zero = 0.0f;
    if (work->flags & 0x20000) {
        s32 touchY;
        s32 touchX;
        if (FUN_002bffd8(&touchX, &touchY) != 0 && g_gameState.unk18 == 0) {
            CursorPosition position;
            f32 scale = naviMainGetParameter(mapState);
            position.x = ((f32)touchX - work->dragOriginX) / scale + work->cursorStartX;
            position.y = ((f32)touchY - work->dragOriginY) / scale + work->cursorStartY;
            NaviMain_SetCursorPos(mapState, &position);
            if ((f32)touchX == work->touchX && (f32)touchY == work->touchY) {
                if (work->touchAge < 99) {
                    work->touchAge++;
                }
            } else {
                work->touchAge = 0;
                work->lastTouchX = work->touchX;
                work->lastTouchY = work->touchY;
                work->touchX = (f32)touchX;
                work->touchY = (f32)touchY;
            }
            work->overlayDirty = 1;
        } else {
            work->flags &= ~0x30000u;
            if (work->touchAge > 2) {
                work->velocityX = zero;
                work->velocityY = zero;
            } else {
                work->velocityX = work->touchX - work->lastTouchX;
                work->velocityY = work->touchY - work->lastTouchY;
            }
        }
        if (work->flags & 0x20000) {
            return;
        }
    }
    if (fabsf(work->velocityX) <= 0.5f && fabsf(work->velocityY) <= 0.5f) {
        work->velocityX = zero;
        work->velocityY = zero;
    } else {
        work->velocityX = work->velocityX * DAT_0044cdc8;
        work->velocityY = work->velocityY * DAT_0044cdc8;
        f32 scale = naviMainGetParameter(mapState);
        CursorPosition position = *NaviMain_GetCursorPos(mapState);
        position.x = work->velocityX / scale + position.x;
        position.y = work->velocityY / scale + position.y;
        NaviMain_SetCursorPos(mapState, &position);
        work->overlayDirty = 1;
    }
}
}
