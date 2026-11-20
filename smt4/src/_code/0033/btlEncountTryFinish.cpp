#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

void eventCommandDispatchPendingCleanup(void);
void btlEffectBeginEncounterFade(void);
s32 recordAreAllCountsNonpositive(void *object);
s32 nodeListCountActiveById(s32 value, s32 arg);

extern s32 g_btlActionReflect;
extern void *g_btlAux;

u32 btlEncountTryFinish(void)
{
    s32 result;
    u32 done;

    result = nodeListCountActiveById(g_btlActionReflect, 0);
    if (result > 0) {
        done = 0;
    } else {
        result = recordAreAllCountsNonpositive(g_btlAux);
        done = result;
        if (result != 0) {
            if (g_btlAux != NULL) {
                btlEffectBeginEncounterFade();
            }
            g_btlMain->flags &= ~0x4000;
            eventCommandDispatchPendingCleanup();
            done = 1;
        }
    }
    return done;
}

} /* extern "C" */
