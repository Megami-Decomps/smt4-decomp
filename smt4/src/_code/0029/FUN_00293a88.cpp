#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *g_statusDown;

u8 FUN_00293a88(void)
{
    return g_statusDown->unk400 != 0x12 && g_statusDown->unk400 != 0x14;
}

} /* extern "C" */
