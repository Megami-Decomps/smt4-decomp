#include "shard/Shard0033.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GameSaveBlocks.h"
#include "map/MapGroupSelection.h"

extern "C" {
extern const char DAT_00536874[]; /* "NoGroup" */

/* Return the selected map group's name, resolving and caching the group if necessary. */
const char *mapGetSelectedGroupName(ObjB *session)
{
    void *table = dataTableFileGetTable(session->mapGroupsFile, 0);
    const MapGroupRecord *records = (const MapGroupRecord *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    if (session->mapGroupIndex >= 0)
        return records[session->mapGroupIndex].name;
    const GameSaveDataA *saved = (const GameSaveDataA *)gameDataBlocksGetTable();
    s32 progress = saved->mapGroup.progress + 1;
    for (s32 index = 0; index < count; ++index) {
        if ((records[index].requiredFlag == 0 || gameFlagIsSet(records[index].requiredFlag)) &&
            (records[index].blockedFlag == 0 || !gameFlagIsSet(records[index].blockedFlag)) &&
            (records[index].minimum == 0 || records[index].minimum <= progress) &&
            (records[index].maximum == 0 || progress <= records[index].maximum)) {
            session->mapGroupIndex = index;
            return records[index].name;
        }
    }
    return DAT_00536874;
}
} /* extern "C" */
