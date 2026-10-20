#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 value;
} Holder;

/* Sets the word at 0x1C to -1. */
void FUN_00197e38(Holder *object)
{
    object->value = 0xFFFFFFFF;
}

} /* extern "C" */
