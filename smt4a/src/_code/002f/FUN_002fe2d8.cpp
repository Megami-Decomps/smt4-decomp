#include "common.h"

struct Object002fe2d8 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
};

extern "C" {

/* Stores the word at 0x24. */
void FUN_002fe2d8(Object002fe2d8 *object, u32 value)
{
    object->value = value;
}

} /* extern "C" */
