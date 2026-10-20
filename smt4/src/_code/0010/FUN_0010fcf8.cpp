#include "common.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_002bb638(u32 arg0);
s32 FUN_002c12bc(void);
s32 FUN_0011c834(void);
void asdFatalError(void);
void FUN_00128d5c(u32 arg0);
u32 FUN_00128d20(u32 arg0);

u32 FUN_0010fcf8(u32 arg0)
{
    s32 result = FUN_002bb638(arg0);

    if (result != 0) {
        result = FUN_002c12bc();
        if (result == 0) {
            if (nnResultIsFailure(FUN_0011c834())) {
                asdFatalError();
            }
            FUN_00128d5c(15);
            return FUN_00128d20(6);
        }
    }
    return result;
}

} /* extern "C" */
