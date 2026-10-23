/* NON_MATCHING: cached-state array addressing, boolean mask lowering and command scratch registers differ. */
#include "title/titleMain.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern TitleScene *g_titleScene;
extern u32 *DAT_004729e0;
extern u32 DAT_004729e4;
void cursorResetFromParam();
void asdModelCommandBlockRelease();

void FUN_00248ae8(s32 synchronize)
{
    struct CachedRenderView {
        TitleScene prefix;
        u8 unk52C[0x11EC - sizeof(TitleScene)];
        RenderCtxCachedState states[6];
    };
    typedef char CachedRenderViewOffsetCheck[offsetof(CachedRenderView, states) == 0x11EC ? 1 : -1];
    cursorResetFromParam();
    if (synchronize != 0) {
        u32 *buffer = DAT_004729e0;
        buffer[DAT_004729e4] = 1;
        buffer[DAT_004729e4 + 1] = 0xF0111;
        DAT_004729e4 += 2;
        buffer[DAT_004729e4] = 1;
        buffer[DAT_004729e4 + 1] = 0xF0110;
        DAT_004729e4 += 2;
    }
    u32 *buffer = DAT_004729e0;
    CachedRenderView *scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 colorState = scene->states[5].values[scene->states[5].index] & 0xF00;
    u32 colorAccess = colorState != 0 ? 0xF : 0;
    buffer[DAT_004729e4] = colorAccess;
    buffer[DAT_004729e4 + 1] = 0xF0112;
    DAT_004729e4 += 2;
    buffer[DAT_004729e4] = colorAccess;
    buffer[DAT_004729e4 + 1] = 0xF0113;
    DAT_004729e4 += 2;
    scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 depthState = scene->states[3].values[scene->states[3].index];
    u32 testState = scene->states[1].values[scene->states[1].index];
    u32 enabledTests = (testState & 1) != 0 ? testState : 0;
    u32 readAccess = ((enabledTests & 0x30) != 0 && (testState & 0xF0000000) != 0) |
        (static_cast<u32>(colorState != 0 || (depthState & 0x1000) != 0) << 1);
    buffer[DAT_004729e4] = readAccess;
    buffer[DAT_004729e4 + 1] = 0xF0114;
    DAT_004729e4 += 2;
    scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 writeMask = scene->states[2].values[scene->states[2].index];
    u32 writeAccess = ((enabledTests & 0xFF00) != 0 && writeMask != 0) |
        (static_cast<u32>((depthState & 0x1000) != 0) << 1);
    buffer[DAT_004729e4] = writeAccess;
    buffer[DAT_004729e4 + 1] = 0xF0115;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
}
