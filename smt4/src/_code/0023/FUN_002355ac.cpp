#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x33];
    /* 0x33 */ u8 unk33;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} DAT_0043e188;

void FUN_002355ac(u8 value)
{
    DAT_0043e188.target->unk33 = value;
}

} /* extern "C" */
