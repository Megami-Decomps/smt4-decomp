#include "shard/Shard003C.h"

extern "C" {

extern BtlUnitObjB *btlUnitGet(u32 id);
extern s32 FUN_004c3a98(s32 id, u32 type);
extern void scrSetResult(s32 value);

/* Script command: result is whether FUN_004c3a98 reports a positive value for the unit's id (+8) with type 0x13. */
u32 scrCommUnitIsType13(u32 *unitId)
{
    BtlUnitObjB *unit = btlUnitGet(*unitId);

    scrSetResult(0 < FUN_004c3a98(unit->obj->unk08, 0x13));
    return 1;
}

} /* extern "C" */
