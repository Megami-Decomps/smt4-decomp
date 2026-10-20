#include "common.h"

extern "C" {

void bufReallocate(void *object, s32 offset);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 base;
} Holder;

/* Calls bufReallocate(object, base + `offset`). */
void FUN_002fa010(Holder *object, s32 offset)
{
    bufReallocate(object, object->base + offset);
}

} /* extern "C" */
