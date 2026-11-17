/* NON_MATCHING: duplicate retail trigonometric evaluations are absent; VFP scheduling and marker addressing differ. */
#include "map/mapRndMaze.h"
#include "Model/ModelList.h"
#include "code/Code0040.h"
#include "Model/MoriModelManager.h"

extern "C" {
extern MapRndMazeA g_mapRndMaze;
void *gameFlagsGetBlock();
f32 mathPositionHeadingDegrees(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
ModelList *modelListInit(ModelList *model);
void moriModelContentLoadBody(ModelList *model, s32 mode);
void controllerSetDestination(MoriModelBody *controller, const f32 position[3]);
void controllerSetRotationEulerDegrees(MoriModelBody *controller, f32 x, f32 y, f32 z);

void FUN_002ef048()
{
    struct SavedEntrance {
        u8 prefix[0xE00];
        s8 previousX, previousZ;
        u8 paddingE02[7];
        u8 present;
        s8 x, z;
        u8 paddingE0C[0x7B8];
        f32 mapValue;
        u8 padding15C8[0xA4];
        s8 kind;
    };
    const SavedEntrance *saved = static_cast<const SavedEntrance *>(gameFlagsGetBlock());
    if (saved->present == 0)
        return;
    s32 x = saved->x;
    s32 z = saved->z;
    FUN_003857c8((s32)saved->mapValue);
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(
        (f32)x, 0.0f, (f32)z, (f32)saved->previousX, 0.0f, (f32)saved->previousZ));
    if (saved->kind != 0) {
        if (saved->kind == 0x40 || saved->kind == 0x42)
            heading = 90.0f;
        else if (saved->kind == 0x41 || saved->kind == 0x43)
            heading = 0.0f;
    }
    f32 position[3] = {(f32)(saved->x * 700 + 350), 0.0f, (f32)(saved->z * 700 + 350)};
    f32 radians = heading * 0.017453292f;
    position[0] -= libm_sinf(radians) * 330.0f;
    position[2] -= libm_cosf(radians) * 330.0f;
    ModelList *marker = static_cast<ModelList *>(asdMemoryAllocTraced(sizeof(ModelList),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp", 0x12E1));
    if (marker != NULL)
        marker = modelListInit(marker);
    // Marker ownership lies beyond the recovered maze-state prefix.
    struct MarkerOwner { u8 prefix[0x9D4]; ModelList *marker; };
    MarkerOwner *maze = reinterpret_cast<MarkerOwner *>(&g_mapRndMaze);
    maze->marker = marker;
    resourceOwnerLoadFileSync(maze->marker, "map/unit/u025.bam");
    moriModelContentLoadBody(maze->marker, 0);
    MoriModelBody *controller = maze->marker->content.body;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    controllerSetDestination(controller, position);
    controllerSetRotationEulerDegrees(controller, 0.0f, heading, 0.0f);
}
}
