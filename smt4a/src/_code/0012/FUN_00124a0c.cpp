#include "common.h"

extern "C" {

typedef struct Obj124a0c {
    u32 vtbl;                      /* 0x00 */
    void *member;                  /* 0x04 */
} Obj124a0c;

extern u8 DAT_0055cb90;            /* vtable */

__weak Obj124a0c *FUN_00124a0c_hook(Obj124a0c *self);
void asdOperatorDeleteB(void *member);

/* Destructor body: installs the vtable and releases the member. */
Obj124a0c *FUN_00124a0c(Obj124a0c *self)
{
    self->vtbl = (u32)&DAT_0055cb90;
    asdOperatorDeleteB(self->member);
    return FUN_00124a0c_hook(self);
}

} /* extern "C" */
