#include "common.h"

extern "C" {

extern const u8 DAT_0055a520[];  /* vtable */
void FUN_002e7232(void *buffer);
u8 *FUN_0011c110(u8 *member);
void FUN_00306c8c(u8 *member);

typedef struct Object55a520 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x54];
    /* 0x58 */ u8 member58[0x2C];
    /* 0x84 */ void *buffer;
} Object55a520;

/* Destructor: restores the vtable, frees the buffer, then destroys the embedded members. */
void destroyObj0055a520(Object55a520 *self)
{
    u8 *member;

    self->vtbl = DAT_0055a520;
    FUN_002e7232(self->buffer);
    member = FUN_0011c110(self->member58);
    FUN_00306c8c(member - 0x58);
}

} /* extern "C" */
