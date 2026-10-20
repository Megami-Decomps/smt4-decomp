#include "shard/Shard0039.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

u16 stateHolderGetCurrentEntry(void)
{
    return DAT_00588fe8->table59C[DAT_00588fe8->unk654];
}

} /* extern "C" */
