#include "shard/Shard0042.h"

/* Reset the state, item count, and pending operation. */
extern "C" void callbackResetStateCountAndPending(CallbackState *work)
{
    work->state = 0;
    work->count = 0;
    work->pending = 0;
}
