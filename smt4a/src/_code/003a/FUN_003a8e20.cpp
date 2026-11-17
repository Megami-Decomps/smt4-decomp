#include "battle/btlScript.h"
#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlEntryLookup.h"

extern "C" {



typedef struct SkillRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 value;
} SkillRecord;

extern s32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: result is the record byte for the script unit's skill in slot `argument`; 0 if it has none. */
s32 FUN_003a8e20(void)
{
    s32 slot = scrGetArg(0);
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *data = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;
    SkillRecord *record = (SkillRecord *)skillDataFindById(data->skillIds[slot]);

    if (record != NULL) {
        scrSetResult(record->value);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
