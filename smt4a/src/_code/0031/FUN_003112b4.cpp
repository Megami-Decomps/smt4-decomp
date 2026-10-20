/* Constructor: sets the vtable and initial state (count 0, flag 1). */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u32 field04;      /* 0x04 */
    u32 field08;      /* 0x08 */
    u32 enabled;      /* 0x0c */
    u32 field10;      /* 0x10 */
} StateObject;

extern u8 DAT_00559eac;

void FUN_003112b4(StateObject *self)
{
    self->vtbl = &DAT_00559eac;
    self->field04 = 0;
    self->field08 = 0;
    self->enabled = 1;
    self->field10 = 0;
}

} /* extern "C" */
