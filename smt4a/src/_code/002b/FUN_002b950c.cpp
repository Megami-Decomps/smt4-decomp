#include "common.h"
#include "code/Code002b.h"

extern "C" {

typedef struct Obj002b950c {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ s8 value;
} Obj002b950c;

extern Obj002b950c *DAT_005821a0;

/* Returns the signed byte at +9 of the object DAT_005821a0 points to. */
s8 FUN_002b950c(void)
{
    return DAT_005821a0->value;
}

} /* extern "C" */
