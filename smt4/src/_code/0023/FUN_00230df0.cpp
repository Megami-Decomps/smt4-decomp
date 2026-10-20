#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u8 unk32;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} DAT_0043e188;

void FUN_00230df0(u8 value)
{
    DAT_0043e188.target->unk32 = value;
}

} /* extern "C" */
