#include "shard/Shard003F.h"

extern "C" {

extern u32 FUN_003f86c8(u32 id);

u8 FUN_003f0f40(void)
{
    return FUN_003f86c8(0x4D) != 0;
}

} /* extern "C" */
