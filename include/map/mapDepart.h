/* map/mapDepart.c: leaving a map. */
#ifndef MAP_MAPDEPART_H
#define MAP_MAPDEPART_H

#include "common.h"

/* The departure block, kept by a module global. */
typedef struct MapDepart {
    /* 0x00 */ u32 job;          /* job that runs the departure */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
} MapDepart;

/* Resources kept while departing (Shin Megami Tensei IV), one block behind a module global. */
typedef struct MapDepartWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 handleA;
    /* 0x10 */ u32 handleB;
    /* 0x14 */ s16 state;
    /* 0x16 */ u8 unk16[10];
    /* 0x20 */ void *dataA;      /* heap block */
    /* 0x24 */ u32 sizeA;
    /* 0x28 */ void *dataB;      /* heap block */
    /* 0x2C */ u32 sizeB;
} MapDepartWork;

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct MapDepartObject {
    /* 0x00 */ void (**vtable)(struct MapDepartObject *self);
} MapDepartObject;

/* Resources kept while departing (Apocalypse). */
typedef struct MapDepartWorkA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ MapDepartObject *objectA;   /* destroyed through their vtables */
    /* 0x10 */ MapDepartObject *objectB;
    /* 0x14 */ MapDepartObject *objectC;
    /* 0x18 */ s16 state;
} MapDepartWorkA;

/* Another block the departure keeps (Apocalypse). */
typedef struct MapDepartExtraA {
    /* 0x000 */ u8 unk000[0xF42];
    /* 0xF42 */ u16 unkF42;
    /* 0xF44 */ u16 unkF44;
} MapDepartExtraA;

/* Another block the departure keeps (Shin Megami Tensei IV). */
typedef struct MapDepartExtra {
    /* 0x000 */ u8 unk000[0xE3E];
    /* 0xE3E */ u16 unkE3E;
    /* 0xE40 */ u16 unkE40;
} MapDepartExtra;

/* The global game state block (Shin Megami Tensei IV). Only the fields read so far are named. */
typedef struct GameState {
    /* 0x000 */ s32 unk000;
    /* 0x004 */ u8 unk004[0x14];
    /* 0x018 */ s8 unk18;
    /* 0x019 */ u8 unk019[0x0D];
    /* 0x026 */ s8 unk26;
    /* 0x027 */ u8 unk027[0x2D];
    /* 0x054 */ u32 unk54;
    /* 0x058 */ u8 unk058[0x2A0];
    /* 0x2F8 */ s8 unk2F8;
    /* 0x2F9 */ u8 unk2F9[3];
    /* 0x2FC */ s32 unk2FC;
} GameState;

/* The global game state block (Apocalypse). Only the fields read so far are named. */
typedef struct GameStateA {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ s8 unk18;
    /* 0x019 */ u8 unk019[0x0E];
    /* 0x027 */ s8 unk27;
    /* 0x028 */ u8 unk028[0x34];
    /* 0x05C */ u32 unk5C;
    /* 0x060 */ u8 unk060[0x269];
    /* 0x2C9 */ u8 unk2C9;
    /* 0x2CA */ u8 unk2CA[0x3E];
    /* 0x308 */ u32 unk308;
    /* 0x30C */ u8 unk30C[0x148];
    /* 0x454 */ s32 unk454;
    /* 0x458 */ u8 unk458[0x2C];
    /* 0x484 */ u32 unk484;
    /* 0x488 */ u8 unk488[0x84];
    /* 0x50C */ u32 unk50C;
    /* 0x510 */ u8 unk510[0x64];
    /* 0x574 */ s8 unk574;
    /* 0x575 */ u8 unk575[3];
    /* 0x578 */ s32 unk578;
} GameStateA;

#endif
