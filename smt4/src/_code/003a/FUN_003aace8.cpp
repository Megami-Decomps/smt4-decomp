#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d9c8;

/* Updates the context's UI object. */
s32 FUN_003aace8()
{
    DAT_0043d9c8->object->update();
    return 0;
}

}
