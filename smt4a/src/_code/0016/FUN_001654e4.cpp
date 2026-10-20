#include "common.h"

extern "C" {

typedef struct Fixed {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 value;
} Fixed;

/* Returns the word at 0x10 as an integer (its fixed-point value shifted down by 12 bits). */
s32 FUN_001654e4(Fixed *object)
{
    return object->value >> 12;
}

} /* extern "C" */
