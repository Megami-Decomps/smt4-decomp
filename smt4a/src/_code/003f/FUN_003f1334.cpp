#include "shard/Shard003F.h"

extern "C" {

extern u32 FUN_003f86c8(u32 id);
extern u32 FUN_003f881c(u32 id, s32 value);

void FUN_003f1334(void)
{
    if (FUN_003f86c8(0x4D) == 0) {
        FUN_003f881c(0x4D, 0);
    }
}

} /* extern "C" */
