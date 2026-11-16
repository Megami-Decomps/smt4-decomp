/* NON_MATCHING: cached-state array addressing, boolean mask lowering and command scratch registers differ. */
#include "title/titleMain.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern TitleScene *g_titleScene;
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void cursorResetFromParam();
void asdModelCommandBlockRelease();

void FUN_00248ae8(s32 synchronize)
{
    struct CachedRenderView {
        u8 unk000[0x11EC];
        RenderStateStack states[6];
    };
    typedef char CachedRenderViewOffsetCheck[offsetof(CachedRenderView, states) == 0x11EC ? 1 : -1];
    cursorResetFromParam();
    if (synchronize != 0) {
        u32 *buffer = g_modelCommandBuffer;
        buffer[g_modelCommandWordCount] = 1;
        buffer[g_modelCommandWordCount + 1] = 0xF0111;
        g_modelCommandWordCount += 2;
        buffer[g_modelCommandWordCount] = 1;
        buffer[g_modelCommandWordCount + 1] = 0xF0110;
        g_modelCommandWordCount += 2;
    }
    u32 *buffer = g_modelCommandBuffer;
    CachedRenderView *scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 colorState = scene->states[5].entries[scene->states[5].count] & 0xF00;
    u32 colorAccess = colorState != 0 ? 0xF : 0;
    buffer[g_modelCommandWordCount] = colorAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0112;
    g_modelCommandWordCount += 2;
    buffer[g_modelCommandWordCount] = colorAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0113;
    g_modelCommandWordCount += 2;
    scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 depthState = scene->states[3].entries[scene->states[3].count];
    u32 testState = scene->states[1].entries[scene->states[1].count];
    u32 enabledTests = (testState & 1) != 0 ? testState : 0;
    u32 readAccess = ((enabledTests & 0x30) != 0 && (testState & 0xF0000000) != 0) |
        (static_cast<u32>(colorState != 0 || (depthState & 0x1000) != 0) << 1);
    buffer[g_modelCommandWordCount] = readAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0114;
    g_modelCommandWordCount += 2;
    scene = reinterpret_cast<CachedRenderView *>(g_titleScene);
    u32 writeMask = scene->states[2].entries[scene->states[2].count];
    u32 writeAccess = ((enabledTests & 0xFF00) != 0 && writeMask != 0) |
        (static_cast<u32>((depthState & 0x1000) != 0) << 1);
    buffer[g_modelCommandWordCount] = writeAccess;
    buffer[g_modelCommandWordCount + 1] = 0xF0115;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
