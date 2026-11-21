/* NON_MATCHING: VFP scheduling only: the shared 0.0f and the heading swap s16/s17, and the radians product is computed before the position instead of after it. */
#include "gamedata/MapSaveBlockA.h"
#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"
#include "util/TrigF32.h"

extern "C" {
extern MapRndMazeA g_mapRndMaze;
f32 mathPositionHeadingDegrees(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);

void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

void mapRndMazeCreateEntranceMarker()
{
    const MapSaveBlockA *saved = gameFlagsGetBlock();
    const MapMazeState *maze = &saved->maze;
    if (maze->ready == 0)
        return;
    s32 x = maze->displayX;
    s32 z = maze->displayY;
    FUN_003857c8((s32)saved->unk15C4);
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(
        (f32)x, 0.0f, (f32)z, (f32)maze->spawnX, 0.0f, (f32)maze->spawnZ));
    if (saved->entranceHeading != 0) {
        if (saved->entranceHeading == 0x40 || saved->entranceHeading == 0x42)
            heading = 90.0f;
        else if (saved->entranceHeading == 0x41 || saved->entranceHeading == 0x43)
            heading = 0.0f;
    }
    MapVector position;
    position.x = (f32)(maze->displayX * 700 + 350);
    position.y = 0.0f;
    position.z = (f32)(maze->displayY * 700 + 350);
    f32 radians = heading * 0.017453292f;
    /* retail evaluates the sine and cosine once more without using them */
    libm_sinf(radians);
    libm_cosf(radians);
    position.x -= libm_sinf(radians) * 330.0f;
    position.z -= libm_cosf(radians) * 330.0f;
    MoriModelContent *marker = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp", 0x12E1));
    if (marker != NULL)
        marker = modelListInit(marker);
    g_mapRndMaze.marker = marker;
    resourceOwnerLoadFileSync(g_mapRndMaze.marker, "map/unit/u025.bam");
    moriModelContentLoadBody(g_mapRndMaze.marker, 0);
    Obj557b18 *controller = g_mapRndMaze.marker->body;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    controllerSetDestination(controller, &position);
    controllerSetRotationEulerDegrees(controller, 0.0f, heading, 0.0f);
}
}
