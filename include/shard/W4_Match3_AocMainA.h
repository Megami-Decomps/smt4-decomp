/* The AOC system's main block as Apocalypse's code reaches it (g_aocMain); only the embedded object at 0xA8 is named. */
#ifndef SHARD_W4_MATCH3_AOCMAINA_H
#define SHARD_W4_MATCH3_AOCMAINA_H

#include "common.h"

typedef struct AocMainAObjC { u8 unk[1]; } AocMainAObjC;

typedef struct AocMainA {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ AocMainAObjC objC;
    /* 0x0A9 */ u8 unk0a9[0xad8];
    /* 0xB81 */ u8 unkB81;
} AocMainA;

extern "C" AocMainA *g_aocMain;

#endif
