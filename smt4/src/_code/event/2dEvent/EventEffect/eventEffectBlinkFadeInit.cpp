#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

#include "event/2dEvent/BlinkFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
extern BlinkFadeWork *g_eventEffect;
extern BlinkFadeTexture DAT_0043df00[2];
void *asdMemAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 parent);
s32 FUN_00222520(u32 handle);
s32 FUN_002222e8(u32 handle);
void *textureGetIndexedResource(u32 table);
void asdTMTexTableLoadTmx(u32 table, s32 mode);
void asdTMTexTableLoadEntryAsync(u32 table, u32 node);

void eventEffectBlinkFadeInit()
{
    if (g_eventEffect == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\2dEvent\\EventEffect.cpp", 0x54);
        g_eventEffect = (BlinkFadeWork *)asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BlinkFadeWork), 1);
    }
    BlinkFadeWork *work = g_eventEffect;
    memset(work, 0, sizeof(*work));
    work->job = asdProcessCreateSimple((const s8 *)"BlinkFade Calc", 1, 0, 0, FUN_00222520, NULL, 0);
    taskCreateDraw((const s8 *)"BlinkFade DrawUpLeft", 0x81, 0, 0, FUN_002222e8, NULL, 0, work->job);
    taskCreateDraw((const s8 *)"BlinkFade DrawUpRight", 0xdf, 0, 0, FUN_002222e8, NULL, 0, work->job);
    work->frame = 0;
    work->state = 0;
    work->visible = 0;
    work->alpha = 1.0f;
    work->position = 40;
    for (s32 i = 0; i < 2; ++i) {
        if (textureGetIndexedResource(DAT_0043df00[i].table) == NULL) {
            asdTMTexTableLoadTmx(DAT_0043df00[i].table, 0);
            DAT_0043df00[i].ownsTable = 1;
        }
        if (!asdTMTexTableNodeIsLoaded(DAT_0043df00[i].table, DAT_0043df00[i].node)) {
            asdTMTexTableLoadEntryAsync(DAT_0043df00[i].table, DAT_0043df00[i].node);
            DAT_0043df00[i].ownsNode = 1;
        }
    }
}
}
