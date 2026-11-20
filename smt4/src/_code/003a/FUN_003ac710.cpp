#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_btlDevilListCallbackContext;
s32 asdMemFree(void *memory);

/* Releases the UI callback context if it exists. */
void FUN_003ac710()
{
    if (g_btlDevilListCallbackContext != NULL) {
        asdMemFree(g_btlDevilListCallbackContext);
        g_btlDevilListCallbackContext = NULL;
    }
}

}
