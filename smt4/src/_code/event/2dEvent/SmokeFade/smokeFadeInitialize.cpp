#include "event/2dEvent/SmokeFade.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern SmokeFadeState *DAT_0043df28;
extern SmokeFadeImage DAT_0043df40[2];
s32 FUN_001ad6fc(u32);
s32 FUN_001ad4f4(u32);
u32 taskCreateDraw(const char *, s32, s32, s32, void (*)(u32), void *, void *, u32);
void *textureGetIndexedResource(u32);
void asdTMTexTableLoadTmx(u32, s32);
void asdTMTexTableLoadEntryAsync(u32, u32);
void asdLoadFileAsyncSimple(const char *, void **, s32);

void smokeFadeInitialize(u32 first, u32 second)
{
    if (DAT_0043df28 == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\2dEvent\\SmokeFade.cpp", 89);
        DAT_0043df28 = static_cast<SmokeFadeState *>(asdMemAlloc(0x100, 0x100, 0, 0x28, 1));
    }
    SmokeFadeState *state = DAT_0043df28;
    memset(state, 0, sizeof(*state));
    state->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("SmokeFade Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001ad6fc), NULL, NULL);
    taskCreateDraw("SmokeFade DrawUpLeft", 0x81, 0, 0, reinterpret_cast<void (*)(u32)>(FUN_001ad4f4), NULL, NULL, state->job);
    taskCreateDraw("SmokeFade DrawUpRight", 0xdf, 0, 0, reinterpret_cast<void (*)(u32)>(FUN_001ad4f4), NULL, NULL, state->job);
    state->frame = 0;
    state->phase = 0;
    state->active = 0;
    state->scale = 1.0f;
    state->opacity = 1.0f;
    state->first = first;
    state->second = second;
    for (s32 i = 0; i < 2; ++i) {
        if (textureGetIndexedResource(DAT_0043df40[i].table) == NULL) {
            asdTMTexTableLoadTmx(DAT_0043df40[i].table, 0);
            DAT_0043df40[i].loadedTable = 1;
        }
        if (!asdTMTexTableNodeIsLoaded(DAT_0043df40[i].table, DAT_0043df40[i].node)) {
            asdTMTexTableLoadEntryAsync(DAT_0043df40[i].table, DAT_0043df40[i].node);
            DAT_0043df40[i].loadedNode = 1;
        }
    }
    asdLoadFileAsyncSimple("event/smoke_fade.tbl", &state->file, 0);
}
}
