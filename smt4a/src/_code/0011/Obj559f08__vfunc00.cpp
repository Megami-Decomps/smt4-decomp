#include "classes/Obj558c9c.h"

extern "C" {
s32 _ZN9Obj558c907vfunc0cEjjj(Obj559f08 *object);   /* the base class's vfunc00 */
s32 FUN_0010aaf0(Obj559f08 *object, u8 *entry);
}

/* Runs the base check and then FUN_0010aaf0 on the entry; when both succeed the object is marked
 * loaded. Returns whether it did. */
s32 Obj559f08::vfunc00()
{
    s32 ok = _ZN9Obj558c907vfunc0cEjjj(this) != 0 && FUN_0010aaf0(this, entry) != 0;

    if (ok) {
        loaded = 1;
    }
    return ok;
}
