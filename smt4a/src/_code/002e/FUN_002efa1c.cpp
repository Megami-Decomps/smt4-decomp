#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ u8 enabled;
    /* 0x14D */ u8 unk14D[0x0B];
    /* 0x158 */ s32 flags;
} Holder;

/* Returns 1 when the object is enabled and bit 25 of `flags` is set. */
u32 FUN_002efa1c(Holder *object)
{
    if ((object->enabled == 0) || (object->flags << 7 >= 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
