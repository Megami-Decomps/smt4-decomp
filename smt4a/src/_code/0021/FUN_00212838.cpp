#include "common.h"

extern "C" {

void FUN_002e2b50(void *object, s32 code);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 count;
} Holder;

/* Calls FUN_002e2b50 with code 2, counts the call and returns 1. */
u32 FUN_00212838(Holder *object)
{
    FUN_002e2b50(object, 2);
    object->count = object->count + 1;
    return 1;
}

} /* extern "C" */
