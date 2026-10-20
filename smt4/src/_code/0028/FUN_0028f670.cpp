#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *g_unite;

u8 FUN_0028f670(void)
{
    int value = 0;

    if (g_unite != NULL) {
        value = g_unite->unk400;
    }
    return g_unite == NULL || value == 0x24;
}

} /* extern "C" */
