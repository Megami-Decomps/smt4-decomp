#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ u8 member[4];     /* sub-object destroyed by vectorDestroyBytes */
} Object;

extern u8 DAT_0055a5a0;

int _ZN9Obj55aff4D1Ev(int ptr);
int vectorDestroyBytes(void *member);
int vectorTeardown_00307368(int ptr);

/* Destructor body: installs the vtable, then destroys each embedded sub-object and base, returning the final adjusted pointer. */
int FUN_0011b4e4(Object *self)
{
    int ptr;

    self->vtbl = &DAT_0055a5a0;
    ptr = vectorDestroyBytes(self->member);
    ptr = vectorTeardown_00307368(ptr - 0xc);
    ptr = vectorTeardown_00307368(ptr - 0xc);
    ptr = _ZN9Obj55aff4D1Ev(ptr - 8);
    return ptr - 0x10;
}

} /* extern "C" */
