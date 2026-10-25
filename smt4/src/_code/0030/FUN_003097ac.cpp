/* NON_MATCHING: retail 64 vs built 55 rows; scissor stack addressing, clamp branches, and output registers differ. */
#include "camp/RenderCtx.h"

extern "C" {
s32 asdGxGetCurrentPresetKind(void);
u32 FUN_002ae210(s32);
u32 FUN_002ae1e8(u32 kind);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern u32 DAT_004729e4;

void FUN_003097ac(u32 extent)
{
    // These stacks are beyond the shared RenderCtx prefix.
    struct ScissorContextView {
        u8 unk0000[0x130C];
        RenderStateStack enabled;
        RenderStateStack origin;
    };
    extern ScissorContextView *g_titleScene;
    u32 width = FUN_002ae210(asdGxGetCurrentPresetKind());
    u32 height = FUN_002ae1e8(asdGxGetCurrentPresetKind());
    cursorResetFromParam();
    u32 command;
    ScissorContextView *context = g_titleScene;
    if (context->enabled.entries[context->enabled.count] == 0) {
        command = 0;
    } else {
        u32 origin = context->origin.entries[context->origin.count];
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
    u32 *buffer = DAT_004729e0;
    DAT_004729e0[DAT_004729e4] = command;
    buffer[DAT_004729e4 + 1] = 0xF0067;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
}
