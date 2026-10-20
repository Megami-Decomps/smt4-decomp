#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

void FUN_00371edc(u8 value)
{
    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->unk529 = value;
    }
}

} /* extern "C" */
