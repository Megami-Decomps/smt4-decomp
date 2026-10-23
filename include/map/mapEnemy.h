/* map/mapEnemy.c: enemies on the field map. */
#ifndef MAP_MAPENEMY_H
#define MAP_MAPENEMY_H

#include "common.h"
#include <stddef.h>

struct AsdMdlObject;

#define MAP_ENEMY_COUNT 0x20

/* One enemy slot (Shin Megami Tensei IV layout). */
typedef struct MapEnemyEntry {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x7C];
    /* 0x07D */ u8 unk7D;
    /* 0x07E */ u8 unk7E[6];
    /* 0x084 */ s32 state;
    /* 0x088 */ s32 unk88;
    /* 0x08C */ u8 unk8C[0xE8];
    /* 0x174 */ s32 unk174;
    union {
        /* 0x178 */ u8 unk178[8];
        struct {
            AsdMdlObject *model; // 0x178
            u8 registered; // 0x17c
            u8 owned; // 0x17d
            u8 unk17e[2];
        } render;
    };
} MapEnemyEntry;

struct MapEnemyExtraModel {
    AsdMdlObject *model; // 0x00
    u8 registered; // 0x04
    u8 active; // 0x05
    u8 unk06[2];
};

/* Encounter-trigger view of a field-enemy slot. */
struct MapEnemyEncounterView {
    u8 active; // 0x00
    u8 unk01[0x1f];
    f32 x, y, z; // 0x20
    f32 heading; // 0x2c
    s32 behavior; // 0x30
    u8 unk34[0x1c];
    u8 eventEnabled; // 0x50
    u8 unk51[3];
    s32 markerIndex; // 0x54
    u32 mapId; // 0x58
    s32 count; // 0x5c
    u32 value; // 0x60
    s32 scriptMode; // 0x64
    s32 message; // 0x68
    u32 messageArgument; // 0x6c
    u32 result; // 0x70
    u8 unk74[8];
    u8 hasMarker; // 0x7c
    u8 unk7d[7];
    s32 state; // 0x84
    s32 elapsed; // 0x88
    u8 unk8c[0xe8];
    s32 kind; // 0x174
    AsdMdlObject *model; // 0x178
    u8 registered; // 0x17c
    u8 owned; // 0x17d
    u8 unk17e[2];
};

typedef struct MapEnemy {
    union {
        /* 0x0000 */ u8 unk0000[0x34];
        struct {
            u32 task; // 0x00
            u32 state; // 0x04
            u32 elapsed; // 0x08
            u32 unk0C;
            u32 unk10;
        } controller;
    };
    /* 0x0034 */ MapEnemyEntry entries[MAP_ENEMY_COUNT];
    union {
        /* 0x3034 */ u8 unk3034[0x10];
        struct {
            u32 unk3034;
            u32 modelCount; // 0x3038
            u32 unk303C;
            u32 unk3040;
        } render;
    };
    /* 0x3044 */ s32 unk3044;
    /* 0x3048 */ u8 unk3048[4];
    /* 0x304c */ MapEnemyExtraModel extraModels[21];
} MapEnemy;
typedef char MapEnemyInitializationOffsetCheck[
    offsetof(MapEnemy, controller.unk0C) == 0x0C &&
    offsetof(MapEnemy, controller.unk10) == 0x10 &&
    offsetof(MapEnemy, render.unk303C) == 0x303C &&
    offsetof(MapEnemy, render.unk3040) == 0x3040 &&
    sizeof(MapEnemy) == 0x30F4 ? 1 : -1];

#endif
