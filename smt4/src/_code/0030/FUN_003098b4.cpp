/* NON_MATCHING: scissor stack addressing and packet constant scheduling differ from retail. */
#include "camp/RenderCtx.h"

namespace {
/* Local view extends past the recovered shared render context. */
struct ScissorContextView {
    u8 unk0000[0x130C];
    RenderStateStack enabled;
    u8 unk132C[0x20];
    RenderStateStack extent;
};
}
extern "C" {
extern ScissorContextView *g_titleScene;
extern u32 *DAT_004729e0;
extern u32 DAT_004729e4;
u32 asdGxGetCurrentPresetKind(void);
u32 FUN_002ae210(u32 kind);
u32 FUN_002ae1e8(u32 kind);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);

/* Emit the clamped inclusive scissor rectangle, or the full render-target rectangle. */
void FUN_003098b4(u32 origin)
{
    u32 height = FUN_002ae210(asdGxGetCurrentPresetKind());
    u32 width = FUN_002ae1e8(asdGxGetCurrentPresetKind());
    cursorResetFromParam();
    u32 start, end;
    if (g_titleScene->enabled.entries[g_titleScene->enabled.count] != 0) {
        u32 x = origin >> 16;
        u32 y = origin & 0xFFFF;
        u32 left = x < width ? x : width - 1;
        u32 top = y < height ? y : height - 1;
        start = left | (top << 16);
        u32 extent = g_titleScene->extent.entries[g_titleScene->extent.count];
        u32 right = x + (extent >> 16) - 1;
        if (static_cast<s32>(right) < 0)
            right = 0;
        else if (right >= width)
            right = width - 1;
        u32 bottom = y + (extent & 0xFFFF) - 1;
        if (static_cast<s32>(bottom) < 0)
            bottom = 0;
        else if (bottom >= height)
            bottom = height - 1;
        end = right | (bottom << 16);
    } else {
        start = 0;
        end = (width - 1) | ((height - 1) << 16);
    }
    u32 *packet = DAT_004729e0;
    packet[DAT_004729e4] = start;
    packet[DAT_004729e4 + 1] = 0xF0066;
    DAT_004729e4 += 2;
    packet[DAT_004729e4] = end;
    packet[DAT_004729e4 + 1] = 0xF0067;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
}
