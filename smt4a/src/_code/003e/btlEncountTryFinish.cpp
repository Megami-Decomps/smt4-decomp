#include "battle/btlMain.h"

extern "C" {

void eventCommandClearPending(void);
void state339CFinish(void);
s32 recordAreAllCountsNonpositive(void *object);
s32 chainCountIdUnflagged(s32 value, s32 arg);

extern s32 g_btlActionReflect;
extern BtlMainA *g_btlCamera;
extern void *g_btlAux;

u32 btlEncountTryFinish(void)
{
    s32 result;
    u32 done;

    result = chainCountIdUnflagged(g_btlActionReflect, 0);
    if (result > 0) {
        done = 0;
    } else {
        result = recordAreAllCountsNonpositive(g_btlAux);
        done = result;
        if (result != 0) {
            if (g_btlAux != NULL) {
                state339CFinish();
            }
            g_btlCamera->flags &= ~0x4000;
            eventCommandClearPending();
            done = 1;
        }
    }
    return done;
}

} /* extern "C" */
