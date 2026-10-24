#include "common.h"

struct Object00383558 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
};

extern "C" {

/* Stores the word at 0x24. */
void FUN_00383558(Object00383558 *object, u32 value)
{
    object->value = value;
}

} /* extern "C" */
