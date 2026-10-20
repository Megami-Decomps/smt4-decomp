#include "common.h"

extern "C" {

extern const u8 DAT_00558620[];  /* vtable */

typedef struct Object558620 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 ready;
    /* 0x08 */ u32 owner;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} Object558620;

/* Constructor: sets the vtable and owner, everything else zero. */
void constructObj00558620(Object558620 *self, u32 owner)
{
    self->vtbl = DAT_00558620;
    self->owner = owner;
    self->ready = 0;
    self->unk0C = 0;
    self->unk10 = 0;
}

} /* extern "C" */
