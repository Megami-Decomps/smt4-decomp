#include "common.h"
#include "addon/aocMain.h"

extern "C" {

s32 nn_os_LightEvent_TryWait(void *event);

/* Tests an event without waiting; the tail call to the next function is linked as a nop. */
s32 FUN_002ad1e0(void *event)
{
    return nn_os_LightEvent_TryWait(event);
}

} /* extern "C" */
