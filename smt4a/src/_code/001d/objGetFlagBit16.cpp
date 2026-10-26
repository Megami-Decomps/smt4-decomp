#include "common.h"
#include "code/Code001d_Smt4a.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u32 flags;
} Holder;

/* Returns bit 16 of `flags` (0 or 1). */
u32 objGetFlagBit16(Holder *object)
{
    return (object->flags & 0x10000) >> 0x10;
}

} /* extern "C" */
