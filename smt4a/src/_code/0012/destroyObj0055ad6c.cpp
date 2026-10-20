#include "common.h"

extern "C" {

extern const u8 DAT_0055ad6c[];  /* vtable */
u8 *FUN_001221bc(u8 *member);

typedef struct Object0055ad6c {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x4];
    /* 0x08 */ u8 member08[1];
} Object0055ad6c;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj0055ad6c(Object0055ad6c *self)
{
    u8 *member;

    self->vtbl = DAT_0055ad6c;
    member = FUN_001221bc(self->member08);
    return member - 0x8;
}

} /* extern "C" */
