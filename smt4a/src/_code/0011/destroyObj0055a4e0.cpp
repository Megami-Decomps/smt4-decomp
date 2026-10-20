#include "common.h"

extern "C" {

extern const u8 DAT_0055a4e0[];  /* vtable */
u8 *FUN_002eda5a(u8 *member);
u8 *vectorTeardown_00307368(u8 *member);
u8 *FUN_002e9318(u8 *member);

typedef struct Object55a4e0 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u8 member20[1];
} Object55a4e0;

/* Destructor: restores the vtable and destroys the embedded members from the last to the first. */
u8 *destroyObj0055a4e0(Object55a4e0 *self)
{
    u8 *member;

    self->vtbl = DAT_0055a4e0;
    member = FUN_002eda5a(self->member20);
    member = vectorTeardown_00307368(member - 0x10);
    member = FUN_002e9318(member - 8);
    return member - 8;
}

} /* extern "C" */
