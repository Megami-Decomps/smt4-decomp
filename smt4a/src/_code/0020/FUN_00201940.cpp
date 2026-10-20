#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 count;
} Holder;

/* Increments the word at 0x1C. */
void FUN_00201940(Holder *object)
{
    object->count = object->count + 1;
}

} /* extern "C" */
