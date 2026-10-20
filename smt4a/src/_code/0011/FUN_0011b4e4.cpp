#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ u8 member[4];     /* sub-object destroyed by FUN_002eda5a */
} Object;

extern u8 DAT_0055a5a0;

int FUN_002e9318(int ptr);
int FUN_002eda5a(void *member);
int FUN_00307368(int ptr);

/* Destructor body: installs the vtable, then destroys each embedded sub-object and base, returning the final adjusted pointer. */
int FUN_0011b4e4(Object *self)
{
    int ptr;

    self->vtbl = &DAT_0055a5a0;
    ptr = FUN_002eda5a(self->member);
    ptr = FUN_00307368(ptr - 0xc);
    ptr = FUN_00307368(ptr - 0xc);
    ptr = FUN_002e9318(ptr - 8);
    return ptr - 0x10;
}

} /* extern "C" */
