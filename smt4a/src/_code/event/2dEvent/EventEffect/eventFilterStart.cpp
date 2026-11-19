#include "event/2dEvent/EventFilter.h"
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f3e8[6];
u32 FUN_002a3f54(void *job);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, u32 process);
void *textureGetIndexedResource(u32 index);
void asdTMTexTableLoadTmx(u32 table, s32 flags);

/* Starts the event screen filter `kind`: (re)allocates and clears its work, creates its update
 * process and the two upper-screen draw tasks, and loads the filter's texture. */
void eventFilterStart(u32 kind)
{
    if (g_eventEffect.filterState.work == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 0x283);
        g_eventEffect.filterState.work = static_cast<EventFilterWork *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventFilterWork), 1));
    }
    memset(g_eventEffect.filterState.work, 0, sizeof(EventFilterWork));
    EventFilterWork *work = g_eventEffect.filterState.work;
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EvtFilter Calc"), 3, 0, 0, eventFilterUpdate, NULL, NULL);
    taskCreateDraw("EvtFilter DrawUpLeft", 0x85, 0, 0, FUN_002a3f54, NULL, NULL, work->job);
    taskCreateDraw("EvtFilter DrawUpRight", 0xe1, 0, 0, FUN_002a3f54, NULL, NULL, work->job);
    work->texture = kind;
    work->frame = 0;
    work->state = 0;
    work->pulse = 1.0f;
    work->opacity = 0.0f;
    u32 selectedKind = g_eventEffect.filterState.work->texture;
    if (selectedKind < 6) {
        if (textureGetIndexedResource(0x35) == NULL) {
            asdTMTexTableLoadTmx(0x35, 0);
            g_eventEffect.textureUsers = 0;
        } else {
            ++g_eventEffect.textureUsers;
        }
        EventFilterTexture *texture = &DAT_0057f3e8[selectedKind];
        if (!asdTMTexTableNodeIsLoaded(DAT_0057f3e8[selectedKind].table, texture->node)) {
            asdTMTexLoadMainHeap(DAT_0057f3e8[selectedKind].table, texture->node);
            texture->requested = 1;
        }
    }
}
}
