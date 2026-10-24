#include "common.h"

struct Object004a5328 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 enabled;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 kind;
    /* 0x18 */ u32 value;
};

extern "C" {

/* Enables the object with kind eight and clears the value. */
void FUN_004a5328(Object004a5328 *object)
{
    object->enabled = 1;
    object->kind = 8;
    object->value = 0;
}

} /* extern "C" */
