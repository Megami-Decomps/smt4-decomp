#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00558f18[];  /* vtable */
void FUN_002f292c(void *self);

/* Destructor: restores the vtable, then runs the base destructor body. */
void destroyObj00558f18(VObject *self)
{
    self->vtbl = DAT_00558f18;
    FUN_002f292c(self);
}

} /* extern "C" */
