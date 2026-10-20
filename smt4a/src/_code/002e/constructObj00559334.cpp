#include "common.h"

extern "C" {

extern const u8 DAT_00559334[];  /* vtable */

typedef struct Object559334 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 value;
} Object559334;

/* Constructor: sets the vtable and the value. */
void constructObj00559334(Object559334 *self, u32 value)
{
    self->vtbl = DAT_00559334;
    self->value = value;
}

} /* extern "C" */
