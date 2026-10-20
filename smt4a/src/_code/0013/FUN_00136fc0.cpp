#include "common.h"

extern "C" {

typedef struct TitleDraw {
    /* 0x00 */ s8 hidden;
    /* 0x01 */ s8 enabled;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 commandList;
} TitleDraw;

extern TitleDraw g_titleFlags;
extern u32 g_renderCtx;

extern s32 FUN_00152f54(void);
extern void FUN_00145e24(u32 scene, u32 arg);
extern s32 FUN_001696f4(void);
extern void asdGxCommandListBegin(u32 commandList);

/* Per-frame title step: forwards FUN_00152f54's value to the scene and begins the draw command list when enabled; returns 0. */
u32 FUN_00136fc0(void)
{
    if (FUN_00152f54() != 0) {
        FUN_00145e24(g_renderCtx, FUN_00152f54());
    }
    if (g_titleFlags.hidden == 0 && g_titleFlags.enabled != 0 && FUN_001696f4() == 1) {
        asdGxCommandListBegin(g_titleFlags.commandList);
    }
    return 0;
}

} /* extern "C" */
