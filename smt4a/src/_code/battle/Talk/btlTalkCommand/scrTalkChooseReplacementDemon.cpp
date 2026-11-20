/* NON_MATCHING: unsigned successorId and branch layout match retail; saved-register rotation (retail successorId/successor/source = r4/r5/r6 vs built r6/r4/r5), same as smt4 twin btlTalkCommand_SelectTalkTarget. */
#include "AsdSDK/AsdDebug.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 scrGetArg(u32);
s32 gameStockContainsEntry(u16);
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
s32 randBetween(s32, s32);
void dataTable01GetRecordWithAocOverride(u16);
s32 randRange(u32);
void scrSetResult(s32);
void asdMemFree(void *);

u32 scrTalkChooseReplacementDemon()
{
    const NkmEnemyRecordA *source = nkmEnemyFindById((u16)scrGetArg(0));
    u16 successorId = source->successorId;
    const NkmEnemyRecordA *successor = nkmEnemyFindById(successorId);
    nkmBaseGetRecord(successorId);
    if (successorId && successor && (successor->flags & 0x80) &&
        gameGetPlayerData()->level >= (successor->level & 0x7fffU) && !gameStockContainsEntry(successorId)) {
        scrSetResult(successorId);
    } else {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Talk\\btlTalkCommand.cpp", 1054);
        s16 *candidates = (s16 *)asdMemoryAllocTracked(0x100, 0x100, 0, 1201 * sizeof(s16), 1);
        u16 count = 0;
        const PlayerDataA *player = gameGetPlayerData();
        u16 level = source->level & 0x7fff;
        if (player->level <= level)
            level = gameGetPlayerData()->level;
        s32 upper = (s16)level;
        s32 span = upper / 2;
        if (span < 10)
            span = 10;
        s32 lower = (s16)(upper - span);
        if (randBetween(lower, upper) <= 0) {
            scrSetResult(-1);
        } else {
            lower = lower <= 0 ? 1 : lower;
            for (u32 id = 1; id <= 1200; ++id) {
                const NkmBaseRecordA *demon = nkmBaseGetRecord((u16)id);
                const NkmEnemyRecordA *definition = nkmEnemyFindById((u16)id);
                if (lower <= demon->level && demon->level <= upper && (definition->flags & 0x80) &&
                    !gameStockContainsEntry(demon->id)) {
                    dataTable01GetRecordWithAocOverride(demon->id);
                    candidates[count++] = demon->id;
                }
            }
            if (count)
                scrSetResult(candidates[(s16)randRange((u16)(count - 1))]);
            else
                scrSetResult(-1);
        }
        asdMemFree(candidates);
    }
    return 1;
}
}
