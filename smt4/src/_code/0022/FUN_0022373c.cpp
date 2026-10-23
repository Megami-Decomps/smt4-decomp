/* NON_MATCHING: merged heading epilogue, VFP register lifetimes and neighbor-field addressing differ. */
#include "map/MapSpawn.h"
#include "map/lmapMain.h"
extern "C" {
extern LmapScene *g_lmapScene;
extern MapHeadingState *DAT_004474f4;
extern MapSpawnPoint DAT_00447f40[];
MapSpawnGrid *gameGetMapBlock(void);
s32 FUN_00285574(void);

// Restore an explicit spawn point or place the actor at the map's starting cell.
void FUN_0022373c(void)
{
    MapSpawnGrid *grid = gameGetMapBlock();
    s32 spawn = FUN_00285574();
    f32 heading = 0.0f;
    LmapScene *scene = g_lmapScene;
    if (spawn != 0) {
        const MapSpawnPoint *point = &DAT_00447f40[spawn];
        f32 x = (f32)point->x * 500.0f + 250.0f;
        f32 z = (f32)point->z * 500.0f + 250.0f;
        heading = (f32)point->heading;
        scene->transform.position[0] = x;
        scene->transform.position[1] = 0.0f;
        scene->transform.positionSnapshotA[1] = 0.0f;
        scene->transform.position[2] = z;
        scene->transform.positionSnapshotA[0] = x;
        scene->transform.positionSnapshotA[2] = z;
    } else {
        // Adjacency bytes straddle the current cell in the map's packed grid.
        struct NeighborView {
            u8 north;
            u8 unk01[0x6F];
            u8 west;
            u8 unk71[0xF];
            u8 east;
            u8 unk81[0x6F];
            u8 south;
        };
        const NeighborView *neighbors = (const NeighborView *)((u8 *)grid + grid->z * 0x78 + grid->x * 8 - 0x3C);
        f32 x = (f32)grid->x * 500.0f + 250.0f;
        f32 z = (f32)grid->z * 500.0f + 250.0f;
        scene->transform.position[0] = x;
        scene->transform.position[1] = 0.0f;
        scene->transform.position[2] = z;
        scene->transform.positionSnapshotA[0] = x;
        scene->transform.positionSnapshotA[1] = 0.0f;
        scene->transform.positionSnapshotA[2] = z;
        if (neighbors->north == 2)
            heading = 180.0f;
        if (neighbors->south == 2)
            heading = 0.0f;
        if (neighbors->west == 2)
            heading = 270.0f;
        if (neighbors->east == 2)
            heading = 90.0f;
    }
    scene->transform.headingDegrees = heading;
    scene->transform.headingCopy = heading;
    DAT_004474f4->heading = heading;
}
}
