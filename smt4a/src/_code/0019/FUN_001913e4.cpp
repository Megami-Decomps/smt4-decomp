#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 a;
    /* 0x3C */ u32 b;
    /* 0x40 */ u32 c;
} Triple;

/* Clears the three words at 0x38, 0x3C and 0x40. */
void FUN_001913e4(Triple *object)
{
    object->a = 0;
    object->b = 0;
    object->c = 0;
}

} /* extern "C" */
