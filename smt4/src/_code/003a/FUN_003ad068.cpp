#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d9f8;

/* Runs the UI object's draw callback. */
s32 FUN_003ad068()
{
    DAT_0043d9f8->object->draw();
    return 0;
}

}
