#include "shard/Shard0048.h"

extern "C" {

extern void FUN_002e6dd4(u8 *block, u32 size);

void block66OwnerClear(Block66Owner *obj)
{
    FUN_002e6dd4(obj->block66, 0x100);
}

} /* extern "C" */
