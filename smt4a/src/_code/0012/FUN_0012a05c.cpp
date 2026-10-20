/* Destructor: restores the vtable, unregisters the object from the global registry, then runs the base destructor. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
} RegisteredObject;

extern u8 DAT_00559aac;
extern u8 DAT_00594b24; /* registry */

void FUN_00129ff0(RegisteredObject *self);
void onlineObjectListRemove(u8 *registry, RegisteredObject *self);

RegisteredObject *FUN_0012a05c(RegisteredObject *self)
{
    self->vtbl = &DAT_00559aac;
    onlineObjectListRemove(&DAT_00594b24, self);
    FUN_00129ff0(self);
    return self;
}

} /* extern "C" */
