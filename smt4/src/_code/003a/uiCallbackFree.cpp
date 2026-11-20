#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_bibleDevilCallbackContext;
s32 asdMemFree(void *memory);

/* Releases the UI callback context if it exists. */
void uiCallbackFree()
{
    if (g_bibleDevilCallbackContext != NULL) {
        asdMemFree(g_bibleDevilCallbackContext);
        g_bibleDevilCallbackContext = NULL;
    }
}

}
