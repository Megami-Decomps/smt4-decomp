#include "shard/Shard0031.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

/* True unless the global object's state is 0x15 or 0x17. */
u8 objStateNotEnding(void)
{
    return DAT_00588fe8->state != 0x15 && DAT_00588fe8->state != 0x17;
}

} /* extern "C" */
