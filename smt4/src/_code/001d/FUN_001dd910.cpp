#include "common.h"

extern "C" {

int vec2GetYInt(void *obj);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 unk34[1];
} Obj;

extern Obj *g_placeWin;

void FUN_001dd910(void)
{
    if (g_placeWin != NULL) {
        vec2GetYInt(g_placeWin->unk34);
    }
}

} /* extern "C" */
