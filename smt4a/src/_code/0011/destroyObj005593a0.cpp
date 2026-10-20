#include "common.h"

extern "C" {

extern const u8 DAT_005593a0[];  /* vtable */
u8 *FUN_002fb3d8(u8 *member);

typedef struct Object5593a0 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 member04[1];
} Object5593a0;

/* Destructor: restores the vtable and destroys the embedded members; returns the address FUN_002fb3d8 hands back for the second one, minus 0x20. */
u8 *destroyObj005593a0(Object5593a0 *self)
{
    u8 *member;

    self->vtbl = DAT_005593a0;
    member = FUN_002fb3d8(self->member04);
    member = FUN_002fb3d8(member + 0x1C);
    return member - 0x20;
}

} /* extern "C" */
