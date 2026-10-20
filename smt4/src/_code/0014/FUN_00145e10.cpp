#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
} Target;

extern struct {
    u8 unk00[4];
    Target *unk04;
} DAT_0044ea58;

u32 FUN_00145e10(void)
{
    return DAT_0044ea58.unk04->unk84;
}

} /* extern "C" */
