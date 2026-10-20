#include "shard/Shard0048.h"

extern "C" {

extern void FUN_002e6dd4(u8 *block, u32 size);

void block3E6OwnerClear(Block66Owner *obj)
{
    FUN_002e6dd4(obj->block3E6, 0xA0);
}

} /* extern "C" */
