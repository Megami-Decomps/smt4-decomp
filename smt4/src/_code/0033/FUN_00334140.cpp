/* NON_MATCHING: arrangement entry indexing uses different registers and loaded-file handling is outlined differently. */
#include "battle/BattleAssetWork.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/Table00.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern const char DAT_00400918[];
s32 btlFindNthActiveSpecialEntry(BtlMainState *battle, s32 kind);
const Table00Record *dataTable00FindById(u32 id);
s32 textFormatBuffer(char *output, const char *format, ...);
u32 entryCollectNewIdentifiers(BattleArrangementWork *work, BtlMainState *battle);
u32 FUN_002408ac(BattleArrangementWork *work, BtlMainState *battle);

u32 FUN_00334140(BattleArrangementWork *work, BtlMainState *battle)
{
    s32 index = btlFindNthActiveSpecialEntry(battle, 1);
    if (index >= 0) {
        battle->battleFlags |= 0x4000000;
        const Table00Record *record = dataTable00FindById(battle->entries[index].id);
        char path[128];
        memClear(path, sizeof(path));
        textFormatBuffer(path, DAT_00400918,
                         record->arrangement.first, record->arrangement.second);
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
