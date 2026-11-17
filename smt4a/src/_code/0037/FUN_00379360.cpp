/* NON_MATCHING: saved spawn parameter scheduling and literal-pool layout differ. */
/* Starts the saved grid-cell spawn movement, facing opposite the map camera. */
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapGlobals.h"

extern "C" {
s32 lmapGetSpawnIndex(void);
void sceneSlotStartMovement(f32 x, f32 y, f32 z, f32 heading,
                           f32 targetX, f32 targetY, f32 targetZ, f32 targetHeading,
                           f32 duration, f32 progress);

static __inline f32 spawnCellCenter(s32 cell, f32 size)
{
    return (f32)cell * size + size * 0.5f;
}

void FUN_00379360(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 spawn = lmapGetSpawnIndex();
    if (flags->spawnPending && spawn >= 100) {
        f32 x = spawnCellCenter(flags->pendingSpawnX, 700.0f);
        f32 targetX = spawnCellCenter(flags->pendingSpawnX, 700.0f);
        f32 z = spawnCellCenter(flags->pendingSpawnZ, 700.0f);
        f32 targetZ = spawnCellCenter(flags->pendingSpawnZ, 700.0f);
        f32 heading = g_lmapScene->pose.heading + 180.0f;
        flags->spawnPending = 0;
        sceneSlotStartMovement(x, 500.0f, z, heading, targetX, 0.0f, targetZ, heading, 10.0f, 100.0f);
    }
}
}
