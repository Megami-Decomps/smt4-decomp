/* Current map selection and its optional effect parameters. */
#ifndef MAP_MAPSELECTION_H
#define MAP_MAPSELECTION_H
#include "common.h"
typedef struct MapSelection {
    /* 0x00 */ s32 id;
    /* 0x04 */ u32 kind;
    /* 0x08 */ u32 counter;
    /* 0x0C */ u32 flags;
    /* 0x10 */ f32 values[5];
} MapSelection;
extern "C" MapSelection g_mapSelection;

/* Retail 32-bit layout invariants. */
typedef char MapSelectionSizeCheck[sizeof(MapSelection) == 0x24 ? 1 : -1];

#endif
