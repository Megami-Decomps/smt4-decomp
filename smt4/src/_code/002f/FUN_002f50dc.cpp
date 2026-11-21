/* NON_MATCHING: command writes recovered; title render-stack addressing and literal/register grouping still differ. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern u32* g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void asdModelCommandBlockRelease(void);
void cursorResetFromParam(u32 mode);

// Write the cursor mode and current title render states into the model command stream.
void FUN_002f50dc(u32 mode)
{
    cursorResetFromParam(mode);
    u32* commands = g_modelCommandBuffer;
    commands[g_modelCommandWordCount] = mode;
    commands[g_modelCommandWordCount + 1] = 0xF0065;
    g_modelCommandWordCount += 2;
    if (mode != 0) {
        commands[g_modelCommandWordCount] = renderCtxStackTop(g_titleScene, RENDER_STACK_SCISSOR_MINIMUM);
        commands[g_modelCommandWordCount + 1] = 0xF0066;
        g_modelCommandWordCount += 2;
        commands[g_modelCommandWordCount] = renderCtxStackTop(g_titleScene, RENDER_STACK_SCISSOR_MAXIMUM);
        commands[g_modelCommandWordCount + 1] = 0xF0067;
        g_modelCommandWordCount += 2;
    }
    asdModelCommandBlockRelease();
}
}
