#include "gamedata/PlayerInitialization.h"

namespace {
struct StatAllocationRecord {
    u8 unk000[0x6A];
    s16 stats[5];
    u8 unk074[0x5AC];
};
struct StatAllocationWork {
    u8 unk0000[0x3600];
    StatAllocationRecord records[25];
    u8 unkCF20[0x58];
    s32 selected;
    u8 unkCF7C[0x50];
    s32 remainingPoints;
};
typedef char StatAllocationWorkOffsetsCheck[sizeof(StatAllocationRecord) == 0x620 &&
    offsetof(StatAllocationWork, selected) == 0xCF78 &&
    offsetof(StatAllocationWork, remainingPoints) == 0xCFCC ? 1 : -1];
}

extern "C" PlayerInitialRecordIV *gameGetPlayerData(void);

// Restore all five player statistics from the selected snapshot and refund their allocated points.
extern "C" void statusRefundPlayerStatAllocation(StatAllocationWork *work)
{
    s32 refunded = gameGetPlayerData()->baseStats.stats[0] - work->records[work->selected].stats[0];
    gameGetPlayerData()->baseStats.stats[0] = work->records[work->selected].stats[0];
    refunded += gameGetPlayerData()->baseStats.stats[1] - work->records[work->selected].stats[1];
    gameGetPlayerData()->baseStats.stats[1] = work->records[work->selected].stats[1];
    refunded += gameGetPlayerData()->baseStats.stats[2] - work->records[work->selected].stats[2];
    gameGetPlayerData()->baseStats.stats[2] = work->records[work->selected].stats[2];
    refunded += gameGetPlayerData()->baseStats.stats[3] - work->records[work->selected].stats[3];
    gameGetPlayerData()->baseStats.stats[3] = work->records[work->selected].stats[3];
    refunded += gameGetPlayerData()->baseStats.stats[4] - work->records[work->selected].stats[4];
    gameGetPlayerData()->baseStats.stats[4] = work->records[work->selected].stats[4];
    work->remainingPoints += refunded;
}
