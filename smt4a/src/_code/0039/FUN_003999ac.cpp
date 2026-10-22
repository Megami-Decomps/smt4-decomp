/* NON_MATCHING: retail 64 vs built 55 rows; scissor stack addressing, clamp branches, and output registers differ. */
#include "camp/RenderCtx.h"

extern "C" {
s32 asdGxGetPresetIndex(void);
u32 FUN_00169d8c(s32);
u32 FUN_00169db4(s32);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_005b3fe4;
extern u32 DAT_005b3fe8;

void FUN_003999ac(u32 extent)
{
    // These stacks are beyond the shared RenderCtxA prefix.
    struct ScissorContextView {
        u8 unk0000[0x1318];
        RenderStateStack enabled;
        RenderStateStack origin;
    };
    extern ScissorContextView *g_renderCtx;
    u32 width = FUN_00169d8c(asdGxGetPresetIndex());
    u32 height = FUN_00169db4(asdGxGetPresetIndex());
    cursorResetFromParam();
    u32 command;
    ScissorContextView *context = g_renderCtx;
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
    u32 *buffer = DAT_005b3fe4;
    DAT_005b3fe4[DAT_005b3fe8] = command;
    buffer[DAT_005b3fe8 + 1] = 0xF0067;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}
}
