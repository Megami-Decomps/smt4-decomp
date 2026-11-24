/* map/mapRndMaze.c: the random maze (Apocalypse layout). */
#ifndef MAP_MAPRNDMAZE_H
#define MAP_MAPRNDMAZE_H

#include "common.h"
#include <stddef.h>

struct MoriModelContent;

enum { MAZE_MODEL_SET_COUNT = 6, MAZE_MODEL_SET_CAPACITY = 64 };

/* The maze's block; only the fields read so far are named. */
typedef struct MapRndMazeA {
    /* 0x000 */ u8 unk000[0x380];
    /* 0x380 */ u32 unk380;
    /* 0x384 */ u8 unk384[0x10];
    /* 0x394 */ u8 hidden;                 /* the models were hidden while a departure loaded the map */
    /* 0x395 */ u8 unk395[7];
    /* 0x39C */ s32 modelCounts[MAZE_MODEL_SET_COUNT]; /* models loaded per set */
    /* 0x3B4 */ MoriModelContent *roots[MAZE_MODEL_SET_COUNT]; /* root model of each set */
    /* 0x3CC */ MoriModelContent *models[MAZE_MODEL_SET_COUNT][MAZE_MODEL_SET_CAPACITY]; /* pieces, then marker and special-cell models */
    /* 0x9CC */ MoriModelContent *scriptedSecondMarker;
    /* 0x9D0 */ MoriModelContent *scriptedFirstMarkerA;
    /* 0x9D4 */ MoriModelContent *marker;  /* the entrance marker model (mapRndMazeCreateEntranceMarker) */
    /* 0x9D8 */ MoriModelContent *scriptedFirstMarkerB;
} MapRndMazeA;

typedef char MapRndMazeAOffsetCheck[
    offsetof(MapRndMazeA, hidden) == 0x394 && offsetof(MapRndMazeA, modelCounts) == 0x39C &&
    offsetof(MapRndMazeA, roots) == 0x3B4 && offsetof(MapRndMazeA, models) == 0x3CC &&
    offsetof(MapRndMazeA, scriptedSecondMarker) == 0x9CC && offsetof(MapRndMazeA, scriptedFirstMarkerA) == 0x9D0 &&
    offsetof(MapRndMazeA, marker) == 0x9D4 && offsetof(MapRndMazeA, scriptedFirstMarkerB) == 0x9D8 ? 1 : -1];

extern "C" {
extern MapRndMazeA g_mapRndMaze;
u8 mapRndMazeTaskIsActive(void);
} /* extern "C" */

#endif
