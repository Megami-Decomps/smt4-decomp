#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u32 value;
} Holder;

/* Returns the word at 0x90. */
u32 FUN_00123bd2(Holder *object)
{
    return object->value;
}

} /* extern "C" */
