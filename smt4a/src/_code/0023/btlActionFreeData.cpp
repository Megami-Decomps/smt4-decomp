#include "battle/btlAction.h"

extern "C" {

void asdMemFree(void *block);

extern BtlActionGlobals g_btlAction;

/* Frees the action data block. */
void btlActionFreeData(void)
{
    if (g_btlAction.data != NULL) {
        asdMemFree(g_btlAction.data);
        g_btlAction.data = NULL;
    }
}

} /* extern "C" */
