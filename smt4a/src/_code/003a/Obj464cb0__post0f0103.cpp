#include "classes/Obj464cb0.h"
#include "gfx/PicaCommand.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void renderStatesSubmitCached(s32 synchronize);
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
}

/* Writes this object's word to the GPU's blend colour register through the model command buffer,
 * then submits the block and the cached render states (without a framebuffer flush). */
void Obj464cb0::post0f0103()
{
    cursorResetFromParam();
    g_modelCommandBuffer[g_modelCommandWordCount] = (u32)this;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = PICA_COMMAND_WRITE_ALL_BYTES | PICA_REG_BLEND_COLOR;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
    renderStatesSubmitCached(0);
}
