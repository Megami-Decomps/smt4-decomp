#include "shard/Shard003C.h"

extern "C" {

extern BtlUnitObjB *btlUnitGet(u32 id);
extern void scrSetResult(s32 value);

/* Script command: result is 1 when either counter of the unit's object (+0xB0, +0xB8) is positive. */
u32 scrCommUnitHasCountersB(u32 *unitId)
{
    BtlUnitObjB *unit = btlUnitGet(*unitId);

    if (unit->obj->unkB0 > 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0 < unit->obj->unkB8);
    }
    return 1;
}

} /* extern "C" */
