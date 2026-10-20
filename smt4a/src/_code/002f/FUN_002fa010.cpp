#include "common.h"

extern "C" {

void FUN_0031011e(void *object, s32 offset);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 base;
} Holder;

/* Calls FUN_0031011e(object, base + `offset`). */
void FUN_002fa010(Holder *object, s32 offset)
{
    FUN_0031011e(object, object->base + offset);
}

} /* extern "C" */
