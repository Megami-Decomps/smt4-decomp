#include "nn/Result.h"

extern "C" {
s32 FUN_001a3010(u32 id);
void sysFatalBreak(void);

void FUN_0018c840(void)
{
    s32 result = FUN_001a3010(0x406);
    if (nnResultIsFailure(result) && result != (s32)0xC8A0CFFC) {
        sysFatalBreak();
    }
}
}
