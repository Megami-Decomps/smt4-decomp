#include "common.h"

extern "C" {

extern u8 DAT_005599f8;        /* vtable */
extern u8 DAT_00594b24;

__weak int FUN_00129cd4_hook(int x);
void FUN_0030ccc0(u8 *base, u32 *self);
void FUN_00129c14(u32 *self);
int FUN_0030cb90(int p);

/* Destructor body: installs the vtable, runs the parent destructor, then releases the embedded members. */
int FUN_00129cd4(u32 *self)
{
    int p;

    *self = (u32)&DAT_005599f8;
    FUN_0030ccc0(&DAT_00594b24, self);
    FUN_00129c14(self);
    p = FUN_0030cb90((int)(self + 8));
    p = FUN_0030cb90(p - 0x14);
    return FUN_00129cd4_hook(p - 0xc);
}

} /* extern "C" */
