/* NON_MATCHING: only the temporaries used for the five stat updates differ (retail ip/lr/r2/r3/r4, ours r2/r3/lr/ip/r4). */
#include "common.h"

/* A unit record: five base stats at 4 and the growth rank at 0x12B. */
struct GrowthRecord {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u16 stats[5];
    /* 0x00E */ u8 unk00E[0x11D];
    /* 0x12B */ u8 growthRank;
};

extern "C" {

void FUN_004bcd90(GrowthRecord *record);

/* Sets the growth rank (1-3; other values give 0) and raises the five base stats by it, then recalculates. */
void FUN_004bcd1c(GrowthRecord *record, s32 rankArg)
{
    u32 bonus = 0;
    u8 rank = rankArg;

    record->growthRank = rank;
    if (rank == 1) {
        bonus = 1;
    } else if (rank == 2) {
        bonus = 2;
    } else if (rank == 3) {
        bonus = 3;
    }
    record->stats[0] += bonus;
    record->stats[1] += bonus;
    record->stats[2] += bonus;
    record->stats[3] += bonus;
    record->stats[4] += bonus;
    FUN_004bcd90(record);
}

} /* extern "C" */
