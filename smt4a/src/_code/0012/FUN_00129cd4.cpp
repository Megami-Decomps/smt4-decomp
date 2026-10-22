#include "classes/Obj55adec.h"

/* Retail consumes the destructor's returned owner; a native call adds save/restores. */
extern "C" int _ZN9Obj55adecD1Ev(int p);
#include "common.h"

extern "C" {

extern u8 DAT_005599f8;        /* vtable */
extern u8 DAT_00594b24;

__weak int FUN_00129cd4_hook(int x);
void onlineObjectListRemove(u8 *base, u32 *self);
void FUN_00129c14(u32 *self);

/* Destructor body: installs the vtable, runs the parent destructor, then releases the embedded members. */
int FUN_00129cd4(u32 *self)
{
    int p;

    *self = (u32)&DAT_005599f8;
    onlineObjectListRemove(&DAT_00594b24, self);
    FUN_00129c14(self);
    p = _ZN9Obj55adecD1Ev((int)(self + 8));
    p = _ZN9Obj55adecD1Ev(p - 0x14);
    return FUN_00129cd4_hook(p - 0xc);
}

} /* extern "C" */
