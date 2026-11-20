#include "game/GameGlobalsRef.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GameSaveBlocks.h"
#include "map/MapGroupSelection.h"

/* Select the first map group whose flags and progress range are satisfied. */
extern "C" s32 mapFindEligibleGroupIndex(void)
{
    s32 result = -1;
    if (g_gameGlobals.instance != NULL) {
        void *table = dataTableFileGetTable(g_gameGlobals.instance->mapGroupsFile, 0);
        const MapGroupRecord *records = (const MapGroupRecord *)dataTableGetEntries(table);
        s32 count = dataTableGetCount(table);
        const GameSaveDataA *saved = (const GameSaveDataA *)gameDataBlocksGetTable();
        s32 progress = saved->mapGroup.progress + 1;
        for (s32 index = 0; index < count; ++index) {
            if ((records[index].requiredFlag == 0 || gameFlagIsSet(records[index].requiredFlag)) &&
                (records[index].blockedFlag == 0 || !gameFlagIsSet(records[index].blockedFlag)) &&
                (records[index].minimum == 0 || records[index].minimum <= progress) &&
                (records[index].maximum == 0 || progress <= records[index].maximum)) {
                result = index;
                break;
            }
        }
    }
    return result;
}
