#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 value;
} Holder;

/* Returns whether the word at 4 is nonzero. */
u8 FUN_001d25dc(Holder *object)
{
    return object->value != 0;
}

} /* extern "C" */
