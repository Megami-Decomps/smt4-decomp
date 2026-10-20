#include "common.h"

extern "C" {

extern const u8 DAT_00559e44[];  /* vtable */
u8 *destroyObj0055ae64(u8 *member);

typedef struct Object559e44 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 member0C[1];
} Object559e44;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj00559e44(Object559e44 *self)
{
    u8 *member;

    self->vtbl = DAT_00559e44;
    member = destroyObj0055ae64(self->member0C);
    return member - 0xC;
}

} /* extern "C" */
