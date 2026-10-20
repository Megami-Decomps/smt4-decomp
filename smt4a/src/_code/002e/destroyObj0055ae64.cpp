#include "common.h"

extern "C" {

extern const u8 DAT_0055ae64[];  /* vtable */
u8 *FUN_002eda5a(u8 *member);
void FUN_002ea0b8(u8 *member);

typedef struct Object55ae64 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 member0C[1];
} Object55ae64;

/* Destructor: restores the vtable and destroys the embedded member. */
void destroyObj0055ae64(Object55ae64 *self)
{
    u8 *member;

    self->vtbl = DAT_0055ae64;
    member = FUN_002eda5a(self->member0C);
    FUN_002ea0b8(member - 0xC);
}

} /* extern "C" */
