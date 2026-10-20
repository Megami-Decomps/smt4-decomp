#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 count;
} Holder;

/* Increments the word at 8. */
void FUN_001ab878(Holder *object)
{
    object->count = object->count + 1;
}

} /* extern "C" */
