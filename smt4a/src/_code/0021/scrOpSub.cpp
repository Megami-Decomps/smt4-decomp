#include "common.h"

extern "C" {

void scrFloatOp(void *object, s32 code);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 count;
} Holder;

/* Calls scrFloatOp with code 1, counts the call and returns 1. */
u32 scrOpSub(Holder *object)
{
    scrFloatOp(object, 1);
    object->count = object->count + 1;
    return 1;
}

} /* extern "C" */
