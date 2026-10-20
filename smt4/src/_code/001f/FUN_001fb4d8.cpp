#include "common.h"

extern "C" {

typedef struct Obj001fb4d8 {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ s8 value;
} Obj001fb4d8;

extern Obj001fb4d8 *DAT_00448c20;

/* Returns the signed byte at +9 of the object DAT_00448c20 points to. */
s8 FUN_001fb4d8(void)
{
    return DAT_00448c20->value;
}

} /* extern "C" */
