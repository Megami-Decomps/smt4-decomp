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
    union {
        u8 unk0c[0x28];
        struct {
            u8 prefix[0xC];
            /* 0x18 */ u16 stats[8];
        } initialization;
    };
    u32 fusionRestrictions; /* 0x34 */
    union {
        u8 unk38[4];
        s8 voiceCategory; /* 0x38: selects the demon message archive */
    };
    u16 saveRequirement;    /* 0x3c */
    u16 unlockFlag;         /* 0x3e */
};

typedef char DevilRecordACategoryOffsetCheck[offsetof(DevilRecordA, categoryView.category) == 0x09 && offsetof(DevilRecordA, flags) == 0x0a ? 1 : -1];
typedef char DevilRecordAVoiceCategoryOffsetCheck[
    offsetof(DevilRecordA, voiceCategory) == 0x38 &&
    sizeof(DevilRecordA) == 0x40 ? 1 : -1];
typedef char DevilRecordAInitializationOffsetCheck[
    offsetof(DevilRecordA, initialization.stats) == 0x18 &&
    sizeof(DevilRecordA) == 0x40 ? 1 : -1];

extern "C" DevilRecordA *FUN_00184310(u32 id);

#endif
