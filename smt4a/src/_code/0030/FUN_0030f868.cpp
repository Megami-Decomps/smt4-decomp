#include "common.h"

extern "C" {

s32 FUN_002e6e26(void);
s32 FUN_0030f78c(void);
s32 FUN_0030f84e(void);

/* Returns 1 when FUN_0030f78c holds and FUN_0030f84e does not; 0 otherwise. */
u32 FUN_0030f868(void)
{
    s32 result;

    FUN_002e6e26();
    result = FUN_0030f78c();
    if (result == 0) {
        return 0;
    }
    FUN_002e6e26();
    result = FUN_0030f84e();
    if (result == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
