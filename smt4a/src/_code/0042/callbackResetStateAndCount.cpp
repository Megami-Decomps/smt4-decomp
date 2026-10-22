#include "shard/Shard0042.h"

/* Reset the active state and its item count. */
extern "C" void callbackResetStateAndCount(CallbackState *work)
{
    work->state = 0;
    work->count = 0;
}
