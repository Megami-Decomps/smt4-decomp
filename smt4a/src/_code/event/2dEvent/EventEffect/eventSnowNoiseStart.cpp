#include "event/2dEvent/SnowNoise.h"
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f430;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 eventSnowNoiseUpdate();
u32 FUN_002a4334();
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);
void *textureGetIndexedResource(u32 texture);
void asdTMTexTableLoadTmx(u32 texture, u32 flags);

/* Starts the snow-noise effect: (re)allocates and clears its work, creates its update process and the two
 * upper-screen draw tasks, and requests the shared textures. */
void eventSnowNoiseStart(u8 style)
{
    if (g_eventEffect.unk08 == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 1031);
        g_eventEffect.unk08 = asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventSnowNoiseWork), 1);
    }
    memset(g_eventEffect.unk08, 0, sizeof(EventSnowNoiseWork));
    EventSnowNoiseWork *work = static_cast<EventSnowNoiseWork *>(g_eventEffect.unk08);
    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EvtSnowNoise Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventSnowNoiseUpdate), 0, NULL);
    work->job = process;
    taskCreateDraw("EvtSnowNoise DrawUpLeft", 0x85, 0, 0, FUN_002a4334, 0, NULL, process);
    taskCreateDraw("EvtSnowNoise DrawUpRight", 0xE1, 0, 0, FUN_002a4334, 0, NULL, work->job);
    work->frame = 0;
    work->opacity = 0.0f;
    work->complete = 0;
    work->style = style;
    if (textureGetIndexedResource(0x35) == NULL) {
        asdTMTexTableLoadTmx(0x35, 0);
        g_eventEffect.textureUsers = 0;
    } else {
        ++g_eventEffect.textureUsers;
    }
    if (!asdTMTexTableNodeIsLoaded(DAT_0057f430.table, DAT_0057f430.node)) {
        asdTMTexLoadMainHeap(DAT_0057f430.table, DAT_0057f430.node);
        DAT_0057f430.requested = 1;
    }
    work->state = 0;
}
}
