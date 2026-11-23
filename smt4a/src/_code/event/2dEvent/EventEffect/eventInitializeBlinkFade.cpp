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
extern EventFilterTexture g_eventBannerTextures[2];
u32 eventBannerUpdate(void);
u32 eventEffectBlinkFadeDraw(void);
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
    effect->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BlinkFade Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventBannerUpdate), 0, 0);
    taskCreateDraw("BlinkFade DrawUpLeft", 0x86, 0, 0, eventEffectBlinkFadeDraw, 0, 0, effect->job);
    taskCreateDraw("BlinkFade DrawUpRight", 0xe2, 0, 0, eventEffectBlinkFadeDraw, 0, 0, effect->job);
    effect->frame = 0;
    effect->mode = 0;
    effect->active = 0;
    effect->opacity = 1.0f;
    effect->duration = 40;
    for (s32 index = 0; index < 2; ++index) {
        if (textureGetIndexedResource(g_eventBannerTextures[index].table) == NULL) {
            asdTMTexTableLoadTmx(g_eventBannerTextures[index].table, 0);
            g_eventBannerTextures[index].unk09[0] = 1;
        }
        if (!asdTMTexTableNodeIsLoaded(g_eventBannerTextures[index].table, g_eventBannerTextures[index].node)) {
            asdTMTexLoadMainHeap(g_eventBannerTextures[index].table, g_eventBannerTextures[index].node);
            g_eventBannerTextures[index].requested = 1;
        }
    }
}
}
