/* The AOC system's main block as Apocalypse's code reaches it (g_aocMain); only the embedded object at 0xA8 is named. */
#ifndef SHARD_W4_MATCH3_AOCMAINA_H
#define SHARD_W4_MATCH3_AOCMAINA_H

#include "common.h"
#include <stddef.h>

typedef struct AocMainAObjC { /* 0x00 */ u8 unk[1]; } AocMainAObjC;

typedef struct AocMainA {
    union {
        /* 0x00 */ u8 unk00[0xA8];
        struct {
            /* 0x00 */ u8 unk00[0x80];
            /* 0x80 */ u32 result;
            /* 0x84 */ u8 unk84[4];
            /* 0x88 */ u8 operation[0x10];
        } query;
    };
    /* 0xA8 */ AocMainAObjC scriptHolder;
    /* 0x0A9 */ u8 unk0A9[0x6AB];
    /* 0x754 */ u32 flags;
    /* 0x758 */ u8 unk758[0x429];
    /* 0xB81 */ u8 unkB81;
} AocMainA;

extern "C" AocMainA *g_aocMain;

typedef char AocMainALayoutCheck[sizeof(AocMainA) == 0xB84 ? 1 : -1];

typedef char AocMainAOffsets[offsetof(AocMainA, scriptHolder) == 0xA8 && offsetof(AocMainA, flags) == 0x754 ? 1 : -1];
typedef char AocMainAQueryOffsets[
    offsetof(AocMainA, query.result) == 0x80 &&
    offsetof(AocMainA, query.operation) == 0x88 &&
    sizeof(AocMainA) == 0xB84 ? 1 : -1];

#endif
