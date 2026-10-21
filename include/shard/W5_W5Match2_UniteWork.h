#ifndef SHARD_W5_W5MATCH2_UNITEWORK_H
#define SHARD_W5_W5MATCH2_UNITEWORK_H

#include "common.h"

struct UnitePairEntry {
    u32 packedIds;
    u32 unk04;
};

struct UniteWork {
    union {
        /* 0x0000 */ u8 unk0000[0x400];
        /* 0x0000 */ void *context;
    };
    /* 0x0400 */ s32 state;
    /* 0x0404 */ union {
        u8 unk0404[0x30];
        struct {
            u8 unk0404[0x1c];
            s8 mode; /* 0x420 */
            u8 unk0421[0x13];
        } menu;
    };
    /* 0x0434 */ u32 request;
    /* 0x0438 */ union {
        u8 unk0438[0x9018];
        struct {
            u8 unk0438[0xf80];
            UnitePairEntry pairs[1]; /* 0x13b8 */
            u8 unk13c0[0x8090];
        } pairList;
        struct {
            u8 unk0438[0x5e68];
            union {
                u8 ids[0x3f8]; /* 0x62a0, raw buffer view */
                u16 devilIds[508]; /* 0x62a0 */
            };
            u32 count;    /* 0x6698 */
            u8 unk669c[0x2db4];
        } candidates;
        struct {
            u8 unk0438[0x19c];
            u16 demons[1201]; /* 0x5d4 */
            u16 races[65]; /* 0xf36 */
            u16 skills[501]; /* 0xfb8 */
            u16 unk13a2;
            u32 demonCount; /* 0x13a4 */
            u32 raceCount; /* 0x13a8 */
            u32 skillCount; /* 0x13ac */
        } catalogA;
    };
    /* 0x9450 */ u8 blocked;
};

#endif
