#include "nn/Result.h"

extern "C" {
extern u32 DAT_005c149c;
extern const char DAT_0053f514[]; // "am:app"
s32 FUN_0016f864(void);
u32 wstrlen(const char* string);
s32 FUN_0016f988(u32* handle, const char* name, u32 length, u32 flags);

// Lazily connect to the application-manager service, preserving failure results.
s32 nnAmConnectOnce(void)
{
    if (DAT_005c149c == 0) {
        s32 result = FUN_0016f864();
        if (nnResultIsFailure(result))
            return result;
        u32 length = wstrlen(DAT_0053f514);
        result = FUN_0016f988(&DAT_005c149c, DAT_0053f514, length, 0);
        if (nnResultIsFailure(result))
            return result;
    }
    return 0;
}
}
