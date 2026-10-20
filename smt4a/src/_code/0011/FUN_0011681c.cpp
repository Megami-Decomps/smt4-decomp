#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 unk04[0x44];
    /* 0x48 */ u8 member[4];     /* sub-object constructed by _ZN9Obj559374D1Ev */
} Object;

extern u8 DAT_00559d58;

int FUN_00116732(Object *self);
int FUN_002f5966(int ptr);
int FUN_002f9ef8(int ptr);
int _ZN9Obj559374D1Ev(void *member);

/* Destructor body: installs the vtable, then destroys each embedded sub-object and base, returning the final adjusted pointer. */
int FUN_0011681c(Object *self)
{
    int ptr;

    self->vtbl = &DAT_00559d58;
    FUN_00116732(self);
    ptr = _ZN9Obj559374D1Ev(self->member);
    ptr = FUN_002f9ef8(ptr - 0xc);
    ptr = FUN_002f5966(ptr - 0x34);
    return ptr - 8;
}

} /* extern "C" */
