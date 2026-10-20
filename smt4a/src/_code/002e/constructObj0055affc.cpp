#include "common.h"

extern "C" {

extern const u8 DAT_0055affc[];  /* vtable */
extern u8 DAT_0053a204[];
void FUN_0030ff80(u32 *member, u8 *value);

typedef struct Object55affc {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 member04;
} Object55affc;

/* Constructor: sets the vtable and initialises the member at 4 from the object at 0x53A204. */
Object55affc *constructObj0055affc(Object55affc *self)
{
    self->vtbl = DAT_0055affc;
    FUN_0030ff80(&self->member04, DAT_0053a204);
    return self;
}

} /* extern "C" */
