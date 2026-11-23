#include "common.h"

/* A unit record: five base stats at 4 and the growth rank at 0x12B. */
struct GrowthRecord {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u16 stats[5];
    /* 0x00E */ u8 unk00E[0x11D];
    /* 0x12B */ u8 growthRank;
};

extern "C" {

void unitRecomputeDerivedStats(GrowthRecord *record);

/* Sets the growth rank (1-3; other values give 0) and raises the five base stats by it, then recalculates.
 * The script caller passes a word; the rank is switched on at the width of the byte it is stored into (reading the stored field back
 * gives the same values but not retail's code, 22 lines). The IV twin FUN_003bc8f8 is written the same way. */
void unitSetGrowthRankAndRaiseStats(GrowthRecord *record, u32 rank)
{
    u32 bonus = 0;

    record->growthRank = rank;
    switch ((u8)rank) {
    case 1:
        bonus = 1;
        break;
    case 2:
        bonus = 2;
        break;
    case 3:
        bonus = 3;
        break;
    }
    record->stats[0] += bonus;
    record->stats[1] += bonus;
    record->stats[2] += bonus;
    record->stats[3] += bonus;
    record->stats[4] += bonus;
    unitRecomputeDerivedStats(record);
}

} /* extern "C" */
