/* Destructor: restores the vtable, releases the owned resource, then runs the base destructor. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[8];      /* 0x04 */
    u32 resource;     /* 0x0c */
} ResourceOwner;

extern u8 DAT_0055af54;

void asdOperatorDeleteArray(u32 resource);
void sharedRefInitEmpty(ResourceOwner *self);

void strDestroy(ResourceOwner *self)
{
    self->vtbl = &DAT_0055af54;
    asdOperatorDeleteArray(self->resource);
    sharedRefInitEmpty(self);
}

} /* extern "C" */
