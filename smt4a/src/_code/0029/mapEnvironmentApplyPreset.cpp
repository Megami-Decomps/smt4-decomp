/* NON_MATCHING: scheduling only - retail loads entry->unk06 for the record store before the fade branch, reuses one g_gameState base for the environment stores, and converts the fog arguments in another register order; every store and call is the same. */
#include "map/MapEnvironment.h"
#include "game/GameStateA.h"
#include "event/bustupEvent/BustupTex.h"

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

struct MapHeading {
    u32 unk00;
    f32 degrees;
};
}

extern "C" {
extern MapEnvironmentState g_mapTable;
extern MapHeading g_localCameraPosition;
void asdTMTexTableReleaseNode(u32 table, u32 node);
u32 asdTMTexTableGetHeaderValue(u32 table, u32 node);
void mapApplySceneFog(u32 a, s32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i, f32 j);
void mapEnvironmentSetLight(u32 enabled, u32 arg14, u32 arg15, u32 arg16, u32 arg17,
                  u32 arg18, u32 arg19, u32 arg20, u32 arg21, u32 arg22,
                  u32 arg23, s32 arg24, s32 arg26, f32 arg1A, f32 arg1C);
void FUN_0033f42c(void);

/* Switches the map environment (sky texture, light and fog parameters, heading) to preset `preset`,
   fading from the previous one over `transition` frames (1 means the default 15; 0 is immediate). */
void mapEnvironmentApplyPreset(u32 preset, s32 transition)
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
    g_gameState.environmentPreset = g_mapTable.selectedIndex;
    const MapEnvironmentEntry *entry = &g_mapTable.entries[g_mapTable.selectedIndex];
    g_gameState.environmentId = entry->id;
    g_gameState.unk61C = entry->unk02;
    g_gameState.unk620 = entry->unk04;
    g_gameState.unk624 = entry->unk06;
    s32 id = entry->id;
    if (frames == 0) {
        g_mapTable.fade = 1.0f;
        g_mapTable.previous = id;
    } else {
        g_mapTable.fade = 0.0f;
        g_mapTable.previous = g_mapTable.current;
        g_mapTable.fadeSpeed = (f32)frames;
    }
    g_mapTable.current = id;
    g_mapTable.records[id].unk000 = entry->unk06;
    if (g_mapTable.textureLoaded != 0) {
        asdTMTexTableReleaseNode(45, g_mapTable.texture);
        g_mapTable.textureLoaded = 0;
    }
    g_mapTable.texture = id;
    if (id > 49) {
        g_mapTable.texture = 0;
    }
    asdTMTexTablePrepareNodeImage(45, g_mapTable.texture);
    g_mapTable.textureLoaded = asdTMTexTableGetHeaderValue(45, g_mapTable.texture);
    g_mapTable.unk0c = entry->unk02;
    g_mapTable.unk10 = 0.0f;
    g_mapTable.unk14 = 0;
    g_mapTable.unk3c = entry->unk06;
    g_mapTable.unk28 = entry->unk04;
    mapApplySceneFog(entry->unk08, entry->unk0E, entry->unk09, entry->unk0A, (f32)entry->unk09,
                 (f32)entry->unk0A, (f32)entry->unk0B, (f32)entry->unk0C * 100.0f,
                 (f32)entry->unk0E * 100.0f, entry->unk10);
    mapEnvironmentSetLight(0, entry->unk14, entry->unk15, entry->unk16, entry->unk17,
                 entry->unk18, entry->unk19, entry->unk20, entry->unk21,
                 entry->unk22, entry->unk23, entry->unk24, entry->unk26,
                 (f32)entry->unk1A, entry->unk1C);
    g_gameState.overlayKind = entry->unk28[0];
    g_gameState.overlayX = (s8)entry->unk28[2];
    g_gameState.overlayY = (g_gameState.overlayX * 3) / 5;
    g_gameState.overlayTexture = entry->unk28[3];
    g_gameState.overlayAlpha = entry->unk28[4];
    g_gameState.overlayAdditive = entry->unk28[1];
    g_gameState.overlayRed = entry->unk28[5];
    g_gameState.overlayGreen = entry->unk28[6];
    g_gameState.overlayBlue = entry->unk28[7];
    g_localCameraPosition.degrees = (f32)entry->unk1A + 180.0f;
    if (g_localCameraPosition.degrees > 360.0f) {
        g_localCameraPosition.degrees -= 360.0f;
    }
    g_mapTable.unk38 = 0;
    FUN_0033f42c();
}

} /* extern "C" */
