#include "common.h"

struct Object003abad4 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 enabled;
    /* 0x18 */ u32 value;
};

extern "C" {

/* Sets the flag at 0x14 and clears the word after it. */
void FUN_003abad4(Object003abad4 *object)
{
    object->enabled = 1;
    object->value = 0;
}

} /* extern "C" */
