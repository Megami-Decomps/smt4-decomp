/* NON_MATCHING: command writes recovered; title render-stack addressing and literal/register grouping still differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern void* g_titleScene;
extern u32* DAT_004729e0;
extern u32 DAT_004729e4;
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
    u32* commands = DAT_004729e0;
    commands[DAT_004729e4] = mode;
    commands[DAT_004729e4 + 1] = 0xF0065;
    DAT_004729e4 += 2;
    if (mode != 0) {
        TitleRenderStates* title = static_cast<TitleRenderStates*>(g_titleScene);
        commands[DAT_004729e4] = title->stacks[0].entries[title->stacks[0].count];
        commands[DAT_004729e4 + 1] = 0xF0066;
        DAT_004729e4 += 2;
        title = static_cast<TitleRenderStates*>(g_titleScene);
        commands[DAT_004729e4] = title->stacks[1].entries[title->stacks[1].count];
        commands[DAT_004729e4 + 1] = 0xF0067;
        DAT_004729e4 += 2;
    }
    asdModelCommandBlockRelease();
}
}
