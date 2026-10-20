#include "battle/btlMain.h"

extern "C" {

s32 jobIsValid(u32 job);

extern BtlMainGlobalsA g_btlMain;

/* True while the battle's second job is valid. */
bool btlMainIsSecondJobValid(void)
{
    if (g_btlMain.state == NULL) {
        return false;
    }
    return jobIsValid(g_btlMain.state->jobB) != 0;
}

} /* extern "C" */
