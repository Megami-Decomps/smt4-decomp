#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 first;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ u32 second;
} Holder;

/* Clears the words at 0x10 and 0x18. */
void FUN_002e74bc(Holder *object)
{
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
