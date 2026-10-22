#include "common.h"

extern "C" {

extern const u8 DAT_0055a3c4[];  /* vtable */
u8 *_ZN9Obj55aff4D1Ev(u8 *member);
void FUN_002ecac4(u8 *member);

typedef struct Object55a3c4 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x6C];
    /* 0x70 */ u8 member70[1];
} Object55a3c4;

/* Destructor: restores the vtable and destroys the embedded members. */
void destroyObj0055a3c4(Object55a3c4 *self)
{
    u8 *member;

    self->vtbl = DAT_0055a3c4;
    member = _ZN9Obj55aff4D1Ev(self->member70);
    FUN_002ecac4(member - 0x70);
}

} /* extern "C" */
