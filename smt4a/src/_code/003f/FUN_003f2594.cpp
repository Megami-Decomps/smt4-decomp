#include "shard/Shard003F.h"

extern "C" {

extern void FUN_0035b0a4(s32 index);

void FUN_003f2594(void)
{
    s32 i;

    for (i = 0; i < 0x20; i++) {
        FUN_0035b0a4(i);
    }
}

} /* extern "C" */
