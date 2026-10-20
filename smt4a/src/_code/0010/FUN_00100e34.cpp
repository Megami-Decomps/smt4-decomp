#include "common.h"

extern "C" {

void FUN_00100b14(void *object, s32 a, s32 b);
void FUN_00102984(void *object, s32 a, s32 b);

typedef struct Dispatcher {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 variant;    /* nonzero selects the alternate handler */
} Dispatcher;

/* Forwards to the alternate handler when `variant` is set and to the default one otherwise; always succeeds. */
u32 FUN_00100e34(Dispatcher *object, s32 a, s32 b)
{
    if (object->variant != 0) {
        FUN_00102984(object, a, b);
    } else {
        FUN_00100b14(object, a, b);
    }
    return 1;
}

} /* extern "C" */
