#include "common.h"

struct PolyThunderSlot {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ u32 kind;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ void *params;
};

extern "C" {

void *effPolyThunderCreate(u32 kind, void *params);

/* Virtual slot: creates the poly-thunder effect from the stored kind (16 bits) and parameters. */
void FUN_0036382c(PolyThunderSlot *self)
{
    effPolyThunderCreate((u16)self->kind, self->params);
}

} /* extern "C" */
