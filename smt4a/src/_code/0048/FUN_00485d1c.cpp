/* NON_MATCHING: game-state field loads, inactive-branch placement and interpolation VFP scheduling differ. */
#include "map/NavigationInterpolation.h"
#include "map/mapDepart.h"
/* Scene storage follows the end of the shared interpolation prefix. */
struct NavigationPollingWork {
    NavigationInterpolation interpolation;
    u8 unk164[0x368];
    u8 scene[1];
};
typedef char NavigationPollingSceneCheck[offsetof(NavigationPollingWork, scene) == 0x4CC ? 1 : -1];
extern "C" {
extern GameStateA g_gameState;
void FUN_0031879c(void);
u32 FUN_0048e40c(NavigationPollingWork *work);
u32 FUN_00488ce8(NavigationPollingWork *work);
u32 setFullScreenRect(void);
void naviMainSetValuePair(void *scene, const NavigationPoint *position);
void FUN_00489480(NavigationPollingWork *work);
void FUN_0048981c(NavigationPollingWork *work);

u32 FUN_00485d1c(NavigationPollingWork *work)
{
    u32 result = 0;
    if (g_gameState.navigation.alternateNaviMap)
        g_gameState.inputBlocked = 0;
    FUN_0031879c();
    NavigationInterpolation &motion = work->interpolation;
    if (motion.state.active) {
        if (!(motion.flags & 0x1000)) {
            if (motion.flags & 0x10) {
                ++motion.elapsed;
                if ((setFullScreenRect() && !g_gameState.inputBlocked) || motion.elapsed > 15) {
                    motion.flags &= ~0x10;
                } else {
                    NavigationPoint point;
                    point.x = (motion.target.x - motion.source.x) * static_cast<f32>(motion.elapsed) * (1.0f / 15.0f) + motion.source.x;
                    point.y = (motion.target.y - motion.source.y) * static_cast<f32>(motion.elapsed) * (1.0f / 15.0f) + motion.source.y;
                    naviMainSetValuePair(work->scene, &point);
                }
            }
            FUN_00489480(work);
            FUN_0048981c(work);
        }
    } else if (FUN_0048e40c(work)) {
        result = FUN_00488ce8(work);
    }
    if (g_gameState.navigation.alternateNaviMap)
        g_gameState.inputBlocked = 1;
    return result;
}
}
