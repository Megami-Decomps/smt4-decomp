#include "battle/btlStage.h"

extern "C" {

void asdMemFree(void *block);

extern BtlStageGlobals g_btlStage;

/* Frees the stage context. */
void btlStageFreeContext(void)
{
    if (g_btlStage.context != NULL) {
        asdMemFree(g_btlStage.context);
        g_btlStage.context = NULL;
    }
}

} /* extern "C" */
