#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x2F];
    /* 0x2F */ u8 unk2F;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} DAT_0043e188;

void FUN_0023553c(u8 value)
{
    if (DAT_0043e188.target != NULL) {
        DAT_0043e188.target->unk2F = value;
    }
}

} /* extern "C" */
