#include "nn/Result.h"

extern "C" {
s32 FUN_002c1148(u32 first, u32 second);
void asdFatalError(void);

void FUN_0036196c(void)
{
    s32 result = FUN_002c1148(0, 0);
    if (nnResultIsFailure(result) && result != (s32)0xC8A0CFFC) {
        asdFatalError();
    }
}
}
