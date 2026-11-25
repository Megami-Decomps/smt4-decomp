/* NON_MATCHING: retail schedules the two heading heights in the opposite order, loads 90.0
 * before the predicated move, and stores the marker's zero height directly. */
#include "gamedata/MapSaveBlockA.h"
#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"
#include "util/TrigF32.h"
#include "util/MathFunctions.h"

extern "C" {
extern MapRndMazeA g_mapRndMaze;
f32 calcHeadingRoundedToCardinalDirection(f32 heading);

void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

/* Places the entrance marker on the current maze cell, facing the spawn point unless the save overrides it. */
void mapRndMazeCreateEntranceMarker()
{
    const MapSaveBlockA *saved = gameFlagsGetBlock();
    const MapMazeState *maze = &saved->maze;
    if (maze->ready == 0)
        return;
    s32 x = maze->displayX;
    s32 z = maze->displayY;
    FUN_003857c8((s32)saved->unk15C4);
    f32 groundHeight = 0.0f;
    MapVector from = {(f32)x, groundHeight, (f32)z};
    MapVector spawn = {(f32)maze->spawnX, groundHeight, (f32)maze->spawnZ};
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(from, spawn));
    const s8 forcedHeading = saved->entranceHeading;
    if (forcedHeading != 0) {
        if (forcedHeading == 0x40 || forcedHeading == 0x42)
            heading = 90.0f;
        else if (forcedHeading == 0x41 || forcedHeading == 0x43)
            heading = 0.0f;
    }
    MapVector position;
    position.x = (f32)(maze->displayX * 700 + 350);
    position.y = groundHeight;
    position.z = (f32)(maze->displayY * 700 + 350);
    /* retail evaluates the sine and cosine once more without using them */
    libm_sinf(heading * 0.017453292f);
    libm_cosf(heading * 0.017453292f);
    position.x -= libm_sinf(heading * 0.017453292f) * 330.0f;
    position.z -= libm_cosf(heading * 0.017453292f) * 330.0f;
    MoriModelContent *marker = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp", 0x12E1);
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
} /* extern "C" */
