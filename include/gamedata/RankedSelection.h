#ifndef GAMEDATA_RANKEDSELECTION_H
#define GAMEDATA_RANKEDSELECTION_H

#include "common.h"

struct SelectionScore {
    /* 0x00 */ s32 score;
    /* 0x04 */ u8 unk04[0xC];
};
struct SelectionScoreWork {
    /* 0x000 */ u8 unk000[0x9E4];
    /* 0x9E4 */ SelectionScore scores[109];
};
struct SelectionResult {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 count;
};
struct RankedSelection {
    /* 0x00 */ s32 index;
    /* 0x04 */ s32 score;
};

#endif
