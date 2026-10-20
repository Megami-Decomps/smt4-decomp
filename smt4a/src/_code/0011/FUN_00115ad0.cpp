#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
} Object;

extern u8 DAT_00559890;

int FUN_00115a5e(Object *self);
int FUN_002eb728(Object *self);

/* Destructor body: installs this class's vtable, then destroys the members and the base. */
void FUN_00115ad0(Object *self)
{
    self->vtbl = &DAT_00559890;
    FUN_00115a5e(self);
    FUN_002eb728(self);
}

} /* extern "C" */
