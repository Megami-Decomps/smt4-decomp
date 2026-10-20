#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u8 mode;
} Holder;

/* Returns whether `mode` is 2. */
u8 FUN_00169168(Holder *object)
{
    return object->mode == 2;
}

} /* extern "C" */
