#include "common.h"

extern "C" {

extern const u8 DAT_0055adc0[];  /* vtable */
u8 *FUN_002e9318(u8 *member);

typedef struct Object0055adc0 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x4];
    /* 0x08 */ u8 member08[1];
} Object0055adc0;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj0055adc0(Object0055adc0 *self)
{
    u8 *member;

    self->vtbl = DAT_0055adc0;
    member = FUN_002e9318(self->member08);
    return member - 0x8;
}

} /* extern "C" */
