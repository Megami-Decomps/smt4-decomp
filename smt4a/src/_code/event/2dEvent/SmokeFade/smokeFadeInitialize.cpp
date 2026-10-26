#include "event/2dEvent/SmokeFade.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/asdTMTexLoadMainHeap.h"

extern "C" {
extern SmokeFadeState *g_smokeFadeState;
extern SmokeFadeImage g_smokeFadeImages[2];
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
s32 FUN_0023af68(u32);
void smokeFadeDrawCallback(u32);
u32 taskCreateDraw(const char *, s32, s32, s32, void (*)(u32), void *, void *, u32);
void *textureGetIndexedResource(u32);
void asdTMTexTableLoadTmx(u32, s32);
void asdLoadFileAsyncSimple(const char *, void **, s32);

// Create the smoke-fade jobs and request the two textures and transition table.
void smokeFadeInitialize(u32 first, u32 second)
{
    if (g_smokeFadeState == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\SmokeFade.cpp", 96);
        g_smokeFadeState = static_cast<SmokeFadeState *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x28, 1));
    }
    SmokeFadeState *state = g_smokeFadeState;
    memset(state, 0, sizeof(*state));
    state->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("SmokeFade Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0023af68), NULL, NULL);
    taskCreateDraw("SmokeFade DrawUpLeft", 134, 0, 0, smokeFadeDrawCallback, NULL, NULL, state->job);
    taskCreateDraw("SmokeFade DrawUpRight", 226, 0, 0, smokeFadeDrawCallback, NULL, NULL, state->job);
    state->frame = 0;
    state->phase = 0;
    state->active = 0;
    state->scale = 1.0f;
    state->opacity = 1.0f;
    state->first = first;
    state->second = second;
    for (s32 i = 0; i < 2; ++i) {
        if (textureGetIndexedResource(g_smokeFadeImages[i].table) == NULL) {
            asdTMTexTableLoadTmx(g_smokeFadeImages[i].table, 0);
            g_smokeFadeImages[i].loadedTable = 1;
        }
        if (!asdTMTexTableNodeIsLoaded(g_smokeFadeImages[i].table, g_smokeFadeImages[i].node)) {
            asdTMTexLoadMainHeap(g_smokeFadeImages[i].table, g_smokeFadeImages[i].node);
            g_smokeFadeImages[i].loadedNode = 1;
        }
    }
    asdLoadFileAsyncSimple("event/smoke_fade.tbl", &state->file, 0);
}
}
