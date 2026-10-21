#include "common.h"

extern "C" {
s32 FUN_001517b4(s32 category, s32 index);
s32 FUN_00163fd4(u32 flag);

u32 FUN_00203d74(void)
{
    if (FUN_001517b4(9, 2) != 0 || FUN_00163fd4(6) != 0) {
        return 1;
    }
    return 0;
}
}
