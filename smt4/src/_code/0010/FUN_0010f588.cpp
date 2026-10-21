#include "nn/Result.h"

extern "C" {
extern u32 DAT_00472a58;
extern const char DAT_0040b739[]; // "am:app"
s32 FUN_002c1398(void);
u32 libc_strlen(const char* string);
s32 asdModelForwardChecked(u32* handle, const char* name, u32 length, u32 flags);

// Lazily connect to the application-manager service, preserving failure results.
s32 FUN_0010f588(void)
{
    if (DAT_00472a58 == 0) {
        s32 result = FUN_002c1398();
        if (nnResultIsFailure(result))
            return result;
        u32 length = libc_strlen(DAT_0040b739);
        result = asdModelForwardChecked(&DAT_00472a58, DAT_0040b739, length, 0);
        if (nnResultIsFailure(result))
            return result;
    }
    return 0;
}
}
