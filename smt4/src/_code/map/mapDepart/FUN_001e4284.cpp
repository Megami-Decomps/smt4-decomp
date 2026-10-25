/* NON_MATCHING: block layout, float constant scheduling and register naming differ - retail places the immediate branch after the tail and scales the colour bytes in a different register order; stores and calls are the same. */
#include "map/MapEnvironment.h"

namespace {
/* One record of the map's record table (0x124 bytes each; only the first word is set here). */
struct MapEnvRecord {
    /* 0x000 */ s32 unk000;
    /* 0x004 */ u8 unk004[0x120];
};

/* g_mapTable as the environment code sees it: the preset table, the fade between presets and the sky texture. */
struct MapEnvironmentState {
    /* 0x00 */ MapEnvironmentEntry *entries;
    /* 0x04 */ MapEnvRecord *records;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ s32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 current;            /* the preset being shown */
    /* 0x1c */ s32 previous;           /* the preset faded out */
    /* 0x20 */ f32 fade;
    /* 0x24 */ f32 fadeSpeed;
    /* 0x28 */ s32 unk28;
    /* 0x2c */ s32 selectedIndex;
    /* 0x30 */ s32 textureLoaded;
    /* 0x34 */ s32 texture;
    /* 0x38 */ s32 unk38;
    /* 0x3c */ s32 unk3c;
};

/* g_gameState's environment block (0x610..0x64c). */
struct MapEnvironmentGameView {
    /* 0x000 */ u8 unk000[0x228];
    /* 0x228 */ u8 darkZone;
    /* 0x229 */ u8 unk229[0x167];
    /* 0x390 */ s32 presetIndex;
    /* 0x394 */ u8 unk394[4];
    /* 0x398 */ s32 unk398;
    /* 0x39c */ s32 unk39c;
    /* 0x3a0 */ s32 unk3a0;
    /* 0x3a4 */ s32 unk3a4;
    /* 0x3a8 */ s32 unk3a8;
    /* 0x3ac */ s32 unk3ac;
    /* 0x3b0 */ s32 unk3b0;
    /* 0x3b4 */ u32 unk3b4;
    /* 0x3b8 */ u32 unk3b8;
    /* 0x3bc */ u32 unk3bc;
    /* 0x3c0 */ u32 unk3c0;
    /* 0x3c4 */ u32 unk3c4;
    /* 0x3c8 */ u32 unk3c8;
};

struct MapHeading {
    u32 unk00;
    f32 degrees;
};
}

extern "C" {
extern MapEnvironmentState g_mapTable;
extern MapEnvironmentGameView g_gameState;
extern MapHeading g_fixedCameraPosition;
void asdTMTexTableReleaseNode(u32 table, u32 node);
void FUN_002c58c8(u32 table, u32 node);
s32 FUN_002c1c0c(u32 table, u32 node);
void FUN_001a9604(u32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g);
void FUN_001e39ec(u32 enabled, u32 arg14, u32 arg15, u32 arg16, u32 arg17,
                  u32 arg18, u32 arg19, u32 arg20, u32 arg21, u32 arg22,
                  u32 arg23, s32 arg24, s32 arg26, f32 arg1A, f32 arg1C);
void FUN_0025b754(void);

/* Switches the map environment (sky texture, light and fog parameters, heading) to preset `preset`,
   fading from the previous one over `transition` frames (1 means the default 15; 0 is immediate). */
void FUN_001e4284(u32 preset, s32 transition)
{
    s32 frames;
    if (transition == 0) {
        frames = 0;
    } else {
        frames = 15;
        if (transition > 1) {
            frames = transition;
        }
    }
    g_mapTable.selectedIndex = preset;
    if (g_gameState.darkZone != 0) {
        g_mapTable.selectedIndex = 0;
    }
    g_gameState.presetIndex = g_mapTable.selectedIndex;
    const MapEnvironmentEntry *entry = &g_mapTable.entries[g_mapTable.selectedIndex];
    g_gameState.unk398 = entry->id;
    g_gameState.unk39c = entry->unk02;
    g_gameState.unk3a0 = entry->unk04;
    g_gameState.unk3a4 = entry->unk06;
    s32 id = entry->id;
    if (frames != 0) {
        g_mapTable.fade = 0.0f;
        g_mapTable.previous = g_mapTable.current;
        g_mapTable.fadeSpeed = (f32)frames;
    } else {
        g_mapTable.fade = 1.0f;
        g_mapTable.previous = id;
    }
    g_mapTable.current = id;
    g_mapTable.records[id].unk000 = entry->unk06;
    if (g_mapTable.textureLoaded != 0) {
        asdTMTexTableReleaseNode(56, g_mapTable.texture);
        g_mapTable.textureLoaded = 0;
    }
    g_mapTable.texture = id;
    if (id > 49) {
        g_mapTable.texture = 0;
    }
    FUN_002c58c8(56, g_mapTable.texture);
    g_mapTable.textureLoaded = FUN_002c1c0c(56, g_mapTable.texture);
    g_mapTable.unk0c = entry->unk02;
    g_mapTable.unk10 = 0.0f;
    g_mapTable.unk14 = 0;
    g_mapTable.unk3c = entry->unk06;
    g_mapTable.unk28 = entry->unk04;
    FUN_001a9604(entry->unk08, (f32)entry->unk09 * (1.0f / 255.0f), (f32)entry->unk0A * (1.0f / 255.0f),
                 (f32)entry->unk0B * (1.0f / 255.0f), (f32)entry->unk0C * 100.0f,
                 (f32)entry->unk0E * 100.0f, entry->unk10);
    FUN_001e39ec(0, entry->unk14, entry->unk15, entry->unk16, entry->unk17,
                 entry->unk18, entry->unk19, entry->unk20, entry->unk21,
                 entry->unk22, entry->unk23, entry->unk24, entry->unk26,
                 (f32)entry->unk1A, entry->unk1C);
    g_gameState.unk3a8 = entry->unk28[0];
    g_gameState.unk3ac = (s8)entry->unk28[2];
    g_gameState.unk3b0 = (g_gameState.unk3ac * 3) / 5;
    g_gameState.unk3b4 = entry->unk28[3];
    g_gameState.unk3b8 = entry->unk28[4];
    g_gameState.unk3bc = entry->unk28[1];
    g_gameState.unk3c0 = entry->unk28[5];
    g_gameState.unk3c4 = entry->unk28[6];
    g_gameState.unk3c8 = entry->unk28[7];
    g_fixedCameraPosition.degrees = (f32)entry->unk1A + 180.0f;
    if (g_fixedCameraPosition.degrees > 360.0f) {
        g_fixedCameraPosition.degrees -= 360.0f;
    }
    g_mapTable.unk38 = 0;
    FUN_0025b754();
}

} /* extern "C" */
