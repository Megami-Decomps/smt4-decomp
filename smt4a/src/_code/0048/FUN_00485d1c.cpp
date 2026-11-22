/* NON_MATCHING: 86 vs 86 rows (51 diff lines): out-of-line inactive check and non-vmla interpolation match retail; GameStateA::alternateNaviMap must remain u8 (s8 breaks 4 IDENTICAL users), and VFP s1/s2 allocation in interpolation differs. */
#include "map/NavigationInterpolation.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

/* Scene storage follows the end of the shared interpolation prefix. */
struct NavigationPollingWork {
    NavigationInterpolation interpolation;
    u8 unk164[0x368];
    u8 scene[1];
};
typedef char NavigationPollingSceneCheck[offsetof(NavigationPollingWork, scene) == 0x4CC ? 1 : -1];

extern "C" {
void FUN_0031879c(void);
u32 naviMainConditionsHold(NavigationPollingWork *work);
u32 FUN_00488ce8(NavigationPollingWork *work);
void naviMainSetValuePair(void *scene, const NavigationPoint *position);
void naviInputHandleMapToggle(NavigationPollingWork *work);
void FUN_0048981c(NavigationPollingWork *work);

u32 FUN_00485d1c(NavigationPollingWork *work)
{
    u32 result = 0;
    if (g_gameState.alternateNaviMap) {
        g_gameState.inputBlocked = 0;
    }
    FUN_0031879c();
    if (work->interpolation.state.active == 0) {
        if (naviMainConditionsHold(work)) {
            result = FUN_00488ce8(work);
        }
    } else {
        if ((work->interpolation.flags & 0x1000) == 0) {
            if (work->interpolation.flags & 0x10) {
                ++work->interpolation.elapsed;
                if ((setFullScreenRect() && !g_gameState.inputBlocked) || work->interpolation.elapsed > 15) {
                    work->interpolation.flags &= ~0x10;
                } else {
                    NavigationPoint point;
                    point.x = (work->interpolation.target.x - work->interpolation.source.x) * (f32)work->interpolation.elapsed * (1.0f / 15.0f);
                    point.y = (work->interpolation.target.y - work->interpolation.source.y) * (f32)work->interpolation.elapsed * (1.0f / 15.0f);
                    point.x += work->interpolation.source.x;
                    point.y += work->interpolation.source.y;
                    naviMainSetValuePair(work->scene, &point);
                }
            }
            naviInputHandleMapToggle(work);
            FUN_0048981c(work);
        }
    }
    if (g_gameState.alternateNaviMap) {
        g_gameState.inputBlocked = 1;
    }
    return result;
}
} /* extern "C" */
