#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00558d28[];  /* vtable */
void FUN_002f4fac(void *self, s32 flag);
void FUN_002f4fd0(void *self);

/* Destructor: restores the vtable, runs FUN_002f4fac(self, 0) and then FUN_002f4fd0. */
void destroyObj00558d28(VObject *self)
{
    self->vtbl = DAT_00558d28;
    FUN_002f4fac(self, 0);
    FUN_002f4fd0(self);
}

} /* extern "C" */
