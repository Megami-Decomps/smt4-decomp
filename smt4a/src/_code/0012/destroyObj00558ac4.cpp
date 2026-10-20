#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00558ac4[];  /* vtable */
void FUN_002f8520(void *self);

/* Destructor: restores the vtable, then runs the base destructor body. */
void destroyObj00558ac4(VObject *self)
{
    self->vtbl = DAT_00558ac4;
    FUN_002f8520(self);
}

} /* extern "C" */
