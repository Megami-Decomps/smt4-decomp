/* NON_MATCHING: final regional-flag value is held in a saved register; retail shares argument-setup tails. */
#include "gamedata/MapUnlockRecord.h"
#include "shard/SaveWork.h"

extern "C" {
s32 dataTable2eSub2GetCount(void);
const MapUnlockRecord *dataTable2eSub2GetRecord(s32);
s32 gameFlagIsSet(s32);
void gameFlagSetValue(s32, s32, s32);
SaveWork *gameGetMapBlock(void);
void gameDataSetEntryEnabled(s32, u32, s32);

// Mark a map visited and update the regional progress flags associated with it.
void FUN_0021bc04(s32 map, u32 entry)
{
    for (s32 i = 0; i < dataTable2eSub2GetCount(); ++i) {
        const MapUnlockRecord *record = dataTable2eSub2GetRecord(i);
        if (record->map == -1)
            break;
        if (record->map == map) {
            if (record->flag != 0 && !gameFlagIsSet(record->flag))
                gameFlagSetValue(record->flag, 1, 1);
            break;
        }
    }
    s32 finalFlag;
    s32 finalValue = 0;
    switch (gameGetMapBlock()->unk03) {
    case 6:
    case 7:
        gameFlagSetValue(0x223, 1, 1);
        finalFlag = 0x224;
        break;
    case 8:
    case 9:
    case 10:
        gameFlagSetValue(0x224, 1, 1);
        finalFlag = 0x223;
        break;
    default:
        if ((u32)(map - 25) <= 5 || map == 102)
            gameFlagSetValue(0x223, 1, 1);
        else
            gameFlagSetValue(0x223, 0, 1);
        if ((u32)(map - 31) <= 4 || map == 103)
            gameFlagSetValue(0x224, 1, 1);
        else
            gameFlagSetValue(0x224, 0, 1);
        if (map == 21)
            gameFlagSetValue(0x295, 1, 1);
        else
            gameFlagSetValue(0x295, 0, 1);
        finalFlag = 0x465;
        finalValue = map == 22;
        break;
    }
    gameFlagSetValue(finalFlag, finalValue, 1);
    gameDataSetEntryEnabled(map, entry, 1);
}
}
