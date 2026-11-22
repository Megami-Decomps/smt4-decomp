/* NON_MATCHING: 10 lines, all in the release arm: retail stores the cleared drag flag before it loads stillFrames
 * (the build loads first) and loads touch.y/previousTouch.y into s1/s0 where the build uses s0/s1. */
#include "map/mapDepart.h"
#include "map/NavigationInterpolation.h"
#include "game/GameState.h"
#include "shard/NaviMain.h"
#include "title/TitleSceneTuning.h"
#include <math.h>

extern "C" {

s32 naviUpdateTouchButtons(NavigationInterpolation *nav);
s32 FUN_002bffd8(s32 *x, s32 *y);
s32 FUN_003c2e14(s32 *x, s32 *y);
s32 FUN_003c2e0c(s32 *x, s32 *y);
s32 asdTMTexTableGetEntryPlacement(s32 a, s32 b, s32 *x, s32 *y, s32 *width, s32 *height);
u32 effectForwardModeOne(s32 x, s32 y, s32 width, s32 height);
void NaviMain_SetCursorPos(u8 *cursorData, NavigationPoint *position);

/* Per-frame touch drag of the navigation cursor: follows the stylus while it is down and coasts afterwards. */
u32 naviDragScrollUpdate(NavigationInterpolation *nav)
{
    if (naviUpdateTouchButtons(nav) != 0) {
        return 0;
    }
    u8 *cursor = nav->cursorData;
    if ((nav->flags & 0x20000) == 0) {
        s32 left, top, width, height;
        asdTMTexTableGetEntryPlacement(0x1C, 0xFA4, &left, &top, &width, &height);
        if (effectForwardModeOne(left, top, width, height) && g_gameState.inputBlocked == 0) {
            s32 x, y;
            FUN_003c2e0c(&x, &y);
            nav->drag.touchOrigin.x = (f32)x;
            nav->drag.touchOrigin.y = (f32)y;
            nav->drag.valueOrigin = *(NavigationPoint *)NaviMain_GetCursorPos(cursor);
            nav->drag.touch.x = (f32)x;
            nav->drag.touch.y = (f32)y;
            nav->drag.previousTouch.x = (f32)x;
            nav->drag.previousTouch.y = (f32)y;
            nav->drag.stillFrames = 0;
            nav->flags |= 0x20000;
        }
    } else {
        s32 x, y;
        if (FUN_002bffd8(&x, &y) && g_gameState.inputBlocked == 0) {
            NavigationPoint position;
            position.x = nav->drag.valueOrigin.x + ((f32)x - nav->drag.touchOrigin.x);
            position.y = nav->drag.valueOrigin.y + ((f32)y - nav->drag.touchOrigin.y);
            NaviMain_SetCursorPos(cursor, &position);
            if (nav->drag.touch.x == (f32)x && nav->drag.touch.y == (f32)y) {
                if (nav->drag.stillFrames < 99) {
                    nav->drag.stillFrames = nav->drag.stillFrames + 1;
                }
            } else {
                nav->drag.previousTouch.x = nav->drag.touch.x;
                nav->drag.previousTouch.y = nav->drag.touch.y;
                nav->drag.touch.x = (f32)x;
                nav->drag.touch.y = (f32)y;
            }
        } else if (FUN_003c2e14(&x, &y) != 0 || g_gameState.inputBlocked != 0) {
            nav->flags &= ~0x20000;
            if (nav->drag.stillFrames > 2) {
                nav->drag.velocity.x = 0.0f;
                nav->drag.velocity.y = 0.0f;
            } else {
                nav->drag.velocity.x = nav->drag.touch.x - nav->drag.previousTouch.x;
                nav->drag.velocity.y = nav->drag.touch.y - nav->drag.previousTouch.y;
            }
        }
    }
    if ((nav->flags & 0x20000) == 0) {
        if (fabsf(nav->drag.velocity.x) > 0.5f || fabsf(nav->drag.velocity.y) > 0.5f) {
            nav->drag.velocity.x = nav->drag.velocity.x * DAT_0044cdc8.dragFriction;
            nav->drag.velocity.y = nav->drag.velocity.y * DAT_0044cdc8.dragFriction;
            NavigationPoint position = *(NavigationPoint *)NaviMain_GetCursorPos(cursor);
            position.x += nav->drag.velocity.x;
            position.y += nav->drag.velocity.y;
            NaviMain_SetCursorPos(cursor, &position);
        } else {
            nav->drag.velocity.x = 0.0f;
            nav->drag.velocity.y = 0.0f;
        }
    }
    return 0;
}
}
