#include "shard/W5_W5Match6_CallbackController.h"
extern "C" {
void FUN_0049f488(void *work, u32 value);
/* Forwards the callback value while its controller is active. */
s32 FUN_002c2bac(u32 value)
{
    if (g_callbackController.work != NULL)
        FUN_0049f488(g_callbackController.work, value);
    return 0;
}
}
