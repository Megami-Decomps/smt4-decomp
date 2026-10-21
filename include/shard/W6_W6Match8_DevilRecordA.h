#ifndef SHARD_W6_W6MATCH8_DEVIL_RECORD_A_H
#define SHARD_W6_W6MATCH8_DEVIL_RECORD_A_H

#include "common.h"

struct DevilRecordA {
    u16 id;
    u8 race;
    u8 unk03[3];
    u16 level;
    u8 unk08[2];
    u16 flags; /* 0x0a */
    u8 unk0c[0x28];
    u32 fusionRestrictions; /* 0x34 */
    u8 unk38[4];
    u16 saveRequirement;    /* 0x3c */
    u16 unlockFlag;         /* 0x3e */
};

extern "C" DevilRecordA *FUN_00184310(u32 id);

#endif
