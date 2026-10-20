#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *g_statusDown;

u8 statusScreenIsClosed(void)
{
    int value = 0;

    if (g_statusDown != NULL) {
        value = g_statusDown->unk400;
    }
    return g_statusDown == NULL || value == 0;
}

} /* extern "C" */
