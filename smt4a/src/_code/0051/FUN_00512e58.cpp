#include "common.h"

struct SlotSource {
    /* 0x00 */ u32 base;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 extent;
    /* 0x0C */ u8 unk0c[0xc];
    /* 0x18 */ s32 kind;
};

extern "C" {

/* Reports the source's base (plus 0x20 for kind 1) and extent; fails without a source. */
u32 FUN_00512e58(SlotSource *source, u32 *base, u32 *extent)
{
    if (source == NULL) {
        return 0;
    }
    u32 value = source->base;
    if (source->kind == 1) {
        value += 32;
    }
    *base = value;
    *extent = source->extent;
    return 1;
}

} /* extern "C" */
