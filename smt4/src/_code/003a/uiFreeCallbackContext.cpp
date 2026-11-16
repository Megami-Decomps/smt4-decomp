#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_uiCallbackContext;
s32 asdMemFree(void *memory);

/* Releases the UI callback context if it exists. */
void uiFreeCallbackContext()
{
    if (g_uiCallbackContext != NULL) {
        asdMemFree(g_uiCallbackContext);
        g_uiCallbackContext = NULL;
    }
}

}
