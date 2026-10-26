#include "nn/Result.h"

extern "C" {
s32 FUN_002a7e4c(u32 id);
void asdFatalError(void);

void FUN_0013c684(void)
{
    s32 result = FUN_002a7e4c(0x406);
    if (nnResultIsFailure(result) && result != (s32)0xC8A0CFFC) {
        asdFatalError();
    }
}
}
