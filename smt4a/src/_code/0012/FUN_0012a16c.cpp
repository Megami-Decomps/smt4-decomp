#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
} Object;

extern u8 DAT_00559af4;
extern u8 DAT_00594b24;

int FUN_0012a108(Object *self);
int FUN_0030ccc0(void *registry, Object *self);

/* Constructor: sets the vtable, registers the object in DAT_00594b24 and runs its initialiser. */
Object *FUN_0012a16c(Object *self)
{
    self->vtbl = &DAT_00559af4;
    FUN_0030ccc0(&DAT_00594b24, self);
    FUN_0012a108(self);
    return self;
}

} /* extern "C" */
