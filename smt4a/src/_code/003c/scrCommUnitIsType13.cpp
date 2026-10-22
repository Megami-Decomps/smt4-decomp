#include "shard/Shard003C.h"

extern "C" {

extern BtlUnitObjB *btlUnitGet(u32 id);
extern s32 btlFindEntryValue(s32 id, u32 type);
extern void scrSetResult(s32 value);
extern u32 g_btlScriptUnit;

/* Script command: result is whether btlFindEntryValue reports a positive value for the unit's id (+8) with type 0x13. */
u32 scrCommUnitIsType13(void)
{
    BtlUnitObjB *unit = btlUnitGet(g_btlScriptUnit);

    scrSetResult(0 < btlFindEntryValue(unit->obj->unk08, 0x13));
    return 1;
}

} /* extern "C" */
