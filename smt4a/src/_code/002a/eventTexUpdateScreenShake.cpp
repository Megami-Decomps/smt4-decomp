#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTexA *g_eventTex;

extern void *eventCommandGetPendingCleanup(void);
extern void effShakeParticleAdvance(void);
extern f32 *FUN_00208bfc(void *entry);

/* Refreshes the event texture's screen shake from the current event command. */
s32 eventTexUpdateScreenShake(u32 /* job */)
{
    void *entry = eventCommandGetPendingCleanup();

    if (entry != NULL) {
        f32 *offset;

        effShakeParticleAdvance();
        offset = FUN_00208bfc(entry);
        g_eventTex->drawOrigin.x = offset[0] * 30.0f;
        g_eventTex->drawOrigin.y = offset[1] * 30.0f;
    }
    return 0;
}

} /* extern "C" */
