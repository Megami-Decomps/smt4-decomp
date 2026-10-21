#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d9c8;
s32 asdMemFree(void *memory);

/* Releases the UI callback context if it exists. */
void FUN_003aad10()
{
    if (DAT_0043d9c8 != NULL) {
        asdMemFree(DAT_0043d9c8);
        DAT_0043d9c8 = NULL;
    }
}

}
