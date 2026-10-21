/* NON_MATCHING: retail uses ldr r1, [pc, #176] where the compiled block uses mov r2, #1. */
#include "common.h"

struct MapEntry {
    u8 active;                 // 0x00
    u8 reserved01[0x07];
    s32 state;                 // 0x08
    u8 reserved0c[0x38];
    s32 timer;                 // 0x44
    u8 reserved48[0x14C];
};

struct MapInterface {
    u8 reserved00[0x1DC];
    MapEntry entries[128]; // 0x1DC, stride 0x194
};

struct LocalMapScene {
    u8 reserved00[0x28];
    f32 firstX;                // 0x28
    f32 firstY;                // 0x2C
    f32 firstZ;                // 0x30
    f32 secondX;               // 0x34
    f32 secondY;               // 0x38
    f32 secondZ;               // 0x3C
    u8 reserved40[0x0C];
    f32 scalar;                // 0x4C
};

extern "C" {
extern MapInterface* g_mapIf;
extern LocalMapScene* g_lmapScene;

void FUN_0029aa60(s32 mode);
void FUN_00311b74(f32 firstX, f32 firstY, f32 firstZ, f32 scalar,
                  f32 secondX, f32 secondY, f32 secondZ);

void FUN_00245d78(s32 updateScene)
{
    MapInterface* map = g_mapIf;

    for (s32 index = 0; index < 128; ++index) {
        MapEntry& entry = map->entries[index];
        if (entry.active != 0) {
            entry.state = 1;
        }
    }

    for (s32 pass = 0; pass < 3; ++pass) {
        FUN_0029aa60(1);
        if (updateScene != 0) {
            LocalMapScene* scene = g_lmapScene;
            FUN_00311b74(scene->firstX, scene->firstY, scene->firstZ,
                         scene->scalar,
                         scene->secondX, scene->secondY, scene->secondZ);
        }
    }

    for (s32 index = 0; index < 128; ++index) {
        MapEntry& entry = map->entries[index];
        if (entry.active != 0 && entry.timer > 0) {
            entry.timer = 16;
        }
    }
}
}
