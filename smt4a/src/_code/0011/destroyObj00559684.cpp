#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_00559684[];  /* vtable */
void FUN_0011444c(void *self, s32 flag);
void FUN_002f42ec(void *self);

/* Destructor: restores the vtable, runs FUN_0011444c(self, 0), then the base destructor body. */
void destroyObj00559684(VObject *self)
{
    self->vtbl = DAT_00559684;
    FUN_0011444c(self, 0);
    FUN_002f42ec(self);
}

} /* extern "C" */
