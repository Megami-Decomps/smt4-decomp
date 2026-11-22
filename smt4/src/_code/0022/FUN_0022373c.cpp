/* NON_MATCHING: the two arms (each with its own heading stores, as retail's two epilogues show) and the neighbour
 * cell tests match retail's code; retail loads the scene pointer in each arm and reuses the spawn cell's loaded
 * coordinates for the cell index, and the VFP registers differ. */
#include "gamedata/MapSaveBlock.h"
#include "map/MapSpawn.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
extern "C" {

extern MapSpawnPoint DAT_00447f40[];

/* Restores an explicit spawn point or places the actor at the map's starting cell, facing an open neighbour. */
void FUN_0022373c(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    f32 heading = 0.0f;
    s32 spawn = mapGetDepartureIndex();
    LmapScene *scene = g_lmapScene;
    if (spawn != 0) {
        const MapSpawnPoint *point = &DAT_00447f40[spawn];
        f32 x = (f32)point->x * 500.0f + 250.0f;
        f32 z = (f32)point->z * 500.0f + 250.0f;
        heading = (f32)point->heading;
        scene->pose.position.x = x;
        scene->pose.position.y = 0.0f;
        scene->pose.targetPosition.y = 0.0f;
        scene->pose.position.z = z;
        scene->pose.targetPosition.x = x;
        scene->pose.targetPosition.z = z;
        scene->pose.heading = heading;
        scene->pose.targetHeading = heading;
        g_mapCamera->heading = heading;
    } else {
        f32 x = (f32)block->maze.spawnX * 500.0f + 250.0f;
        f32 z = (f32)block->maze.spawnZ * 500.0f + 250.0f;
        scene->pose.position.x = x;
        scene->pose.position.y = 0.0f;
        scene->pose.position.z = z;
        scene->pose.targetPosition.x = x;
        scene->pose.targetPosition.y = 0.0f;
        scene->pose.targetPosition.z = z;
        if (block->grid.cells[block->maze.spawnZ - 1][block->maze.spawnX].state == 2)
            heading = 180.0f;
        if (block->grid.cells[block->maze.spawnZ + 1][block->maze.spawnX].state == 2)
            heading = 0.0f;
        if (block->grid.cells[block->maze.spawnZ][block->maze.spawnX - 1].state == 2)
            heading = 270.0f;
        if (block->grid.cells[block->maze.spawnZ][block->maze.spawnX + 1].state == 2)
            heading = 90.0f;
        scene->pose.heading = heading;
        scene->pose.targetHeading = heading;
        g_mapCamera->heading = heading;
    }
}
}
