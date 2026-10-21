#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d990;
s32 asdMemFree(void *memory);

/* Releases the UI callback context if it exists. */
void FUN_003ac710()
{
    if (DAT_0043d990 != NULL) {
        asdMemFree(DAT_0043d990);
        DAT_0043d990 = NULL;
    }
}

}
