#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

extern "C" {

void asdMemFree(void *block);


/* Frees the action data block. */
void btlActionFreeData(void)
{
    if (g_btlAction.slots != NULL) {
        asdMemFree(g_btlAction.slots);
        g_btlAction.slots = NULL;
    }
}

} /* extern "C" */
