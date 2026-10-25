#include "shard/W5_W5Match6_CallbackController.h"

extern "C" {
u32 eventRowUpdateState(void *object, u32 handle);

s32 FUN_002840fc(u32 handle)
{
    if (g_callbackController.work != NULL)
        eventRowUpdateState(g_callbackController.work, handle);
    return 0;
}
}
