#include "common.h"

extern "C" {

void eventInitializeBlinkFade(void);
void eventEffectFreeTextures(void);
s32 scrGetCommandFrame(void);
s32 eventEffectIsStateTwo(void);

/* Script command: when scrGetCommandFrame reports nonzero, runs eventEffectFreeTextures if eventEffectIsStateTwo allows it and returns whether it did; otherwise runs eventInitializeBlinkFade and returns 0. */
u8 eventEffectTryFreeTextures(void)
{
    s32 result;

    result = scrGetCommandFrame();
    if (result != 0) {
        result = eventEffectIsStateTwo();
        if (result != 0) {
            eventEffectFreeTextures();
        }
        return result != 0;
    }
    eventInitializeBlinkFade();
    return 0;
}

} /* extern "C" */
