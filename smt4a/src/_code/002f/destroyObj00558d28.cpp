#include "classes/Obj55a178.h"
#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00558d28[];  /* vtable */
void FUN_002f4fd0(void *self);

/* Destructor: restores the vtable, runs _ZN9Obj55a1789setTargetEPv(self, 0) and then FUN_002f4fd0. */
void destroyObj00558d28(VObject *self)
{
    self->vtbl = DAT_00558d28;
    ((Obj55a178 *)(self))->Obj55a178::setTarget((void *)0);
    FUN_002f4fd0(self);
}

} /* extern "C" */
