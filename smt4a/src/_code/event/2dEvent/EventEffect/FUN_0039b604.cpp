/* NON_MATCHING: retail contains allocation source-file/line metadata and a diagnostic NOP absent here. */
#include "event/2dEvent/EventEffect.h"
#include <string.h>

struct BlinkFadeWorkA {
    EventEffectA base;
    s32 mode;
    s32 duration;
    s32 frame;
    f32 opacity;
    u8 active;
    u8 unk19[3];
};

extern "C" {
extern EventEffectA *g_eventEffect;
extern EventFilterTexture DAT_0057f3d0[2];
u32 FUN_0031c794(void);
u32 FUN_0031c55c(void);
void *asdMemoryAllocTracked(u32 alignment, u32 size, u32 heap, u32 category, s32 clear);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 stack, u32 options,
                           u32 (*callback)(void), u32 context, u32 parameter);
u32 taskCreateDraw(const char *name, s32 priority, u32 stack, u32 options,
                   u32 (*callback)(void), u32 context, u32 parameter, u32 parent);
void *textureGetIndexedResource(u32 table);
void asdTMTexTableLoadTmx(u32 table, u32 options);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexLoadMainHeap(u32 table, u32 node);

// Allocate the blink-fade controller, install its calculation/draw tasks and load textures.
void FUN_0039b604(void)
{
    if (g_eventEffect == NULL)
        g_eventEffect = static_cast<EventEffectA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x1c, 1));
    BlinkFadeWorkA *effect = reinterpret_cast<BlinkFadeWorkA *>(g_eventEffect);
    memset(effect, 0, sizeof(*effect));
    effect->base.job = asdProcessCreateSimple("BlinkFade Calc", 3, 0, 0, FUN_0031c794, 0, 0);
    taskCreateDraw("BlinkFade DrawUpLeft", 0x86, 0, 0, FUN_0031c55c, 0, 0, effect->base.job);
    taskCreateDraw("BlinkFade DrawUpRight", 0xe2, 0, 0, FUN_0031c55c, 0, 0, effect->base.job);
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
