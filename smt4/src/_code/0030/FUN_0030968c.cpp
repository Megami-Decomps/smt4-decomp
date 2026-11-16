/* NON_MATCHING: the alpha-mode test matches; retail addresses the blend stack as stacks[5] of the 0x11EC bank (index added before the literal 0x11EC offset) while the build folds the whole constant. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_00248ae8(s32);
}

/* Emit blend-state and alpha-mode commands for the title scene. */
extern "C" void FUN_0030968c(u32 flags)
{
    cursorResetFromParam();
    u32 *commands = g_modelCommandBuffer;
    const RenderStateStack *blend = &g_titleScene->additional.stackG;
    commands[g_modelCommandWordCount] = blend->entries[blend->count] | (flags & ~0xF00);
    commands[g_modelCommandWordCount + 1] = 0xF0107;
    g_modelCommandWordCount += 2;
    u32 alphaMode = (flags & 0x70) >> 4;
    if (alphaMode != 0 && alphaMode != 1) {
        alphaMode = alphaMode == 6 || alphaMode == 7 ? 2 : 3;
    }
    commands[g_modelCommandWordCount] = alphaMode << 24;
    commands[g_modelCommandWordCount + 1] = 0x80126;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
    FUN_00248ae8(1);
}
