#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 unk34[1];
} Obj;

extern Obj *g_placeWin;

s32 FUN_001dd8f0(void)
{
    if (g_placeWin != NULL) {
        vec2GetXInt((UiSpriteState *)g_placeWin->unk34);
    }
}

} /* extern "C" */
