/* NON_MATCHING: initial trap/scene pointer chains use opposite r0/r1 allocation and form the destination later; all subsequent instructions match. */
#include "map/mapTrap.h"
#include "shard/W5_W5Match7_ControllerPose.h"

struct TrapMovementController {
    ControllerPose pose; // 0x000
    f32 speed; // 0x1fc
};
struct TrapMovementActor {
    u32 unk00;
    TrapMovementController *controller; // 0x04
};
struct TrapMovementView {
    u8 unk00[0x34];
    TrapMovementActor *actor; // 0x34
    u8 unk38[0x2c];
    s32 state; // 0x64
};

extern "C" {
extern MapTrapA *g_mapTrap;
void controllerSetDestination(ControllerPose *controller, const MapVector *destination);
void FUN_003fe86c(ControllerPose *controller, u32 motion, u32 mode, f32 blend, f32 start);

// Move the trap actor toward the map-scene destination at speed six.
void mapTrapBeginMoveToScene(void)
{
    TrapMovementController *controller = ((TrapMovementView *)g_mapTrap)->actor->controller;
    controllerSetDestination(&controller->pose, &g_lmapScene->position);
    FUN_003fe86c(&controller->pose, 0, 2, 0.0f, 0.0f);
    controller->speed = 6.0f;
    ((TrapMovementView *)g_mapTrap)->state = 1;
}
}
