/* NON_MATCHING: cached scene and typed cell indexing differ in load scheduling, VFP allocation, and neighbor-address formation. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match7_FlagBanks.h"

struct LmapCell {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[7];
};

struct LmapFlagData {
    /* 0x000 */ u8 unk000[0x3c];
    /* 0x03c */ LmapCell cells[440];
    /* 0xdfc */ u8 unkdfc[4];
    /* 0xe00 */ s8 x;
    /* 0xe01 */ s8 z;
};

struct LmapSpawn {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s8 x;
    /* 0x09 */ s8 z;
    /* 0x0a */ s16 heading;
    /* 0x0c */ u8 unk0c[0x38];
};

struct LmapView {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
};

extern "C" {
extern LmapSpawn g_lmapSpawns[];
extern LmapView *g_lmapView;
s32 lmapGetSpawnIndex(void);

// Place the map camera at its saved cell or at an explicit entry point.
void lmapSceneRestoreEntryPosition(void)
{
    LmapFlagData *flags = reinterpret_cast<LmapFlagData *>(gameFlagsGetBlock());
    f32 heading = 0.0f;
    s32 spawnIndex = lmapGetSpawnIndex();
    LmapScene *scene = g_lmapScene;
    if (spawnIndex != 0 && spawnIndex < 100) {
        const LmapSpawn *spawn = &g_lmapSpawns[spawnIndex];
        f32 x = spawn->x * 700.0f + 350.0f;
        f32 z = spawn->z * 700.0f + 350.0f;
        f32 spawnHeading = spawn->heading;
        scene->position.x = x;
        scene->position.y = 0.0f;
        scene->position.z = z;
        scene->targetPosition.x = x;
        scene->targetPosition.y = 0.0f;
        scene->targetPosition.z = z;
        scene->heading = spawnHeading;
        scene->targetHeading = spawnHeading;
        g_lmapView->heading = spawnHeading;
        return;
    }
    LmapCell *cell = &flags->cells[flags->z * 15 + flags->x];
    f32 x = flags->x * 700.0f + 350.0f;
    f32 z = flags->z * 700.0f + 350.0f;
    scene->position.x = x;
    scene->position.y = 0.0f;
    scene->position.z = z;
    scene->targetPosition.x = x;
    scene->targetPosition.y = 0.0f;
    scene->targetPosition.z = z;
    if (cell[-15].kind == 2)
        heading = 180.0f;
    if (cell[15].kind == 2)
        heading = 0.0f;
    if (cell[-1].kind == 2)
        heading = 270.0f;
    if (cell[1].kind == 2)
        heading = 90.0f;
    scene->heading = heading;
    scene->targetHeading = heading;
    g_lmapView->heading = heading;
}
}
