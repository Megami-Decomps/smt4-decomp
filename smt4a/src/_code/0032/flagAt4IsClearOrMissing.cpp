#include "shard/Shard0032.h"

extern "C" {

extern FlagAt4 *g_callbackWork;

/* True when there is no global object or its flag is clear. */
u8 flagAt4IsClearOrMissing(void)
{
    return g_callbackWork == NULL || g_callbackWork->flag == 0;
}

} /* extern "C" */
