#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xA1];
    /* 0xA1 */ u8 mode;
} Holder;

/* Returns whether `mode` is 1 or 2. */
u8 modeIsOneOrTwo(Holder *object)
{
    return object->mode == 1 || object->mode == 2;
}

} /* extern "C" */
