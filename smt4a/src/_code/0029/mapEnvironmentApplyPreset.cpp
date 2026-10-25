/* NON_MATCHING: only block layout and scheduling differ - retail lays the immediate (frames == 0) branch out of line after the tail and keeps the entry's third halfword and the float scale constants in different registers; every store and call is the same. */
#include "map/MapEnvironment.h"
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

/* g_gameState's environment block (0x610..0x64c). */
struct MapEnvironmentGameView {
    /* 0x000 */ u8 unk000[0x25c];
    /* 0x25c */ u8 darkZone;
    /* 0x25d */ u8 unk25d[0x3b3];
    /* 0x610 */ s32 presetIndex;
    /* 0x614 */ u8 unk614[4];
    /* 0x618 */ s32 unk618;
    /* 0x61c */ s32 unk61c;
    /* 0x620 */ s32 unk620;
    /* 0x624 */ s32 unk624;
    /* 0x628 */ s32 unk628;
    /* 0x62c */ s32 unk62c;
    /* 0x630 */ s32 unk630;
    /* 0x634 */ u32 unk634;
    /* 0x638 */ u32 unk638;
    /* 0x63c */ u32 unk63c;
    /* 0x640 */ u32 unk640;
    /* 0x644 */ u32 unk644;
    /* 0x648 */ u32 unk648;
};

struct MapHeading {
    u32 unk00;
    f32 degrees;
};
}

extern "C" {
extern MapEnvironmentState g_mapTable;
extern MapEnvironmentGameView g_gameState;
extern MapHeading g_localCameraPosition;
void asdTMTexTableReleaseNode(u32 table, u32 node);
u32 asdTMTexTableGetHeaderValue(u32 table, u32 node);
void FUN_00235bfc(u32 a, s32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i, f32 j);
void FUN_00297024(u32 enabled, u32 arg14, u32 arg15, u32 arg16, u32 arg17,
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
    g_gameState.presetIndex = g_mapTable.selectedIndex;
    const MapEnvironmentEntry *entry = &g_mapTable.entries[g_mapTable.selectedIndex];
    g_gameState.unk618 = entry->id;
    g_gameState.unk61c = entry->unk02;
    g_gameState.unk620 = entry->unk04;
    g_gameState.unk624 = entry->unk06;
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
        asdTMTexTableReleaseNode(45, g_mapTable.texture);
        g_mapTable.textureLoaded = 0;
    }
    g_mapTable.texture = id;
    if (id > 49) {
        g_mapTable.texture = 0;
    }
    FUN_0014afd0(45, g_mapTable.texture);
    g_mapTable.textureLoaded = asdTMTexTableGetHeaderValue(45, g_mapTable.texture);
    g_mapTable.unk0c = entry->unk02;
    g_mapTable.unk10 = 0.0f;
    g_mapTable.unk14 = 0;
    g_mapTable.unk3c = entry->unk06;
    g_mapTable.unk28 = entry->unk04;
    FUN_00235bfc(entry->unk08, entry->unk0E, entry->unk09, entry->unk0A, (f32)entry->unk09,
                 (f32)entry->unk0A, (f32)entry->unk0B, (f32)entry->unk0C * 100.0f,
                 (f32)entry->unk0E * 100.0f, entry->unk10);
    FUN_00297024(0, entry->unk14, entry->unk15, entry->unk16, entry->unk17,
                 entry->unk18, entry->unk19, entry->unk20, entry->unk21,
                 entry->unk22, entry->unk23, entry->unk24, entry->unk26,
                 (f32)entry->unk1A, entry->unk1C);
    g_gameState.unk628 = entry->unk28[0];
    g_gameState.unk62c = (s8)entry->unk28[2];
    g_gameState.unk630 = (g_gameState.unk62c * 3) / 5;
    g_gameState.unk634 = entry->unk28[3];
    g_gameState.unk638 = entry->unk28[4];
    g_gameState.unk63c = entry->unk28[1];
    g_gameState.unk640 = entry->unk28[5];
    g_gameState.unk644 = entry->unk28[6];
    g_gameState.unk648 = entry->unk28[7];
    g_localCameraPosition.degrees = (f32)entry->unk1A + 180.0f;
    if (g_localCameraPosition.degrees > 360.0f) {
        g_localCameraPosition.degrees -= 360.0f;
    }
    g_mapTable.unk38 = 0;
    FUN_0033f42c();
}

} /* extern "C" */
