/* NON_MATCHING: duplicate retail trigonometric evaluations are absent; VFP scheduling and marker addressing differ. */
#include "gamedata/MapSaveBlockA.h"
#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"
#include "gamedata/DataTable4CValue.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"

extern "C" {
extern MapRndMazeA g_mapRndMaze;
f32 mathPositionHeadingDegrees(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

void FUN_002ef048()
{
    const MapSaveBlockA *saved = gameFlagsGetBlock();
    if (saved->maze.ready == 0)
        return;
    s32 x = saved->maze.displayX;
    s32 z = saved->maze.displayY;
    FUN_003857c8((s32)saved->unk15C4);
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(
        (f32)x, 0.0f, (f32)z, (f32)saved->maze.spawnX, 0.0f, (f32)saved->maze.spawnZ));
    if (saved->entranceHeading != 0) {
        if (saved->entranceHeading == 0x40 || saved->entranceHeading == 0x42)
            heading = 90.0f;
        else if (saved->entranceHeading == 0x41 || saved->entranceHeading == 0x43)
            heading = 0.0f;
    }
    MapVector position = {(f32)(saved->maze.displayX * 700 + 350), 0.0f, (f32)(saved->maze.displayY * 700 + 350)};
    f32 radians = heading * 0.017453292f;
    position.x -= libm_sinf(radians) * 330.0f;
    position.z -= libm_cosf(radians) * 330.0f;
    MoriModelContent *marker = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp", 0x12E1));
    if (marker != NULL)
        marker = modelListInit(marker);
    // Marker ownership lies beyond the recovered maze-state prefix.
    struct MarkerOwner { u8 prefix[0x9D4]; MoriModelContent *marker; };
    MarkerOwner *maze = reinterpret_cast<MarkerOwner *>(&g_mapRndMaze);
    maze->marker = marker;
    resourceOwnerLoadFileSync(maze->marker, "map/unit/u025.bam");
    moriModelContentLoadBody(maze->marker, 0);
    Obj557b18 *controller = maze->marker->body;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    controllerSetDestination(controller, &position);
    controllerSetRotationEulerDegrees(controller, 0.0f, heading, 0.0f);
}
}
