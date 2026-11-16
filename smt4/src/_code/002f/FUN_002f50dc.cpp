/* NON_MATCHING: command writes recovered; title render-stack addressing and literal/register grouping still differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern void* g_titleScene;
extern u32* g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void asdModelCommandBlockRelease(void);
void cursorResetFromParam(u32 mode);

// Write the cursor mode and current title render states into the model command stream.
void FUN_002f50dc(u32 mode)
{
    // These stacks lie beyond the known TitleJobWork prefix; do not grow that shared type.
    struct TitleRenderStates {
        /* 0x0000 */ u8 unk0000[0x132C];
        /* 0x132C */ RenderStateStack stacks[2];
    };
    cursorResetFromParam(mode);
    u32* commands = g_modelCommandBuffer;
    commands[g_modelCommandWordCount] = mode;
    commands[g_modelCommandWordCount + 1] = 0xF0065;
    g_modelCommandWordCount += 2;
    if (mode != 0) {
        TitleRenderStates* title = static_cast<TitleRenderStates*>(g_titleScene);
        commands[g_modelCommandWordCount] = title->stacks[0].entries[title->stacks[0].count];
        commands[g_modelCommandWordCount + 1] = 0xF0066;
        g_modelCommandWordCount += 2;
        title = static_cast<TitleRenderStates*>(g_titleScene);
        commands[g_modelCommandWordCount] = title->stacks[1].entries[title->stacks[1].count];
        commands[g_modelCommandWordCount + 1] = 0xF0067;
        g_modelCommandWordCount += 2;
    }
    asdModelCommandBlockRelease();
}
}
