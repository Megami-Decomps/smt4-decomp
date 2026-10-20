#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x3FC];
    /* 0x3FC */ u8 unk3FC;
} Obj;

extern Obj *g_statusDown;

u8 FUN_00293aac(void)
{
    return g_statusDown->unk3FC;
}

} /* extern "C" */
