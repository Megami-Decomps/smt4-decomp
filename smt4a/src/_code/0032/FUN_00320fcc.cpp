#include "common.h"

extern "C" {

extern void *g_btlAux;

void btlStageResetAndClearCameraFlag(void *aux);

/* Script command: runs btlStageResetAndClearCameraFlag on the battle aux block. */
u32 FUN_00320fcc(void)
{
    btlStageResetAndClearCameraFlag(g_btlAux);
    return 1;
}

} /* extern "C" */
