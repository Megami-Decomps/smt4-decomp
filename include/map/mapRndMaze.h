/* map/mapRndMaze.c: the random maze (Apocalypse layout). */
#ifndef MAP_MAPRNDMAZE_H
#define MAP_MAPRNDMAZE_H

#include "common.h"

/* The maze's block; only the fields read so far are named. */
typedef struct MapRndMazeA {
    /* 0x000 */ u8 unk000[0x380];
    /* 0x380 */ u32 unk380;
} MapRndMazeA;

extern "C" {
u8 FUN_002ef9f0(void);
}

#endif
