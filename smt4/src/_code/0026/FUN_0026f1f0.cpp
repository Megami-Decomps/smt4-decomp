#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0xCF8];
    /* 0xCF8 */ u32 unkCF8;
} Scene;

extern Scene *DAT_0043daa8;

u32 FUN_0026f1f0(void)
{
    return DAT_0043daa8->unkCF8;
}

} /* extern "C" */
