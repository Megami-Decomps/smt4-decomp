#include "shard/Shard0039.h"

extern "C" {

extern s32 FUN_004186a4(void);
extern s32 FUN_004186e0(void);

s32 FUN_00398024(void)
{
    s32 result = FUN_004186a4();

    if (result == 0 || (result = FUN_004186e0()) <= 0) {
        result = -1;
    }
    return result;
}

} /* extern "C" */
