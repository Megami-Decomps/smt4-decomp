/* NON_MATCHING: global work reload, texture-pair loads and cold texture-load branch are scheduled differently. */
#include "event/2dEvent/EventEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/asdTMTexLoadMainHeap.h"

struct EventFilterWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 timer;
    f32 scale;
    f32 offset;
    u32 kind;
    s32 duration;
};

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f3e8[6];
u32 FUN_002a41a0(void *job);
u32 FUN_002a3f54(void *job);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, u32 process);
void *textureGetIndexedResource(u32 index);
void asdTMTexTableLoadTmx(u32 table, s32 flags);

void eventFilterStart(u32 kind)
{
    if (g_eventEffect.filterState.work == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 0x283);
        g_eventEffect.filterState.work = static_cast<EventFilterWork *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventFilterWork), 1));
    }
    EventFilterWork *work = g_eventEffect.filterState.work;
    for (u32 word = 0; word < sizeof(EventFilterWork) / sizeof(u32); ++word) {
        reinterpret_cast<u32 *>(work)[word] = 0;
    }
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EvtFilter Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002a41a0), NULL, NULL);
    taskCreateDraw("EvtFilter DrawUpLeft", 0x85, 0, 0, FUN_002a3f54, NULL, NULL, work->job);
    taskCreateDraw("EvtFilter DrawUpRight", 0xe1, 0, 0, FUN_002a3f54, NULL, NULL, work->job);
    work->kind = kind;
    work->timer = 0;
    work->state = 0;
    work->scale = 1.0f;
    work->offset = 0.0f;
    u32 selectedKind = g_eventEffect.filterState.work->kind;
    if (selectedKind < 6) {
        if (textureGetIndexedResource(0x35) != NULL) {
            ++g_eventEffect.textureUsers;
        } else {
            asdTMTexTableLoadTmx(0x35, 0);
            g_eventEffect.textureUsers = 0;
        }
        EventFilterTexture *texture = &DAT_0057f3e8[selectedKind];
        if (!asdTMTexTableNodeIsLoaded(texture->table, texture->node)) {
            asdTMTexLoadMainHeap(texture->table, texture->node);
            texture->requested = 1;
        }
    }
}
}
