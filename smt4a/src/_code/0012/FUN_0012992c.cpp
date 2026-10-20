#include "common.h"

extern "C" {

extern u8 DAT_00559968;        /* vtable */
extern u8 DAT_00594b24;

__weak int FUN_0012992c_hook(int x);
void FUN_0030ccc0(u8 *base, u32 *self);
void FUN_00129880(u32 *self);
int FUN_0030cbb0(int p);

/* Destructor body: installs the vtable, runs the parent destructor, then releases the embedded members. */
int FUN_0012992c(u32 *self)
{
    int p;

    *self = (u32)&DAT_00559968;
    FUN_0030ccc0(&DAT_00594b24, self);
    FUN_00129880(self);
    p = FUN_0030cbb0((int)(self + 8));
    p = FUN_0030cbb0(p - 0x14);
    return FUN_0012992c_hook(p - 0xc);
}

} /* extern "C" */
