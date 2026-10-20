#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 value;
} Holder;

/* Returns whether the word at 0x18 is nonzero. */
u8 FUN_00156bec(Holder *object)
{
    return object->value != 0;
}

} /* extern "C" */
