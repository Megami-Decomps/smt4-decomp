#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *DAT_0044e190;

u8 FUN_00293a88(void)
{
    return DAT_0044e190->unk400 != 0x12 && DAT_0044e190->unk400 != 0x14;
}

} /* extern "C" */
