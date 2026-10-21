#ifndef SHARD_W6_W6MATCH8_FUSION_SELECTION_H
#define SHARD_W6_W6MATCH8_FUSION_SELECTION_H

#include "common.h"

struct FusionLevelEntry {
    u16 id;
    u16 level;
};
struct FusionRaceSelection {
    u8 counts[65];
    u8 unk041[3];
    FusionLevelEntry *levels[65]; /* 0x044 */
    s8 hasDevil;                 /* 0x148 */
    u8 unk149;
    u16 devilId;
    u8 hasRace;
    u8 unk14d;
    u16 race;
    u8 unk150[0x2a];
    u8 includeSameRace;          /* 0x17a */
};

#endif
