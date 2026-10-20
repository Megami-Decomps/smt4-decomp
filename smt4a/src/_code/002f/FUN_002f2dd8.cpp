#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x122];
    /* 0x122 */ s16 count;
} Holder;

/* Increments the 16-bit counter at 0x122. */
void FUN_002f2dd8(Holder *object)
{
    object->count = object->count + 1;
}

} /* extern "C" */
