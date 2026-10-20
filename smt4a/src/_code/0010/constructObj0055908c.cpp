#include "common.h"

extern "C" {

extern const u8 DAT_0055908c[];  /* vtable */

typedef struct Object55908c {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 value;
} Object55908c;

/* Constructor: sets the vtable and clears the flag and value. */
void constructObj0055908c(Object55908c *self)
{
    self->vtbl = DAT_0055908c;
    self->flag = 0;
    self->value = 0;
}

} /* extern "C" */
