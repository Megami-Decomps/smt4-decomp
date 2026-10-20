#include "common.h"

extern "C" {

extern const u8 DAT_005596e4[];  /* vtable */
u8 *destroyObj0055ae64(u8 *member);

typedef struct Object5596e4 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 member08[1];
} Object5596e4;

/* Destructor: restores the vtable and destroys the embedded member; returns the object's base address. */
u8 *_ZN9Obj5596dcD1Ev(Object5596e4 *self)
{
    u8 *member;

    self->vtbl = DAT_005596e4;
    member = destroyObj0055ae64(self->member08);
    return member - 8;
}

} /* extern "C" */
