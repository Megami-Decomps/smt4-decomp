#include "common.h"

extern "C" {

extern u8 DAT_00559ad0;
extern u8 DAT_00594b24;

typedef struct {
    const void *vtbl;   /* 0x00 */
} Object;

int FUN_0012a080(Object *self);
int onlineObjectListRemove(u8 *registry, Object *object);

/* Constructor: installs the vtable, registers the object with the global registry, finishes setup and returns it. */
Object *FUN_0012a0e4(Object *self)
{
    self->vtbl = &DAT_00559ad0;
    onlineObjectListRemove(&DAT_00594b24, self);
    FUN_0012a080(self);
    return self;
}

} /* extern "C" */
