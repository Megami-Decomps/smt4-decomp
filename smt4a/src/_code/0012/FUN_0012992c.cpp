#include "common.h"
#include "classes/Obj55a918.h"

extern "C" {

extern u8 DAT_00559968;        /* vtable */
extern u8 DAT_00594b24;

__weak int FUN_0012992c_hook(int x);
void onlineObjectListRemove(u8 *base, u32 *self);
void FUN_00129880(u32 *self);
/* C declaration retained: the proven owner teardown consumes D1's returned this. */
int _ZN9Obj55a918D1Ev(int p);

/* Destructor body: installs the vtable, runs the parent destructor, then releases the embedded members. */
int FUN_0012992c(u32 *self)
{
    int p;

    *self = (u32)&DAT_00559968;
    onlineObjectListRemove(&DAT_00594b24, self);
    FUN_00129880(self);
    p = _ZN9Obj55a918D1Ev((int)(self + 8));
    p = _ZN9Obj55a918D1Ev(p - 0x14);
    return FUN_0012992c_hook(p - 0xc);
}

} /* extern "C" */
