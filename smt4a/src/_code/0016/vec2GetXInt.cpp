#include "common.h"

extern "C" {

typedef struct Fixed {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 value;
} Fixed;

/* Returns the word at 0xC as an integer (its fixed-point value shifted down by 12 bits). */
s32 vec2GetXInt(Fixed *object)
{
    return object->value >> 12;
}

} /* extern "C" */
