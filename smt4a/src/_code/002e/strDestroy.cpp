/* NON_MATCHING: only the Thumb literal-pool alignment pad differs in fdiff (retail lists it as code `movs r0, r0`, the build as data `.short 0x0000`); the bytes are the same. */
/* Destructor: restores the vtable, releases the owned resource, then runs the base destructor. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[8];      /* 0x04 */
    u32 resource;     /* 0x0c */
} ResourceOwner;

extern u8 DAT_0055af54;

void FUN_002e6e14(u32 resource);
void FUN_002ea0b8(ResourceOwner *self);

void strDestroy(ResourceOwner *self)
{
    self->vtbl = &DAT_0055af54;
    FUN_002e6e14(self->resource);
    FUN_002ea0b8(self);
}

} /* extern "C" */
