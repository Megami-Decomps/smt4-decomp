#include "shard/Shard003A.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

/* True when there is no object or its state is 0. */
u8 stateHolderIsMissingOrState0(void)
{
    return DAT_00588fe8 == NULL || DAT_00588fe8->state == 0;
}

} /* extern "C" */
