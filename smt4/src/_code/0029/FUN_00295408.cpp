#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x53C];
    /* 0x53C */ u32 unk53C;
} Obj;

extern Obj *g_statusDown;

u32 FUN_00295408(void)
{
    return g_statusDown->unk53C;
}

} /* extern "C" */
