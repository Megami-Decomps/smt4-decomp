#include "event/2dEvent/EventEffect.h"

extern "C" {

extern EventEffectGlobalsA g_eventEffect;

/* Job callback of the event effect: pulses its level up and down until the stop frame, then fades
 * out and finishes (-1). */
u32 FUN_002281a0(void)
{
    EventEffectA *effect = g_eventEffect.effect;

    if (effect->stopArmed && effect->frame >= effect->stopFrame) {
        effect->state = 2;
        effect->stopFrame = -1;
        effect->stopArmed = 0;
    }
    switch (effect->state) {
    case 0:
        effect->level += effect->levelStep;
        s32 bits = *(s32 *)&effect->level;
        if (bits >= 0x3ecccccd) {
            effect->level = 0.4f;
            effect->levelStep = -0.02f;
            effect->state = 1;
        }
        break;
    case 1:
        effect->level += effect->levelStep;
        if (effect->level > 0.0f) {
            break;
        }
        effect->level = 0.0f;
        effect->levelStep = 0.02f;
        effect->state = 0;
        break;
    case 2:
        effect->level += effect->levelStep;
        if (effect->level > 0.0f) {
            break;
        }
        effect->level = 0.0f;
        effect->state = 3;
        break;
    case 3:
        return 0xffffffff;
    }
    effect->frame++;
    return 0;
}

} /* extern "C" */
