/* gamedata/GameData.c: the records inside both games' map blocks (MapSaveBlock in gamedata/MapSaveBlock.h,
 * MapSaveBlockA in gamedata/MapSaveBlockA.h). */
#ifndef GAMEDATA_MAPSAVERECORDS_H
#define GAMEDATA_MAPSAVERECORDS_H

#include "common.h"
#include <stddef.h>

/* The last save point (0x12 bytes). */
typedef struct MapSavePoint {
    /* 0x00 */ s16 tableType;
    /* 0x02 */ s16 tableId;        /* the save point's record (special records: mapDepart) */
    /* 0x04 */ s16 scale;
    /* 0x06 */ s16 mapId;
    /* 0x08 */ s16 areaId;
    /* 0x0A */ s16 x;
    /* 0x0C */ s16 y;
    /* 0x0E */ s16 z;
    /* 0x10 */ s16 heading;
} MapSavePoint;

/* One of the 16 location markers (timed map events) of the map block (0x14 bytes). */
typedef struct MapMarkerSlot {
    /* 0x00 */ u8 flags;           /* bit 0: used, bit 1: shows a content entry, bit 2: pending, bit 3: expired, bit 4: marked */
    /* 0x01 */ s8 first;
    /* 0x02 */ s8 second;
    /* 0x03 */ u8 stage;
    /* 0x04 */ s16 contentIndex;
    /* 0x06 */ s16 objectId;       /* the map object the marker belongs to */
    /* 0x08 */ s16 timer;          /* content minutes * 0x708 frames */
    /* 0x0A */ s8 x;
    /* 0x0B */ s8 y;
    /* 0x0C */ s16 values[4];
} MapMarkerSlot;

typedef char MapMarkerSlotLayoutCheck[offsetof(MapMarkerSlot, objectId) == 6 && offsetof(MapMarkerSlot, timer) == 8 &&
    offsetof(MapMarkerSlot, x) == 0xA && offsetof(MapMarkerSlot, values) == 0xC && sizeof(MapMarkerSlot) == 0x14 ? 1 : -1];

/* The dungeon (random maze) state: the entry and exit cells, the maze size and start cell, and the cell the map
 * shows (12 bytes; units keep a pointer to it). */
typedef struct MapMazeState {
    /* 0x0 */ s8 spawnX;          /* the cell the player enters at */
    /* 0x1 */ s8 spawnZ;
    /* 0x2 */ s8 secondX;
    /* 0x3 */ s8 secondZ;
    /* 0x4 */ s8 width;
    /* 0x5 */ s8 height;
    /* 0x6 */ u8 startX;
    /* 0x7 */ u8 startY;
    /* 0x8 */ u8 specialCount;
    /* 0x9 */ u8 ready;
    /* 0xA */ s8 displayX;
    /* 0xB */ s8 displayY;
} MapMazeState;

typedef char MapMazeStateLayoutCheck[offsetof(MapMazeState, width) == 4 && offsetof(MapMazeState, ready) == 9 &&
    sizeof(MapMazeState) == 0xC ? 1 : -1];

#endif
