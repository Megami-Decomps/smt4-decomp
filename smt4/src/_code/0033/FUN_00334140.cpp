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

/* Step 3 (also inlined in the dispatcher, battleEncounterTaskUpdate): waits for the arrangement file, then collects its
 * entries. */
static __inline u32 encounterWaitArrangementFile(BattleArrangementWork *work, BtlMainState *battle)
{
    if (battle->arrangement.file == NULL)
        return 0;
    work->phase = 4;
    return entryCollectNewIdentifiers(work, battle);
}

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
        return encounterWaitArrangementFile(work, battle);
    } else {
        work->phase = 7;
        return FUN_002408ac(work, battle);
    }
}
}
