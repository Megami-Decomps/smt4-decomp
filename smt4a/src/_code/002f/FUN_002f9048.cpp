#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 value;
} Holder;

/* Returns 1 when the word at 0x14 is 0. */
u32 FUN_002f9048(Holder *object)
{
    if (object->value != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
