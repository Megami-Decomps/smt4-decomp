#include "common.h"

extern "C" {

void eventEffectBlinkFadeInit(void);
int eventEffectFreeTextures(void);
extern int scrGetCommandFrame(void);
extern int eventEffectIsState2(void);

u8 eventEffectTryFreeTextures(void)
{
    int result;

    if (scrGetCommandFrame() != 0) {
        result = eventEffectIsState2();
        if (result != 0) {
            eventEffectFreeTextures();
        }
        return result != 0;
    }
    eventEffectBlinkFadeInit();
    return 0;
}

} /* extern "C" */
