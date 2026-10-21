#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 unk430;
} Obj;

extern Obj *g_unite;

u8 uniteNotBusy(void)
{
    u8 value = 0;

    if (g_unite != NULL) {
        value = g_unite->unk430;
    }
    return g_unite == NULL || value == 0;
}

} /* extern "C" */
