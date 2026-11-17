#include "map/mapTrap.h"
#include "map/LmapGlobals.h"
#include "gfx/ControllerModel.h"

struct TrapMovementActor {
    u32 unk00;
    Obj557b18 *controller; // 0x04
};
struct TrapMovementView {
    u8 unk00[0x34];
    TrapMovementActor *actor; // 0x34
    u8 unk38[0x2c];
    s32 state; // 0x64
};

extern "C" {
extern MapTrapA *g_mapTrap;

// Move the trap actor toward the map-scene destination at speed six.
void mapTrapBeginMoveToScene(void)
{
    TrapMovementView *trap = (TrapMovementView *)g_mapTrap;
    Obj557b18 *controller = trap->actor->controller;
    controllerSetDestination(controller, &g_lmapScene->pose.position);
    modelPlayClip(controller, 0, 2, 0.0f, 0.0f);
    controller->speed = 6.0f;
    ((TrapMovementView *)g_mapTrap)->state = 1;
}
}
