#include "common.h"

extern "C" {

extern u8 DAT_00559a88;        /* vtable */
extern u8 DAT_00594b24;

__weak u32 *FUN_00129fc8_hook(u32 *self);
void onlineObjectListRemove(u8 *base, u32 *self);
void FUN_00129f5c(u32 *self);

/* Destructor body: installs the vtable, then runs the base destructors. */
u32 *FUN_00129fc8(u32 *self)
{
    *self = (u32)&DAT_00559a88;
    onlineObjectListRemove(&DAT_00594b24, self);
    FUN_00129f5c(self);
    return FUN_00129fc8_hook(self);
}

} /* extern "C" */
