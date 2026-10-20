#include "common.h"

extern "C" {

extern const u8 DAT_00559ef4[];  /* vtable */
u8 *onlineStringDestroy(u8 *member);

typedef struct Object559ef4 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u8 member18[1];
} Object559ef4;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *_ZN9Obj559eecD1Ev(Object559ef4 *self)
{
    u8 *member;

    self->vtbl = DAT_00559ef4;
    member = onlineStringDestroy(self->member18);
    return member - 0x18;
}

} /* extern "C" */
