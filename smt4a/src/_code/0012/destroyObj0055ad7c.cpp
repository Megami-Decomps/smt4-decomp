#include "common.h"

extern "C" {

extern const u8 DAT_0055ad7c[];  /* vtable */
u8 *_ZN9Obj55b104D1Ev(u8 *member);

typedef struct Object0055ad7c {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u8 member10[1];
} Object0055ad7c;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *destroyObj0055ad7c(Object0055ad7c *self)
{
    u8 *member;

    self->vtbl = DAT_0055ad7c;
    member = _ZN9Obj55b104D1Ev(self->member10);
    return member - 0x10;
}

} /* extern "C" */
