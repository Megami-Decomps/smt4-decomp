#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x47E];
    /* 0x47E */ u16 unk47E;
} Obj;

extern Obj *g_statusDown;

void FUN_00215b40(u16 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk47E = value;
    }
}

} /* extern "C" */
