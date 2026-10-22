#include "common.h"
#include "map/lmapMain.h"

extern "C" {

extern LmapSceneA *g_lmapScene;
extern u32 g_handleRegistry;

s32 FUN_0040ab8c(LmapActorA *actor);
void FUN_0040aad4(LmapActorA *actor, s32 arg);
void FUN_003fd7c0(u32 controller, s32 arg1, s32 arg2, f32 value);
void handleRegistryRegisterObject(u32 registry, u32 object);
void controllerSetDestination(u32 controller, f32 *destination);
void controllerSetRotationEulerDegrees(u32 controller, f32 x, f32 y, f32 z);

/* Once the scene actor is ready, re-registers its controller and moves it to the stored destination and yaw. */
bool lmapActorRestoreTransform(void)
{
    u32 controller;

    if (!FUN_0040ab8c(g_lmapScene->actor)) {
        return false;
    }
    g_lmapScene->unk24C = 0;
    FUN_0040aad4(g_lmapScene->actor, 0);
    controller = g_lmapScene->actor->controller;
    FUN_003fd7c0(controller, 0, 2, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, controller);
    g_lmapScene->unk250 = 0;
    controllerSetDestination(controller, g_lmapScene->actorDestination);
    controllerSetRotationEulerDegrees(controller, 0.0f, g_lmapScene->actorYaw, 0.0f);
    return true;
}

} /* extern "C" */
