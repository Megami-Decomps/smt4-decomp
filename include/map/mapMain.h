/* map/mapMain.c: the map mode. */
#ifndef MAP_MAPMAIN_H
#define MAP_MAPMAIN_H

#include "common.h"

/* The map mode's block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct MapMain {
    /* 0x00 */ u32 job;           /* job that runs the map mode */
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 freeOnEnd;      /* 0 = keep the block after the job ends */
    /* 0x0D */ u8 unk0D[0x1F];
    /* 0x2C */ u32 mapId;
    /* 0x30 */ u32 areaId;
    /* 0x34 */ u8 unk34[8];
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D[0x4f];
    /* 0x8C */ void *scriptData;
    /* 0x90 */ void *messageData;
    /* 0x94 */ void *scriptProcess;
    /* 0x98 */ s32 completionFlag;
    /* 0x9C */ u8 unk9C[0x28];
    /* 0xC4 */ s32 scriptState;
} MapMain;

/* A table the map keeps, indexed by entry (Shin Megami Tensei IV layout). */
typedef struct MapTableEntry {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 unk04;
} MapTableEntry;

typedef struct MapTable {
    /* 0x000 */ u8 unk000[0x780];
    /* 0x780 */ MapTableEntry entries[1];
} MapTable;

/* The map mode's block in Apocalypse (only the fields read so far are named). */
typedef struct MapMainA {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ u8 unk40;
    /* 0x41 */ u8 unk41[0x17];
    /* 0x58 */ u32 job;
    /* 0x5C */ u8 unk5C[0x60];
    /* 0xBC */ u8 unkBC;
} MapMainA;

typedef char MapMainASizeCheck[sizeof(MapMainA) == 0xC0 ? 1 : -1];
typedef char MapMainSizeCheck[sizeof(MapMain) == 0xC8 ? 1 : -1];

#endif
