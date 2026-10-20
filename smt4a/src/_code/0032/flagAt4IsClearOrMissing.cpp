#include "shard/Shard0032.h"

extern "C" {

extern FlagAt4 *DAT_0057f134;

/* True when there is no global object or its flag is clear. */
u8 flagAt4IsClearOrMissing(void)
{
    return DAT_0057f134 == NULL || DAT_0057f134->flag == 0;
}

} /* extern "C" */
