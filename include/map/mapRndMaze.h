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
    /* 0x384 */ u8 unk384[0x650];
    /* 0x9D4 */ MoriModelContent *marker;  /* the entrance marker model (mapRndMazeCreateEntranceMarker) */
} MapRndMazeA;

typedef char MapRndMazeAOffsetCheck[offsetof(MapRndMazeA, marker) == 0x9D4 ? 1 : -1];

extern "C" {
u8 mapRndMazeTaskIsActive(void);
}

#endif
