/* NON_MATCHING: retail uses two predicated velocity stores on drag release and schedules the address setup and float operations differently. */
#include <math.h>
#include "map/NaviDisplayTransition.h"
#include "map/mapDepart.h"
#include "game/GameState.h"
#include "shard/NaviMain.h"
#include "title/TitleSceneTuning.h"

struct CursorPosition {
    f32 x;
    f32 y;
};

extern "C" {

s32 FUN_002bffd8(s32 *x, s32 *y);
f32 naviMainGetParameter(u16 *state);
void NaviMain_SetCursorPos(u16 *state, CursorPosition *position);

/* Halts inertial scrolling by clearing both velocity components. */
static __inline void naviStopScroll(NaviDisplayTransitionView *work)
{
    work->velocityX = 0.0f;
    work->velocityY = 0.0f;
}

// Scrolls the navigation map: follows a touch drag while one is active, then lets the leftover speed coast.
void mapNaviDisplayUpdateDragScroll(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = (NaviDisplayTransitionView *)display;
    u16 *mapState = &work->mapState;
    if (work->flags & 0x20000) {
        s32 touchY;
        s32 touchX;
        if (FUN_002bffd8(&touchX, &touchY) != 0 && g_gameState.inputBlocked == 0) {
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
                naviStopScroll(work);
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
        naviStopScroll(work);
    } else {
        work->velocityX = work->velocityX * DAT_0044cdc8.dragFriction;
        work->velocityY = work->velocityY * DAT_0044cdc8.dragFriction;
        f32 scale = naviMainGetParameter(mapState);
        CursorPosition position = *(CursorPosition *)NaviMain_GetCursorPos(mapState);
        position.x = work->velocityX / scale + position.x;
        position.y = work->velocityY / scale + position.y;
        NaviMain_SetCursorPos(mapState, &position);
        work->overlayDirty = 1;
    }
}
}
