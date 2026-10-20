/* NON_MATCHING: retail's final tail branch has no relocation (it targets 0x16F15C, which has no symbol) */
#include "nn/Result.h"

extern "C" {

s32 FUN_00170404(u32 arg);
u32 FUN_0015a318(void);
s32 FUN_0015997c(void);
void sysFatalBreak(void);
s32 FUN_0016f198(u32 arg);
u32 FUN_0016f15c(u32 command); /* IPC request taking a command number (code at 0x16F15C) */

/* Run the IPC sequence when the first two checks pass: a negative setup result is fatal. */
u32 FUN_00146ecc(u32 arg)
{
    if (FUN_00170404(arg) != 0) {
        u32 busy = FUN_0015a318();

        if (busy == 0) {
            if (nnResultIsFailure(FUN_0015997c())) {
                sysFatalBreak();
            }
            FUN_0016f198(15);
            return FUN_0016f15c(6);
        }
        return busy;
    }
    return 0;
}

} /* extern "C" */
