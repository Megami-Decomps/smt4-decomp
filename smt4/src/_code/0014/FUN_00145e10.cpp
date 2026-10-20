#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
} Target;

extern struct {
    u8 unk00[4];
    Target *unk04;
} g_asdCamera;

u32 FUN_00145e10(void)
{
    return g_asdCamera.unk04->unk84;
}

} /* extern "C" */
