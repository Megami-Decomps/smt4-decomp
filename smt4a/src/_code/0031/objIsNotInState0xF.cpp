#include "shard/Shard0031.h"

extern "C" {

extern StateHolder1C *DAT_0057f268;

/* True unless the global object exists and is in state 0xF. */
u32 objIsNotInState0xF(void)
{
    if (DAT_0057f268 == NULL || DAT_0057f268->state != 0xF) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
