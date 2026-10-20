#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x2392];
    /* 0x2392 */ u8 unk2392;
} Obj;

extern Obj *g_statusDown;

void FUN_0026d654(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk2392 = value;
    }
}

} /* extern "C" */
