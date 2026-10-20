#include "common.h"

extern "C" {

extern const u8 DAT_00559344[];  /* vtable */

typedef struct Object559344 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u16 value;
} Object559344;

/* Constructor: sets the vtable and the 16-bit value. */
void constructObj00559344(Object559344 *self, u16 value)
{
    self->vtbl = DAT_00559344;
    self->value = value;
}

} /* extern "C" */
