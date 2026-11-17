/* NON_MATCHING: indexed neighbor accesses recover retail cell offsets; spawn-path load scheduling and VFP/register allocation still differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapViewGlobals.h"
#include "gamedata/MapSaveBlockA.h"

struct LmapSpawn {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s8 x;
    /* 0x09 */ s8 z;
    /* 0x0a */ s16 heading;
    /* 0x0c */ u8 unk0c[0x38];
};

extern "C" {
extern LmapSpawn g_lmapSpawns[];
s32 lmapGetSpawnIndex(void);

// Place the map camera at its saved cell or at an explicit entry point.
void lmapSceneRestoreEntryPosition(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    f32 heading = 0.0f;
    s32 spawnIndex = lmapGetSpawnIndex();
    if (spawnIndex != 0 && spawnIndex < 100) {
        const LmapSpawn *spawn = &g_lmapSpawns[spawnIndex];
        f32 x = spawn->x * 700.0f + 350.0f;
        f32 z = spawn->z * 700.0f + 350.0f;
        f32 spawnHeading = spawn->heading;
        LmapSceneA *scene = g_lmapScene;
        scene->pose.position.x = x;
        scene->pose.position.y = 0.0f;
        scene->pose.position.z = z;
        scene->pose.targetPosition.x = x;
        scene->pose.targetPosition.y = 0.0f;
        scene->pose.targetPosition.z = z;
        scene->pose.heading = spawnHeading;
        scene->pose.targetHeading = spawnHeading;
        g_lmapView->heading = spawnHeading;
        return;
    }
    s32 cellIndex = flags->maze.spawnZ * 15 + flags->maze.spawnX;
    f32 x = flags->maze.spawnX * 700.0f + 350.0f;
    f32 z = flags->maze.spawnZ * 700.0f + 350.0f;
    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x = x;
    scene->pose.position.y = 0.0f;
    scene->pose.position.z = z;
    scene->pose.targetPosition.x = x;
    scene->pose.targetPosition.y = 0.0f;
    scene->pose.targetPosition.z = z;
    if (flags->grid.cells[0][cellIndex - 15].state == 2)
        heading = 180.0f;
    if (flags->grid.cells[0][cellIndex + 15].state == 2)
        heading = 0.0f;
    if (flags->grid.cells[0][cellIndex - 1].state == 2)
        heading = 270.0f;
    if (flags->grid.cells[0][cellIndex + 1].state == 2)
        heading = 90.0f;
    scene->pose.heading = heading;
    scene->pose.targetHeading = heading;
    g_lmapView->heading = heading;
}
}
