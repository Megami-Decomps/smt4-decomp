#include "battle/btlMain.h"

extern "C" {

s32 jobIsValid(u32 job);

extern BtlMainState *g_btlMainState;

/* True while the battle's second job is valid. */
bool btlMainIsSecondJobValid(void)
{
    if (g_btlMainState == NULL) {
        return false;
    }
    return jobIsValid(g_btlMainState->jobB) != 0;
}

} /* extern "C" */
