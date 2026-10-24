#include "common.h"

struct Object00290c04 {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u32 value;
};

extern "C" {

/* Clears the word at 0x2c. */
void FUN_00290c04(Object00290c04 *object)
{
    object->value = 0;
}

} /* extern "C" */
