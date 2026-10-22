/* C ABI retained: the unmangled base destructor FUN_002eb7c0 has no native Obj55ae24 D1 unit. */
#include "classes/Obj55a218.h"

extern "C" {
extern const u8 _ZTV9Obj55a218[];
void FUN_002eb7c0(Obj55a218 *self);
void FUN_002f674e(u32 handle);

void _ZN9Obj55a218D1Ev(Obj55a218 *self)
{
    *(const void **)self = _ZTV9Obj55a218 + 8;
    if (g_systemTable.handlesShared == 0) {
        FUN_002f674e(self->handle);
    }
    FUN_002eb7c0(self);
}

} /* extern "C" */
