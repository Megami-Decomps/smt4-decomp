#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ void *vtbl;
    /* 0x004 */ u8 unk004[0xF4];
    /* 0x0F8 */ u8 member[4];    /* sub-object destroyed by strDestroy */
} Object;

extern u8 DAT_0055aa64;

int strDestroy(void *member);
int FUN_002ecac4(int ptr);
int FUN_002fb028(int ptr);

/* Destructor body: installs the vtable, then destroys the embedded sub-object and the bases. */
void FUN_0011de1c(Object *self)
{
    int ptr;

    self->vtbl = &DAT_0055aa64;
    ptr = strDestroy(self->member);
    ptr = FUN_002fb028(ptr - 0x78);
    FUN_002ecac4(ptr - 0x80);
}

} /* extern "C" */
