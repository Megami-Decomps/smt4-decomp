#include "battle/btlEncount.h"
#include "battle/btlMain.h"

extern "C" {

s32 jobIsValid(u32 job);

extern s32 g_btlActionReflect;
extern BtlMainA *g_btlCamera;
extern s32 g_btlAux;
extern BtlEncount *g_btlEncount;

/* 0 when the owner job is running with all battle state set up and either the no-encounter flag
 * is set or the encounter state is not active; 1 otherwise. */
u32 btlEncountCheck(BtlEncountOwner *owner)
{
    if (jobIsValid(owner->job) != 0 && g_btlEncount != NULL && g_btlActionReflect != 0 &&
        g_btlAux != 0 && g_btlCamera != NULL) {
        if ((g_btlCamera->flags & BTL_FLAG_NO_ENCOUNT) != 0) {
            return 0;
        }
        if ((g_btlEncount->flags & BTL_ENCOUNT_ACTIVE) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
