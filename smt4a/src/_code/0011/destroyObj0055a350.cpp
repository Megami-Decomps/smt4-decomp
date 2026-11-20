#include "common.h"

extern "C" {

extern const u8 DAT_0055a350[];  /* vtable */
u8 *destroyObj005585a4(u8 *member);
void deletingDtor_002ecac4(u8 *member);

typedef struct Object55a350 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x74];
    /* 0x78 */ u8 member78[1];
} Object55a350;

/* Destructor: restores the vtable and destroys the embedded members. */
void destroyObj0055a350(Object55a350 *self)
{
    u8 *member;

    self->vtbl = DAT_0055a350;
    member = destroyObj005585a4(self->member78);
    deletingDtor_002ecac4(member - 0x78);
}

} /* extern "C" */
