#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

/* True when the global object is in state 8 or 10. */
u32 stateHolderStateIs8Or10(void)
{
    if (DAT_00588fe8 == NULL || (DAT_00588fe8->state != 8 && DAT_00588fe8->state != 10)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
