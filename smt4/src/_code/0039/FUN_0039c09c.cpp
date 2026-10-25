/* NON_MATCHING: same control flow as retail (shared step increment, duplicated sprite loops, out-of-line else), but the build keeps different values in r5-r8 (retail hoists 0 into r8 and the outgoing sprite pointer into r5) and stores stage/state with strd. */
#include "map/NaviDisplayTransition.h"
#include "map/mapDepart.h"
#include "util/FUN_0039f860.h"

extern "C" {
extern GameState g_gameState;

void pointConvertToFloat(f32 *point, s32 x, s32 y);
s32 FUN_002bf818(UiSpriteState *sprite);
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);
s32 uiSpriteGetCompletionState(const void *record);
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void FUN_00289880(void);
void buttonHelpSelectMapPreset(void);
void FUN_00233240(void *window, s32 enable);
s32 NaviMain_GetCurrentMap(void);
s32 NaviMain_GetPosX(u16 *state);
void naviMainSetCurrentMap(u16 *state, s32 map);
void FUN_002316e8(MapNaviDisplay *display, s32 map);
void mapNaviDisplayLoadMap(MapNaviDisplay *display, s32 map);

// Opens the navigation map display: slides it in, then (once its sprites have finished) switches to the map the navi
// currently shows.
void FUN_0039c09c(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = reinterpret_cast<NaviDisplayTransitionView *>(display);
    if (work->state == 0) {
        pointConvertToFloat(work->origin, -320, 0);
        if (g_gameState.bgResetPending != 0) {
            g_gameState.bgResetPending = 0;
            if (gameFlagIsSet(0x16) == 0) {
                FUN_00289880();
            } else {
                commonBgReset();
            }
        }
        buttonHelpSelectMapPreset();
        FUN_00233240(work->window, 0);
        work->flags = (work->flags & ~2u) | 0x1000000;
        u16 *mapState = &work->mapState;
        work->state = 1;
        if (NaviMain_GetCurrentMap() != NaviMain_GetPosX(mapState)) {
            s32 map = NaviMain_GetPosX(mapState);
            naviMainSetCurrentMap(mapState, map);
            FUN_0039f860(reinterpret_cast<u32>(mapState), 0);
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
        if (FUN_002bf818(outgoing) != 0) {
            work->state = 2;
        }
        pointConvertToFloat(work->origin, vec2GetXInt(outgoing), vec2GetYInt(outgoing));
        if (uiSpriteGetCompletionState(&work->lines[4]) != 0) {
            return;
        }
        for (s32 i = 0; i < 5; i++) {
            if (i <= work->step) {
                FUN_002bf818(&work->lines[i]);
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
                FUN_002bf818(&work->lines[i]);
            }
        }
    } else {
        return;
    }
    work->step++;
}
}
