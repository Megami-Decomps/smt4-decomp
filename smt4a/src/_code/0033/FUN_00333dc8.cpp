#include "shard/Shard0033.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

void FUN_00333dc8(u8 value)
{
    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->unk52A = value;
    }
}

} /* extern "C" */
