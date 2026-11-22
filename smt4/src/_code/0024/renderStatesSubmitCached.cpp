/* NON_MATCHING: 181 lines: retail loads every command header from the pool (no 0xF0110/0xF0113 derived from their
 * neighbours), rematerialises the invalidate block's 1, and builds the stencil bits as `mov rN, #1 ... moveq rN, #0`;
 * the colour and depth stack reads, the late-inlined stack-top address forms and the statement order agree. */
#include "title/titleMain.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void cursorResetFromParam();
void asdModelCommandBlockRelease();
}

/* The current state of the title scene's render-state stack `kind` (four calls; plain static, inlined late:
 * retail forms each stack address from the stack's own count offset). */
static s32 sceneStackTop(s32 kind)
{
    return renderCtxStackTop(g_titleScene, kind);
}

extern "C" {
/* Restores the colour and depth buffer access registers from the current render-state stacks. */
void renderStatesSubmitCached(s32 invalidate)
{
    cursorResetFromParam();
    if (invalidate) {
        u32 *commands = g_modelCommandBuffer;
        commands[g_modelCommandWordCount] = 1;
        commands[g_modelCommandWordCount + 1] = 0xF0111;
        g_modelCommandWordCount += 2;
        commands[g_modelCommandWordCount] = 1;
        commands[g_modelCommandWordCount + 1] = 0xF0110;
        g_modelCommandWordCount += 2;
    }
    u32 *commands = g_modelCommandBuffer;
    u32 colorMask = sceneStackTop(RENDER_STACK_G) & 0xf00;
    u32 colorRead = 0;
    u32 colorWrite = 0;
    if (colorMask) {
        colorRead = 15;
        colorWrite = 15;
    }
    commands[g_modelCommandWordCount] = colorRead;
    commands[g_modelCommandWordCount + 1] = 0xF0112;
    g_modelCommandWordCount += 2;
    commands[g_modelCommandWordCount] = colorWrite;
    commands[g_modelCommandWordCount + 1] = 0xF0113;
    g_modelCommandWordCount += 2;
    u32 rasterState = sceneStackTop(RENDER_STACK_A);
    bool depthRead = colorMask || (rasterState & 0x1000);
    u32 testState = sceneStackTop(RENDER_STACK_E);
    bool stencilRead = ((testState & -(testState & 1)) & 0x30) && (testState & 0xf0000000);
    commands[g_modelCommandWordCount] = (u32)stencilRead | ((u32)depthRead << 1);
    commands[g_modelCommandWordCount + 1] = 0xF0114;
    g_modelCommandWordCount += 2;
    u32 writeMask = sceneStackTop(RENDER_STACK_F);
    bool stencilWrite = ((testState & -(testState & 1)) & 0xff00) && writeMask;
    bool depthWrite = (rasterState & 0x1000) != 0;
    commands[g_modelCommandWordCount] = (u32)stencilWrite | ((u32)depthWrite << 1);
    commands[g_modelCommandWordCount + 1] = 0xF0115;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
