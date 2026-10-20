#include "shard/Shard0038.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

void FUN_0038b548(u8 value)
{
    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->unk24AA = value;
    }
}

} /* extern "C" */
