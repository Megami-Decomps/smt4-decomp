/* NON_MATCHING: stack indices fold into direct base offsets, command constants coalesce and the depth-access predicate short-circuits; 125 vs 114 instructions. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
extern "C" {
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void cursorResetFromParam();
void asdModelCommandBlockRelease();
}
namespace {
inline void appendRegister(u32 *commands, u32 value, u32 header)
{
    commands[g_modelCommandWordCount] = value;
    commands[g_modelCommandWordCount + 1] = header;
    g_modelCommandWordCount += 2;
}
}
extern "C" {
// Restore color/depth buffer access registers from the current render-state stacks.
void renderStatesSubmitCached(s32 invalidate)
{
    cursorResetFromParam();
    u32 *commands = g_modelCommandBuffer;
    if (invalidate) {
        appendRegister(commands, 1, 0xf0111);
        appendRegister(commands, 1, 0xf0110);
    }
    commands = g_modelCommandBuffer;
    u32 colorMask = renderCtxStackTop(g_renderCtx, RENDER_STACK_G) & 0xf00;
    appendRegister(commands, colorMask ? 15 : 0, 0xf0112);
    appendRegister(commands, colorMask ? 15 : 0, 0xf0113);
    u32 rasterState = renderCtxStackTop(g_renderCtx, RENDER_STACK_A);
    u32 depthState = renderCtxStackTop(g_renderCtx, RENDER_STACK_E);
    u32 enabledDepth = depthState & -(depthState & 1);
    appendRegister(commands, static_cast<u32>((enabledDepth & 0x30) && (depthState & 0xf0000000)) |
        (static_cast<u32>(colorMask || (rasterState & 0x1000)) << 1), 0xf0114);
    appendRegister(commands, static_cast<u32>((enabledDepth & 0xff00) && renderCtxStackTop(g_renderCtx, RENDER_STACK_F)) |
        (static_cast<u32>((rasterState & 0x1000) != 0) << 1), 0xf0115);
    asdModelCommandBlockRelease();
}
}
