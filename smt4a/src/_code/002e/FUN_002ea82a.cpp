#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ s32 count;
} Holder;

/* Increments the count at 0x80. */
void FUN_002ea82a(Holder *object)
{
    object->count = object->count + 1;
}

} /* extern "C" */
