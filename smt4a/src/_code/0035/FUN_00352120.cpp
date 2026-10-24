#include "common.h"

struct Object00352120 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 value;
};

extern "C" {

/* Stores the word at 0x30. */
void FUN_00352120(Object00352120 *object, u32 value)
{
    object->value = value;
}

} /* extern "C" */
