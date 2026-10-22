#ifndef SHARD_W6_W6MATCH8_DEVIL_RECORD_A_H
#define SHARD_W6_W6MATCH8_DEVIL_RECORD_A_H

#include "common.h"
#include <stddef.h>

struct DevilRecordA {
    u16 id;
    u8 race;
    u8 unk03[3];
    u16 level;
    union {
        u8 unk08[2];
        struct {
            u8 unk08;
            u8 category; /* 0x09: 4 for the demons script checks look for */
        } categoryView;
    };
    u16 flags; /* 0x0a */
    u8 unk0c[0x28];
    u32 fusionRestrictions; /* 0x34 */
    u8 unk38[4];
    u16 saveRequirement;    /* 0x3c */
    u16 unlockFlag;         /* 0x3e */
};

typedef char DevilRecordACategoryOffsetCheck[offsetof(DevilRecordA, categoryView.category) == 0x09 && offsetof(DevilRecordA, flags) == 0x0a ? 1 : -1];

extern "C" DevilRecordA *FUN_00184310(u32 id);

#endif
