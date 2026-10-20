#include "shard/Shard0040.h"

extern "C" {

/* Stores `value` unless the object is locked (+4 non-zero). */
void FUN_0040ab7c(LockedObj *obj, u32 value)
{
    if (obj->locked == 0) {
        obj->unk14 = value;
    }
}

} /* extern "C" */
