#include "common.h"

extern "C" {

extern const u8 DAT_0055c19c[];  /* vtable */
void nn_os_LightEvent_Initialize(u32 *member, s32 flag);
void nn_os_LightEvent_Signal(u32 *member);

typedef struct Object55c19c {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;           /* start of an embedded member (0xC..0x13) */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 unk18;
} Object55c19c;

/* Constructor: sets the vtable, clears the fields and sets up the member at 0xC. */
Object55c19c *FUN_001b95dc(Object55c19c *self)
{
    self->vtbl = DAT_0055c19c;
    self->unk04 = 0;
    self->unk08 = 0;
    self->unk0C = 0;
    self->unk10 = 0;
    nn_os_LightEvent_Initialize(&self->unk0C, 1);
    self->unk14 = 0;
    self->unk18 = 0;
    nn_os_LightEvent_Signal(&self->unk0C);
    return self;
}

} /* extern "C" */
