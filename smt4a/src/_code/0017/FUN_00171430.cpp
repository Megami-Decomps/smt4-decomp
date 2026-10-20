/* Runs FUN_0018bc7c(mode, arg) between FUN_0018b868 and FUN_0018b964 (lock / unlock) and returns its result. */
#include "common.h"

extern "C" {

void FUN_0018b868(void);
void FUN_0018b964(void);
u32 FUN_0018bc7c(u32 mode, u32 arg);

u32 FUN_00171430(u32 mode, u32 arg)
{
    u32 result;

    FUN_0018b868();
    result = FUN_0018bc7c(mode, arg);
    FUN_0018b964();
    return result;
}

}
