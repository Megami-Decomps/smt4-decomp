/* NON_MATCHING: the source, target ID and target record are kept in different callee-saved registers. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GamePlayerData.h"

struct Table01Record;
extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
u32 partyHasStoredDemon(u32 id);
Table01Record *dataTable01FindByIdWithAoc(u16 id);
s32 randBetween(s32 low, s32 high);
s32 randNextInRange(u32 maximum);
void asdMemFree(void *memory);

u32 btlTalkCommand_SelectTalkTarget()
{
    NkmEnemyRecord *source = nkmEnemyFindById((u16)scrGetArg(0));
    u16 target = source->talkTargetId;
    NkmEnemyRecord *record = nkmEnemyFindById(target);
    nkmBaseGetRecord(target);
    if (target && record && (record->flags & 0x400) &&
        gameGetPlayerData()->level >= record->level && !partyHasStoredDemon(target)) {
        scrSetResult(target);
    } else {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Talk\\btlTalkCommand.cpp", 0x387);
        s16 *candidates = (s16 *)asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT,
                                            0, 0x962, 1);
        u16 count = 0;
        u32 playerLevel = gameGetPlayerData()->level;
        s32 high = source->level;
        if (playerLevel <= (u32)high) {
            high = gameGetPlayerData()->level;
        }
        s32 span = high / 2;
        if (span < 10) {
            span = 10;
        }
        s16 low = high - span;
        if (randBetween(low, high) <= 0) {
            scrSetResult(-1);
        } else {
            if (low <= 0) {
                low = 1;
            }
            for (u32 id = 1; id <= 1200; ++id) {
                NkmBaseRecord *devil = nkmBaseGetRecord((u16)id);
                NkmEnemyRecord *data = nkmEnemyFindById((u16)id);
                if (devil->level >= low && devil->level <= high &&
                    (data->flags & 0x400) && !partyHasStoredDemon(devil->id)) {
                    dataTable01FindByIdWithAoc(devil->id);
                    candidates[count++] = (s16)devil->id;
                }
            }
            if (count) {
                scrSetResult(candidates[(s16)randNextInRange((u16)(count - 1))]);
            } else {
                scrSetResult(-1);
            }
        }
        asdMemFree(candidates);
    }
    return 1;
}
}
