#include "common.h"

struct SlotOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *source;
};

extern "C" {

u32 FUN_003f57e4(void *source, u32 *base, u32 *extent);

/* Virtual slot: reports the owner's source through FUN_003f57e4 (the function right after it). */
u32 FUN_003f57dc(SlotOwner *self, u32 *base, u32 *extent)
{
    return FUN_003f57e4(self->source, base, extent);
}

} /* extern "C" */
