#include "common.h"

extern "C" {

extern const u8 DAT_0055ad9c[];  /* vtable */
u8 *FUN_002e9f64(u8 *member);

typedef struct Object0055ad9c {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x4];
    /* 0x08 */ u8 member08[1];
} Object0055ad9c;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj0055ad9c(Object0055ad9c *self)
{
    u8 *member;

    self->vtbl = DAT_0055ad9c;
    member = FUN_002e9f64(self->member08);
    return member - 0x8;
}

} /* extern "C" */
