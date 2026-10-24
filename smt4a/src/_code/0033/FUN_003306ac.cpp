#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 FUN_002e58c4(s32 value);

/* Script command variant: true when FUN_002e58c4 rejects the first argument. */
u32 FUN_003306ac(void)
{
    if (FUN_002e58c4(scrGetArg(0)) != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
