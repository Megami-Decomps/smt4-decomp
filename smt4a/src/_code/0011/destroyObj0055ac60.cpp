#include "common.h"

extern "C" {

extern const u8 DAT_0055ac60[];  /* vtable */
u8 *ptrHolderDestroy(u8 *member);

typedef struct Object55ac60 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u8 member10[1];
} Object55ac60;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj0055ac60(Object55ac60 *self)
{
    u8 *member;

    self->vtbl = DAT_0055ac60;
    member = ptrHolderDestroy(self->member10);
    return member - 0x10;
}

} /* extern "C" */
