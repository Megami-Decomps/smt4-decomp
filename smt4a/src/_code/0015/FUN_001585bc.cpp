#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u8 unk08[0x40];
    /* 0x48 */ u16 half48;
    /* 0x4A */ u16 half4A;
} Holder;

/* Clears the two leading words and the two halfwords at 0x48 and 0x4A. */
void FUN_001585bc(Holder *object)
{
    object->first = 0;
    object->second = 0;
    object->half48 = 0;
    object->half4A = 0;
}

} /* extern "C" */
