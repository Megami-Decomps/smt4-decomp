/* NON_MATCHING: cached-state array addressing, boolean mask lowering and command scratch registers differ. */
#include "title/titleMain.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void cursorResetFromParam();
void asdModelCommandBlockRelease();

void renderStatesSubmitCached(s32 synchronize)
{
    cursorResetFromParam();
    if (synchronize != 0) {
        u32 *buffer = g_modelCommandBuffer;
        buffer[g_modelCommandWordCount] = 1;
        buffer[g_modelCommandWordCount + 1] = 0xF0111;
        g_modelCommandWordCount += 2;
        buffer[g_modelCommandWordCount] = 1;
        buffer[g_modelCommandWordCount + 1] = 0xF0110;
        g_modelCommandWordCount += 2;
    }
    u32 *buffer = g_modelCommandBuffer;
    RenderCtx *scene = g_titleScene;
    u32 colorState = scene->stacks[RENDER_STACK_G].entries[scene->stacks[RENDER_STACK_G].count] & 0xF00;
    u32 colorAccess = colorState != 0 ? 0xF : 0;
    buffer[g_modelCommandWordCount] = colorAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0112;
    g_modelCommandWordCount += 2;
    buffer[g_modelCommandWordCount] = colorAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0113;
    g_modelCommandWordCount += 2;
    scene = g_titleScene;
    u32 depthState = scene->stacks[RENDER_STACK_A].entries[scene->stacks[RENDER_STACK_A].count];
    u32 testState = scene->stacks[RENDER_STACK_E].entries[scene->stacks[RENDER_STACK_E].count];
    u32 enabledTests = (testState & 1) != 0 ? testState : 0;
    u32 readAccess = ((enabledTests & 0x30) != 0 && (testState & 0xF0000000) != 0) |
        (static_cast<u32>(colorState != 0 || (depthState & 0x1000) != 0) << 1);
    buffer[g_modelCommandWordCount] = readAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0114;
    g_modelCommandWordCount += 2;
    scene = g_titleScene;
    u32 writeMask = scene->stacks[RENDER_STACK_F].entries[scene->stacks[RENDER_STACK_F].count];
    u32 writeAccess = ((enabledTests & 0xFF00) != 0 && writeMask != 0) |
        (static_cast<u32>((depthState & 0x1000) != 0) << 1);
    buffer[g_modelCommandWordCount] = writeAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0115;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
