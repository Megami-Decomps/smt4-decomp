#include "common.h"

extern "C" {

extern const u8 DAT_00559e70[];  /* vtable */
void FUN_00300bb0(void);
u8 *destroyObj00558d28(u8 *member);
void _ZN9Obj558c90D1Ev(u8 *member);

typedef struct Object559e70 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u8 member10[1];
} Object559e70;

/* Destructor: restores the vtable, runs FUN_00300bb0 and destroys the embedded members. */
void destroyObj00559e70(Object559e70 *self)
{
    u8 *member;

    self->vtbl = DAT_00559e70;
    FUN_00300bb0();
    member = destroyObj00558d28(self->member10);
    _ZN9Obj558c90D1Ev(member - 0x10);
}

} /* extern "C" */
