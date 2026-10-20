/* map/mapEnemy.c: enemies on the field map. */
#ifndef MAP_MAPENEMY_H
#define MAP_MAPENEMY_H

#include "common.h"

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
    /* 0x178 */ u8 unk178[8];
} MapEnemyEntry;

typedef struct MapEnemy {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ MapEnemyEntry entries[MAP_ENEMY_COUNT];
    /* 0x3034 */ u8 unk3034[0x10];
    /* 0x3044 */ s32 unk3044;
} MapEnemy;

#endif
