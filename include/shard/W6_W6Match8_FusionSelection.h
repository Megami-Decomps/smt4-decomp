#ifndef SHARD_W6_W6MATCH8_FUSION_SELECTION_H
#define SHARD_W6_W6MATCH8_FUSION_SELECTION_H

#include "common.h"
#include <stddef.h>

enum { FUSION_RACE_COUNT_A = 65 };

struct FusionLevelEntry {
    u16 id;
    u16 level;
};
struct FusionSelectionScratch {
    u8 bytes[17];
};

struct FusionRaceSelection {
    /* 0x000 */ u8 counts[FUSION_RACE_COUNT_A];
    /* 0x041 */ u8 unk041[3];
    /* 0x044 */ FusionLevelEntry *levels[FUSION_RACE_COUNT_A];
    /* 0x148 */ s8 hasDevil;
    /* 0x149 */ u8 unk149;
    /* 0x14A */ u16 devilId;
    /* 0x14C */ u8 hasRace;
    /* 0x14D */ u8 unk14d;
    /* 0x14E */ u16 race;
    /* 0x150 */ u8 mode;
    /* 0x151 */ u8 unk151[3];
    /* 0x154 */ u32 unk154;
    /* 0x158 */ u8 unk158;
    /* 0x159 */ u8 unk159;
    /* 0x15A */ FusionSelectionScratch scratch;
    /* 0x16B */ u8 unk16b;
    /* 0x16C */ u16 retainedFlags : 10;
    /* 0x16C */ u16 transientFlags : 6;
    /* 0x16E */ u8 unk16e;
    /* 0x16F */ u8 unk16f;
    /* 0x170 */ s16 firstSelection;
    /* 0x172 */ s16 secondSelection;
    /* 0x174 */ u8 unk174[6];
    /* 0x17A */ u8 includeSameRace;
    /* 0x17B */ u8 unk17b;
    /* 0x17C */ u8 unk17c[0x38];
    /* 0x1B4 */ u8 unk1b4;
};

typedef char FusionRaceSelectionLayout[
    offsetof(FusionRaceSelection, levels) == 0x44 &&
    offsetof(FusionRaceSelection, scratch) == 0x15A &&
    offsetof(FusionRaceSelection, unk16e) == 0x16E &&
    offsetof(FusionRaceSelection, firstSelection) == 0x170 &&
    offsetof(FusionRaceSelection, includeSameRace) == 0x17A &&
    offsetof(FusionRaceSelection, unk1b4) == 0x1B4 &&
    sizeof(FusionRaceSelection) == 0x1B8 ? 1 : -1];

#endif
