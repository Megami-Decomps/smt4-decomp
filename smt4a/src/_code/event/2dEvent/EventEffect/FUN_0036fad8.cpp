/* NON_MATCHING: snow-noise allocation, stereo tasks and textures restored; compiler retains allocated work and lays out texture branches differently. */
#include "event/2dEvent/SnowNoise.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f430;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 FUN_002a4488();
u32 FUN_002a4334();
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 flags, u32 stack,
                            u32 (*update)(), u32 destroy, void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);
void *textureGetIndexedResource(u32 texture);
void asdTMTexTableLoadTmx(u32 texture, u32 flags);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexLoadMainHeap(u32 table, u32 node);

// Initialize the snow-noise effect, its two stereo draw tasks and shared texture requests.
void FUN_0036fad8(u8 style)
{
    if (g_eventEffect.unk08 == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 1031);
        g_eventEffect.unk08 = asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventSnowNoiseWork), 1);
    }
    EventSnowNoiseWork *work = static_cast<EventSnowNoiseWork *>(g_eventEffect.unk08);
    for (u32 word = 0; word < sizeof(*work) / sizeof(u32); ++word)
        reinterpret_cast<u32 *>(work)[word] = 0;
    u32 process = asdProcessCreateSimple("EvtSnowNoise Calc", 3, 0, 0, FUN_002a4488, 0, NULL);
    work->job = process;
    taskCreateDraw("EvtSnowNoise DrawUpLeft", 0x85, 0, 0, FUN_002a4334, 0, NULL, process);
    taskCreateDraw("EvtSnowNoise DrawUpRight", 0xE1, 0, 0, FUN_002a4334, 0, NULL, work->job);
    work->frame = 0;
    work->opacity = 0.0f;
    work->complete = 0;
    work->style = style;
    if (textureGetIndexedResource(0x35) != NULL) {
        ++g_eventEffect.textureUsers;
    } else {
        asdTMTexTableLoadTmx(0x35, 0);
        g_eventEffect.textureUsers = 0;
    }
    if (!asdTMTexTableNodeIsLoaded(DAT_0057f430.table, DAT_0057f430.node)) {
        asdTMTexLoadMainHeap(DAT_0057f430.table, DAT_0057f430.node);
        DAT_0057f430.requested = 1;
    }
    work->state = 0;
}
}
