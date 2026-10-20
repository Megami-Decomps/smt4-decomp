#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00558f18[];  /* vtable */
void _ZN9Obj55b12cD1Ev(void *self);

/* Destructor: restores the vtable, then runs the base destructor body. */
void destroyObj00558f18(VObject *self)
{
    self->vtbl = DAT_00558f18;
    _ZN9Obj55b12cD1Ev(self);
}

} /* extern "C" */
