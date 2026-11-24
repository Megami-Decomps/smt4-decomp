/* NON_MATCHING: in the initial state the map-state address overlaps the flag update;
 * the final visibility stores use the saved display pointer instead of the argument register. */
#include "ui/UiSpriteApi.h"
#include "map/NaviDisplayTransition.h"
#include "map/mapDepart.h"
#include "code/Code0039.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "game/GameState.h"

extern "C" {

void pointConvertToFloat(f32 *point, s32 x, s32 y);
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSelectMapPreset(void);
void uiSceneApplySpritePreset(void *window, s32 enable);
s32 NaviMain_GetPosX(u16 *state);
void naviMainSetCurrentMap(u16 *state, s32 map);
void FUN_002316e8(MapNaviDisplay *display, s32 map);
void mapNaviDisplayLoadMap(MapNaviDisplay *display, s32 map);

/* Slides in the navigation display, then shows the navigation map once its sprites finish. */
void mapNaviDisplayAdvanceOpening(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = (NaviDisplayTransitionView *)display;
    if (work->state == 0) {
        pointConvertToFloat(work->origin, -320, 0);
        if (g_gameState.map.bgResetPending != 0) {
            g_gameState.map.bgResetPending = 0;
            if (gameFlagIsSet(0x16) == 0) {
                commonBgStopChildAndBeginTransition();
            } else {
                commonBgReset();
            }
        }
        buttonHelpSelectMapPreset();
        uiSceneApplySpritePreset(work->window, 0);
        work->flags = (work->flags & ~2u) | 0x1000000;
        u16 *mapState = &work->mapState;
        work->state = 1;
        if (NaviMain_GetCurrentMap(mapState) != NaviMain_GetPosX(mapState)) {
            s32 map = NaviMain_GetPosX(mapState);
            naviMainSetCurrentMap(mapState, map);
            FUN_0039f860((u32)mapState, 0);
            work->counter = 0;
            if (map >= 100) {
                work->mapVisible = 0;
                FUN_002316e8(display, map);
            } else {
                work->mapVisible = 1;
                mapNaviDisplayLoadMap(display, map);
            }
        }
        return;
    }
    if (work->state == 1) {
        UiSpriteState *outgoing = &work->outgoing;
        if (uiSpriteAdvanceAnimation(outgoing) != 0) {
            work->state = 2;
        }
        s32 y = vec2GetYInt(outgoing);
        s32 x = vec2GetXInt(outgoing);
        pointConvertToFloat(work->origin, x, y);
        if (uiSpriteGetCompletionState(&work->lines[4]) != 0) {
            return;
        }
        for (s32 i = 0; i < 5; i++) {
            if (i <= work->step) {
                uiSpriteAdvanceAnimation(&work->lines[i]);
            }
        }
    } else if (work->state == 2) {
        if (uiSpriteGetCompletionState(&work->lines[4]) != 0) {
            work->flags &= ~0x1000000u;
            work->stage = 2;
            work->state = 0;
            return;
        }
        for (s32 i = 0; i < 5; i++) {
            if (i <= work->step) {
                uiSpriteAdvanceAnimation(&work->lines[i]);
            }
        }
    } else {
        return;
    }
    work->step++;
}
} /* extern "C" */
