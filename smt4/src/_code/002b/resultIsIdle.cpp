#include "common.h"
#include "result/Result.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

u32 resultIsIdle(void)
{
    u32 result;

    if ((g_result == NULL) || (g_result->state == 0x14)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
