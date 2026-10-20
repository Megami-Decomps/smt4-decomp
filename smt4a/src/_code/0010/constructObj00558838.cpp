#include "common.h"

extern "C" {

extern const u8 DAT_00558838[];  /* vtable */

typedef struct Object558838 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 owner;
} Object558838;

/* Constructor: sets the vtable and owner. */
void constructObj00558838(Object558838 *self, u32 owner)
{
    self->vtbl = DAT_00558838;
    self->owner = owner;
}

} /* extern "C" */
