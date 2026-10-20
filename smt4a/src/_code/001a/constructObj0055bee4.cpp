#include "common.h"

extern "C" {

extern const u8 DAT_0055bee4[];  /* vtable */

typedef struct Object55bee4 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
} Object55bee4;

/* Constructor: sets the vtable and clears every field. */
void constructObj0055bee4(Object55bee4 *self)
{
    self->unk04 = 0;
    self->vtbl = DAT_0055bee4;
    self->unk08 = 0;
    self->unk0C = 0;
    self->unk10 = 0;
    self->unk14 = 0;
    self->unk18 = 0;
    self->unk1C = 0;
    self->unk20 = 0;
}

} /* extern "C" */
