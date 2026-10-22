#include "common.h"

extern "C" {

int eventEffectIsFinished(int obj);
int eventEffectExists(void);
int eventEffectStartFadeOut(void);
int scrGetCommandFrame(void);
int eventEffectStop(void);

/* Script command: if there is a current object, runs eventEffectStop when eventEffectIsFinished accepts it (else runs eventEffectStartFadeOut unless scrGetCommandFrame is set and fails). */
u32 scrCommStopCurrentEffect(void)
{
    int obj = eventEffectExists();

    if (obj == 0) {
        return 1;
    }
    if (eventEffectIsFinished(obj) == 0) {
        if (scrGetCommandFrame() == 0) {
            eventEffectStartFadeOut();
        }
        return 0;
    }
    eventEffectStop();
    return 1;
}

} /* extern "C" */
