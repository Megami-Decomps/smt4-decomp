#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct UnitData {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u16 skillIds[1];   /* indexed by the script argument */
} UnitData;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
} Unit;

typedef struct SkillRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 value;
} SkillRecord;

extern s32 scrGetArg(void);
extern void scrSetResult(s32 value);
extern Unit *btlUnitGet(u32 unit);
extern SkillRecord *dataTable04FindById(u32 id);

/* Script command: result is the record byte for the script unit's skill in slot `argument`; 0 if it has none. */
s32 FUN_003a8e24(void)
{
    s32 slot = scrGetArg();
    UnitData *data = btlUnitGet(g_btlScriptUnit)->data;
    SkillRecord *record = dataTable04FindById(data->skillIds[slot]);

    if (record != NULL) {
        scrSetResult(record->value);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
