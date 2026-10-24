/* map/mapIf.cpp: the model spawn blocks the map interface keeps (cave, manhole and down actions). */
#ifndef MAP_MAPIFSPAWN_H
#define MAP_MAPIFSPAWN_H

#include "common.h"
#include "Model/MoriModelContent.h"

/* One spawn request block (0x20 bytes). */
struct MapIfSpawnBlock {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ f32 position[4];
    /* 0x1C */ MoriModelContent *content;
};

/* The map interface, as far as the spawn blocks go: three blocks starting at 0xcbfc. */
struct MapIfSpawns {
    /* 0x0000 */ u8 unk0000[0xcbfc];
    /* 0xcbfc */ MapIfSpawnBlock manhole;
    /* 0xcc1c */ MapIfSpawnBlock cave;
    /* 0xcc3c */ MapIfSpawnBlock down;
};

#endif
