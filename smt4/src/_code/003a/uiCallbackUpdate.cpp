#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_bibleDevilCallbackContext;

/* Updates the context's UI object. */
s32 uiCallbackUpdate()
{
    g_bibleDevilCallbackContext->object->update();
    return 0;
}

}
