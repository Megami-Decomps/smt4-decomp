#include "shard/Shard0037.h"

extern "C" {

extern void scrSetResult(s32 value);
extern Holder33B4 *g_btlAux;

/* Script command: result (and return value) is 1 when the object is in state 0xD. */
u32 scrCommIsState0xD(void)
{
    if (g_btlAux->state != 0xD) {
        scrSetResult(0);
        return 0;
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
