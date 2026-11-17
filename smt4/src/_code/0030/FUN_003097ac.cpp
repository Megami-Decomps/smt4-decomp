/* NON_MATCHING: retail 64 vs built 55 rows; scissor stack addressing, clamp branches, and output registers differ. */
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 asdGxGetCurrentPresetKind(void);
u32 FUN_002ae1e8(u32 kind);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;

void FUN_003097ac(u32 extent)
{
    u32 width = FUN_002ae210(asdGxGetCurrentPresetKind());
    u32 height = FUN_002ae1e8(asdGxGetCurrentPresetKind());
    cursorResetFromParam();
    u32 command;
    RenderCtx *context = g_titleScene;
    if (context->scissor.entries[context->scissor.count] == 0) {
        command = 0;
    } else {
        u32 origin = context->scissorMinimum.entries[context->scissorMinimum.count];
        u32 bottom = (origin >> 16) + (extent >> 16) - 1;
        if (static_cast<s32>(bottom) < 0)
            bottom = 0;
        else if (height <= bottom)
            bottom = height - 1;
        u32 right = (origin & 0xFFFF) + (extent & 0xFFFF) - 1;
        if (static_cast<s32>(right) < 0) {
            command = 0;
        } else {
            if (right >= width)
                right = width - 1;
            command = right << 16;
        }
        command |= bottom;
    }
    u32 *buffer = g_modelCommandBuffer;
    g_modelCommandBuffer[g_modelCommandWordCount] = command;
    buffer[g_modelCommandWordCount + 1] = 0xF0067;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
