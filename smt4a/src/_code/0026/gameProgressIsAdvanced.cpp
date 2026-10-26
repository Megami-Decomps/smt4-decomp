#include "gamedata/GameData.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "gamedata/GameDataAccess.h"

struct SaveProgressSection {
    u8 unk000[0x7c4]; // 0x000
    u8 mode;           // 0x7c4
};

struct SaveProgressBlock {
    u8 unk0000[0x3e74]; // 0x0000
    SaveProgressSection progress; // 0x3e74
};

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;
u8 lmapGetSpawnIndex();

// Test the story-progress threshold or the saved progress-mode override.
u32 gameProgressIsAdvanced()
{
    SaveProgressSection* progress = &((SaveProgressBlock*)g_gameDataBlocks.saveBlock)->progress;
    s32 level = lmapGetSpawnIndex();
    if ((g_gameState.progressEnabled != 0 && level > 100) || progress->mode == 2) {
        return 1;
    }
    return 0;
}
}
