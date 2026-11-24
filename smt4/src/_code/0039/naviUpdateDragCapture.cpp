#include "shard/W5_W5Match7_SceneState.h"
#include "shard/NaviMain.h"
#include "AsdSDK/TexTableEntryRange.h"
#include "game/GameState.h"
#include "map/mapDepart.h"
#include "map/NavigationInterpolation.h"

extern "C" {
s32 effectForwardModeOne(s32, s32, s32, s32);
void FUN_003c2e0c(s32 *x, s32 *y);

// Capture the initial drag position and track whether the pointer remains held.
u32 naviUpdateDragCapture(NavigationInterpolation *nav)
{
    s32 a, b, c, d;
    s32 x, y;
    if (!(nav->flags & 0x2000000)) {
        asdTMTexTableGetEntryPlacement(0x1c, 0xfa4, &a, &b, &c, &d);
        if (effectForwardModeOne(a, b, c, d) && !g_gameState.inputBlocked) {
            FUN_003c2e0c(&x, &y);
            nav->flags |= 0x10000;
            nav->drag.touch.x = (f32)x;
            nav->drag.touch.y = (f32)y;
            nav->drag.previousTouch.x = (f32)x;
            nav->drag.previousTouch.y = (f32)y;
            /* The cursor's value pair, copied field by field as Apocalypse's naviMapHandleInput does. */
            NaviValuePair value = *NaviMain_GetCursorPos(nav->cursorData);
            nav->drag.touchOrigin.x = (f32)x;
            nav->drag.touchOrigin.y = (f32)y;
            nav->drag.valueOrigin.x = value.first;
            nav->drag.valueOrigin.y = value.second;
            nav->drag.velocity.x = 0.0f;
            nav->drag.velocity.y = 0.0f;
            nav->drag.stillFrames = 0;
            nav->drag.heldFrames = 0;
        } else {
            if (nav->flags & 0x10000) {
                if (!setFullScreenRect() || g_gameState.inputBlocked) {
                    nav->flags &= ~0x20000;
                } else {
                    if (nav->drag.heldFrames < 0xffff)
                        ++nav->drag.heldFrames;
                    if (nav->drag.heldFrames > 0)
                        nav->flags |= 0x20000;
                }
            }
        }
    }
    return 0;
}
}
