/* NON_MATCHING: arrangement entry indexing uses different registers and loaded-file handling is outlined differently. */
#include "runtime/Stdio.h"
#include "battle/BattleAssetWork.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/NkmEnemyRecord.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
extern const char DAT_00400918[];
s32 btlFindNthActiveSpecialEntry(BtlMainState *battle, s32 kind);
u32 entryCollectNewIdentifiers(BattleArrangementWork *work, BtlMainState *battle);
u32 FUN_002408ac(BattleArrangementWork *work, BtlMainState *battle);

u32 FUN_00334140(BattleArrangementWork *work, BtlMainState *battle)
{
    s32 index = btlFindNthActiveSpecialEntry(battle, 1);
    if (index >= 0) {
        battle->battleMask |= 0x4000000;
        const NkmEnemyRecord *record = nkmEnemyFindById(battle->entries[index].data.id);
        char path[128];
        memClear(path, sizeof(path));
        __2sprintf(path, DAT_00400918,
                         record->arrangementFirst, record->arrangementSecond);
        asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&battle->arrangement.file), 0);
        work->phase = 3;
        if (battle->arrangement.file) {
            work->phase = 4;
            return entryCollectNewIdentifiers(work, battle);
        }
        return 0;
    } else {
        work->phase = 7;
        return FUN_002408ac(work, battle);
    }
}
}
