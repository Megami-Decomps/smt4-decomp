/* map/mapRndMaze.c: the random maze (Apocalypse layout). */
#ifndef MAP_MAPRNDMAZE_H
#define MAP_MAPRNDMAZE_H

#include "common.h"
#include <stddef.h>

struct MoriModelContent;

/* The maze's block; only the fields read so far are named. */
typedef struct MapRndMazeA {
    /* 0x000 */ u8 unk000[0x380];
    /* 0x380 */ u32 unk380;
    /* 0x384 */ u8 unk384[0x10];
    /* 0x394 */ u8 hidden;                 /* the models were hidden while a departure loaded the map */
    /* 0x395 */ u8 unk395[7];
    /* 0x39C */ s32 modelCounts[6];        /* models loaded per set */
    /* 0x3B4 */ u8 unk3B4[0x18];
    /* 0x3CC */ MoriModelContent *models[6][64]; /* sets 0-4: the maze pieces; set 5: two marker models, then the special cells' */
    /* 0x9CC */ MoriModelContent *unk9CC;
    /* 0x9D0 */ MoriModelContent *unk9D0;
    /* 0x9D4 */ MoriModelContent *marker;  /* the entrance marker model (mapRndMazeCreateEntranceMarker) */
    /* 0x9D8 */ MoriModelContent *unk9D8;
} MapRndMazeA;

typedef char MapRndMazeAOffsetCheck[offsetof(MapRndMazeA, marker) == 0x9D4 &&
    offsetof(MapRndMazeA, hidden) == 0x394 && offsetof(MapRndMazeA, modelCounts) == 0x39C &&
    offsetof(MapRndMazeA, models) == 0x3CC ? 1 : -1];

extern "C" {
u8 mapRndMazeTaskIsActive(void);
}

#endif
