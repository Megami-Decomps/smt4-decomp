#include "common.h"

/* A loaded file handle with the buffer it was loaded into. */
struct LoadedFile {
    void *handle;
    u32 buffer;
};

/* The part of the game state that holds the map system's loaded files (0x288..). */
struct MapAssetFiles {
    u8 unk000[0x288];
    void *scriptFile;       // 0x288
    void *messageFile;      // 0x28C
    LoadedFile files[13];   // 0x290
};

extern "C" {
extern MapAssetFiles g_gameState;
void mapDepartClearData(void);
void FUN_00287c34(s32 value);
void mapFilterLoad(void);
void mapIfLoadWidgets(void);
void FUN_002f58e0(void);
void asdTMTexTableLoadSprites(s32 table);
void FUN_002c58c8(s32 a, s32 b);
void *asdLoadFileSyncDefault(const char *path);
void *asdLoadFileSync(const char *path, u32 *buffer, s32 a, s32 size);

/* Load the field map system's shared files and clear the departure data. */
void mapSystemLoadSharedFiles(void)
{
    FUN_00287c34(0);
    mapFilterLoad();
    mapIfLoadWidgets();
    FUN_002f58e0();
    asdTMTexTableLoadSprites(0x1C);
    FUN_002c58c8(0x1C, 3);
    FUN_002c58c8(0x1C, 4);
    g_gameState.scriptFile = asdLoadFileSyncDefault("map/all/mapsys_scr.bf");
    g_gameState.messageFile = asdLoadFileSyncDefault("map/all/mapsys_mes.mbm");
    g_gameState.files[0].handle = asdLoadFileSync("map/all/damage.bam", &g_gameState.files[0].buffer, 1, 0x10);
    g_gameState.files[1].handle = asdLoadFileSync("player_arms/arm00.bam", &g_gameState.files[1].buffer, 1, 0x10);
    g_gameState.files[2].handle = asdLoadFileSync("player_arms/arm01.bam", &g_gameState.files[2].buffer, 1, 0x10);
    g_gameState.files[3].handle = asdLoadFileSync("player_arms/arm02.bam", &g_gameState.files[3].buffer, 1, 0x10);
    g_gameState.files[4].handle = asdLoadFileSync("player_arms/arm03.bam", &g_gameState.files[4].buffer, 1, 0x10);
    g_gameState.files[5].handle = asdLoadFileSync("map/all/pl_ring_in.bam", &g_gameState.files[5].buffer, 1, 0x10);
    g_gameState.files[6].handle = asdLoadFileSync("map/all/pl_ring_out.bam", &g_gameState.files[6].buffer, 1, 0x10);
    g_gameState.files[7].handle = asdLoadFileSync("map/all/area_next.bam", &g_gameState.files[7].buffer, 1, 0x10);
    g_gameState.files[8].handle = asdLoadFileSync("map/all/ar_hit.bam", &g_gameState.files[8].buffer, 1, 0x10);
    g_gameState.files[9].handle = asdLoadFileSync("map/unit/u001.bam", &g_gameState.files[9].buffer, 1, 0x10);
    g_gameState.files[10].handle = asdLoadFileSync("map/unit/u002.bam", &g_gameState.files[10].buffer, 1, 0x10);
    g_gameState.files[11].handle = asdLoadFileSync("map/unit/u004.bam", &g_gameState.files[11].buffer, 1, 0x10);
    g_gameState.files[12].handle = asdLoadFileSync("map/unit/u005.bam", &g_gameState.files[12].buffer, 1, 0x10);
    mapDepartClearData();
}
}
