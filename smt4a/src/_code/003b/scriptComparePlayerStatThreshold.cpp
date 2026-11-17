#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 gameGetPlayerStat(u8 statIndex);
void scrSetResult(s32 result);

// Reports whether the selected player stat meets the table entry's threshold.
u32 scriptComparePlayerStatThreshold(void)
{
    const s32 statIndex = scrGetArg(0);
    const s32 playerStat = gameGetPlayerStat(static_cast<u8>(statIndex));
    s32 threshold = 0;
    const u16 entryId = static_cast<u16>(scrGetArg(1));
    const NkmEnemyRecordA* entry = nkmEnemyFindById(entryId);

    if (entry != 0) {
        switch (static_cast<u8>(statIndex)) {
        case 0:
            threshold = entry->stats[0];
            break;
        case 1:
            threshold = entry->stats[1];
            break;
        case 2:
            threshold = entry->stats[2];
            break;
        case 3:
            threshold = entry->stats[3];
            break;
        case 4:
            threshold = entry->stats[4];
            break;
        }
    }

    scrSetResult(playerStat >= threshold);
    return 1;
}
}
