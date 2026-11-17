#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlEntryLookup.h"

extern "C" {



s32 scrSetResult(s32 value);
extern u32 g_btlScriptUnit;

/* Script command: counts the unit's skill slots that hold an id found in data table 4. */
u32 FUN_0039d804(void)
{
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *data = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;
    s32 count = 0;
    s32 i;

    for (i = 0; i < 8; i++) {
        u32 id = data->skillIds[i];

        if (id != 0 && skillDataFindById(id) != NULL) {
            count++;
        }
    }
    scrSetResult(count);
    return 1;
}

} /* extern "C" */
