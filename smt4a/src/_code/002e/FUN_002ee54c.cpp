#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 handle;
} Object;

extern u8 DAT_0055b2e0;

int FUN_002e7232(u32 handle);

/* Destructor body: installs the vtable, releases the handle and clears it. */
Object *FUN_002ee54c(Object *self)
{
    self->vtbl = &DAT_0055b2e0;
    FUN_002e7232(self->handle);
    self->handle = 0;
    return self;
}

} /* extern "C" */
