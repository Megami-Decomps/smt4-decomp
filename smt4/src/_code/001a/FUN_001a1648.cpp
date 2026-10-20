#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} DAT_0043e188;

void FUN_001a1648(void)
{
    Target *target = DAT_0043e188.target;

    if (DAT_0043e188.target != NULL) {
        target->unk30 = 1;
    }
    target->unk31 = 1;
}

} /* extern "C" */
