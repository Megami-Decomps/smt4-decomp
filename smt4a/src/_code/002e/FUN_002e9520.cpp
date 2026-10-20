#include "common.h"

extern "C" {

extern const u8 DAT_0055affc[];  /* vtable */
void FUN_0030ff80(u32 *member, u32 value);

typedef struct Object55affc {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 member04;
} Object55affc;

/* Copy constructor: sets the vtable and copies the member at 4 through FUN_0030ff80. */
Object55affc *FUN_002e9520(Object55affc *self, const Object55affc *source)
{
    self->vtbl = DAT_0055affc;
    FUN_0030ff80(&self->member04, source->member04);
    return self;
}

} /* extern "C" */
