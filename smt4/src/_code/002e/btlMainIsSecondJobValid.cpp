#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {

s32 jobIsValid(u32 job);


/* True while the battle's second job is valid. */
bool btlMainIsSecondJobValid(void)
{
    if (g_btlMainState.state == NULL) {
        return false;
    }
    return jobIsValid(g_btlMainState.state->core.jobB) != 0;
}

} /* extern "C" */
