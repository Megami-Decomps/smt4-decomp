#include "common.h"

extern "C" {

void FUN_001003ea(void *object, s32 a, s32 b);
void FUN_001028f4(void *object, s32 a, s32 b);

typedef struct Dispatcher {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 variant;    /* nonzero selects the alternate handler */
} Dispatcher;

/* Forwards to the alternate handler when `variant` is set and to the default one otherwise; always succeeds. */
u32 FUN_001003bc(Dispatcher *object, s32 a, s32 b)
{
    if (object->variant != 0) {
        FUN_001028f4(object, a, b);
    } else {
        FUN_001003ea(object, a, b);
    }
    return 1;
}

} /* extern "C" */
