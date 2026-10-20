#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u8 mode;
} Holder;

/* Returns whether the state is 6 when `kind` matches the mode (1 for mode 0, 2 otherwise); 0 for any other kind. */
u32 FUN_0019196c(Holder *object, s32 kind)
{
    if (object->mode == 0) {
        if (kind != 1) {
            return 0;
        }
    } else if (kind != 2) {
        return 0;
    }
    return object->state == 6;
}

} /* extern "C" */
