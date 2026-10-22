/* Destructor: restores the vtable and tears down the nested sub-objects (the embedded one at 0x2c first) back to the outer object, returning this. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[0x28];   /* 0x04 */
    u8 inner[1];      /* 0x2c */
} NestedObject;

extern u8 DAT_0055a8f0;

u8 *_ZN9Obj55aff4D1Ev(u8 *self);
u8 *vectorDestroyBytes(u8 *self);
u8 *vectorTeardown_00307368(u8 *self);

NestedObject *FUN_0011c93c(NestedObject *self)
{
    u8 *part;

    self->vtbl = &DAT_0055a8f0;
    part = vectorDestroyBytes(self->inner);
    part = vectorTeardown_00307368(part - 0xc);
    part = vectorTeardown_00307368(part - 0xc);
    part = _ZN9Obj55aff4D1Ev(part - 8);
    return (NestedObject *)(part - 0xc);
}

} /* extern "C" */
