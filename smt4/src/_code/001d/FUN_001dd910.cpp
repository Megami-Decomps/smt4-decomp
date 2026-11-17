#include "ui/UiSpriteApi.h"
#include "common.h"
#include "code/Code001d_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 unk34[1];
} Obj;

extern Obj *g_placeWin;

void FUN_001dd910(void)
{
    if (g_placeWin != NULL) {
        vec2GetYInt((UiSpriteState *)g_placeWin->unk34);
    }
}

} /* extern "C" */
