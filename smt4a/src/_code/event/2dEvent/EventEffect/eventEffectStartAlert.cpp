#include "event/2dEvent/EventEffect.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
void *asdMemoryAllocTracked(s32 pool, s32 alignment, s32 flags, u32 size, s32 clear);
u32 FUN_002281a0(void *job);
u32 FUN_00261254(void *job);
void eventEffectDestroy(void *job);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*step)(void *), void (*destroy)(void *), void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, u32 process);

// Start the pulsing alert effect; a positive stopFrame arms its fade-out at that frame.
void eventEffectStartAlert(s32 stopFrame)
{
    if (g_eventEffect.effect == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 0x716);
        g_eventEffect.effect = static_cast<EventEffectA *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventEffectA), 1));
    }
    EventEffectA *effect = g_eventEffect.effect;
    memset(effect, 0, sizeof(*effect));
    effect->job = asdProcessCreateSimple("EvtAlart Calc", 3, 0, 0, FUN_002281a0, eventEffectDestroy, NULL);
    taskCreateDraw("EvtAlart DrawUpLeft", 0x84, 0, 0, FUN_00261254, NULL, NULL, effect->job);
    taskCreateDraw("EvtAlart DrawUpRight", 0xe0, 0, 0, FUN_00261254, NULL, NULL, effect->job);
    effect->state = 0;
    effect->frame = 0;
    effect->level = 0.0f;
    effect->levelStep = 0.02f;
    effect->stopFrame = stopFrame;
    effect->stopArmed = stopFrame > 0;
}

} /* extern "C" */
