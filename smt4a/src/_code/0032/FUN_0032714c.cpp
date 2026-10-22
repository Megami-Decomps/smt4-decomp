/* NON_MATCHING: scalar/global base register allocation and heading-store scheduling differ. */
/* Starts map movement toward a position and turns both scene actors toward it. */
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
void FUN_003250ac(void *movement, MapVector current, MapVector destination);
f32 mathPositionHeadingDegrees(MapVector current, MapVector destination);
void controllerSetRotationEulerDegrees(u32 controller, f32 x, f32 y, f32 z);

void FUN_0032714c(MapVector destination)
{
    /* Pointer fields in unk135 would change that byte-aligned shared region's alignment. */
    struct SceneMovementView {
        u8 unk000[0x180];
        LmapActorA *firstActor;
        u8 unk184[8];
        LmapActorA *secondActor;
        u8 unk190[0x40];
        u32 state;
        u8 unk1D4[4];
        u8 movement[0xC];
        u32 resumeState;
        u8 unk1E8[8];
        MapVector current;
        MapVector destination;
        u8 unk208[0x10];
        f32 heading;
    };
    SceneMovementView *scene = (SceneMovementView *)g_lmapScene;
    scene->destination = destination;
    FUN_003250ac(scene->movement, scene->current, destination);
    scene = (SceneMovementView *)g_lmapScene;
    f32 heading = mathPositionHeadingDegrees(scene->current, scene->destination);
    scene = (SceneMovementView *)g_lmapScene;
    scene->heading = heading;
    scene->state = 4;
    scene->resumeState = g_gameState.collision.resumeMovementState;
    controllerSetRotationEulerDegrees(scene->firstActor->controller, 0.0f, heading, 0.0f);
    scene = (SceneMovementView *)g_lmapScene;
    controllerSetRotationEulerDegrees(scene->secondActor->controller, 0.0f, scene->heading, 0.0f);
}
}
