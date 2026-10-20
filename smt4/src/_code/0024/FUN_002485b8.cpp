#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x7D];
    /* 0x7D */ u8 unk7D;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} DAT_0043e188;

u8 FUN_002485b8(void)
{
    return DAT_0043e188.target->unk7D != 0;
}

} /* extern "C" */
