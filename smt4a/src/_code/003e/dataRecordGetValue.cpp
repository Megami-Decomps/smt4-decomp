#include "gamedata/DataTableAccess.h"
#include "gamedata/GauntletAppTable.h"

extern "C" {

/* Looks up an app's cost, returning zero if the app is missing. */
u32 dataRecordGetValue(u32 id)
{
    const GauntletAppRecordA *record = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(id);
    return record != NULL ? record->cost : 0;
}

} /* extern "C" */
