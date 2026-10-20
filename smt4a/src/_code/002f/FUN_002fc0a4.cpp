#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x3F8];
    /* 0x3F8 */ s32 state;
} Holder;

/* Returns 0 when the object exists and its state is neither 0 nor 1; otherwise 1. */
u32 FUN_002fc0a4(Holder *object)
{
    s32 state;
    u32 result;

    state = 0;
    if (object != NULL) {
        state = object->state;
    }
    if ((object != NULL && state != 1) && (state != 0)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
