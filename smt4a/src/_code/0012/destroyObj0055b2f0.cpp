#include "common.h"

extern "C" {

extern const u8 DAT_0055b2f0[];  /* vtable */
void FUN_00122700(void *self);
void FUN_002e6e14(void *memory);
u8 *FUN_002f5966(u8 *member);

typedef struct Object55b2f0 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ void *buffer;
    /* 0x08 */ u8 member08[1];
} Object55b2f0;

/* Destructor: restores the vtable, runs FUN_00122700, frees the buffer and destroys the embedded member; returns the base address. */
u8 *destroyObj0055b2f0(Object55b2f0 *self)
{
    u8 *member;

    self->vtbl = DAT_0055b2f0;
    FUN_00122700(self);
    if (self->buffer != NULL) {
        FUN_002e6e14(self->buffer);
    }
    member = FUN_002f5966(self->member08);
    return member - 8;
}

} /* extern "C" */
