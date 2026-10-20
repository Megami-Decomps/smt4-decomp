#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 kind;
    /* 0x25 */ u8 unk25[0x67];
    /* 0x8C */ u32 count;
} Holder;

/* Returns 0 when the kind is 0, or is 1 with a count (low byte) below 2; otherwise 1. */
u32 FUN_002eafbe(Holder *object)
{
    if ((object->kind == 0) || ((object->kind == 1 && ((object->count & 0xFF) < 2)))) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
