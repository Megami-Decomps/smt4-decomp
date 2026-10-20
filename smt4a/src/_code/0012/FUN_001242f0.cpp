#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u16 status;
} Holder;

/* Returns the state held in the low nibble of `status`. */
u16 FUN_001242f0(Holder *object)
{
    return object->status & 0xF;
}

} /* extern "C" */
