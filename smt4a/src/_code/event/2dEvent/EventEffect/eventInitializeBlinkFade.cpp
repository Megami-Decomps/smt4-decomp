#include "event/2dEvent/EventEffect.h"
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

struct BlinkFadeWorkA {
    u32 job;
    s32 state;
    s32 mode;
    s32 duration;
    s32 frame;
    f32 opacity;
    u8 active;
    u8 unk19[3];
};
typedef char BlinkFadeWorkLayoutCheck[
    sizeof(BlinkFadeWorkA) == 0x1C &&
    offsetof(BlinkFadeWorkA, frame) == 0x10 &&
    offsetof(BlinkFadeWorkA, active) == 0x18 ? 1 : -1];

extern "C" {
extern EventEffectA *g_eventEffect;
extern EventFilterTexture DAT_0057f3d0[2];
u32 FUN_0031c794(void);
u32 FUN_0031c55c(void);
void *asdMemoryAllocTracked(u32 alignment, u32 size, u32 heap, u32 category, s32 clear);
u32 taskCreateDraw(const char *name, s32 priority, u32 stack, u32 options,
                   u32 (*callback)(void), u32 context, u32 parameter, u32 parent);
void *textureGetIndexedResource(u32 table);
void asdTMTexTableLoadTmx(u32 table, u32 options);

// Allocate the blink-fade controller, install its calculation/draw tasks and load textures.
void eventInitializeBlinkFade(void)
{
    if (g_eventEffect == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 316);
        g_eventEffect = static_cast<EventEffectA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BlinkFadeWorkA), 1));
    }
    BlinkFadeWorkA *effect = reinterpret_cast<BlinkFadeWorkA *>(g_eventEffect);
    memset(effect, 0, sizeof(*effect));
    effect->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BlinkFade Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0031c794), 0, 0);
    taskCreateDraw("BlinkFade DrawUpLeft", 0x86, 0, 0, FUN_0031c55c, 0, 0, effect->job);
    taskCreateDraw("BlinkFade DrawUpRight", 0xe2, 0, 0, FUN_0031c55c, 0, 0, effect->job);
    effect->frame = 0;
    effect->mode = 0;
    effect->active = 0;
    effect->opacity = 1.0f;
    effect->duration = 40;
    for (s32 index = 0; index < 2; ++index) {
        if (textureGetIndexedResource(DAT_0057f3d0[index].table) == NULL) {
            asdTMTexTableLoadTmx(DAT_0057f3d0[index].table, 0);
            DAT_0057f3d0[index].unk09[0] = 1;
        }
        if (!asdTMTexTableNodeIsLoaded(DAT_0057f3d0[index].table, DAT_0057f3d0[index].node)) {
            asdTMTexLoadMainHeap(DAT_0057f3d0[index].table, DAT_0057f3d0[index].node);
            DAT_0057f3d0[index].requested = 1;
        }
    }
}
}
