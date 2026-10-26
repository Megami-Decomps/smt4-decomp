#include "common.h"
#include "nn/Result.h"

extern "C" {
extern const char *const DAT_004090cc[];
extern u32 DAT_00471b64;

u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *handle, const char *name, u32 nameLength, u32 flags);

// Opens the shared named resource once; returns the open failure, or 0 when it is (or already was) open.
s32 FUN_00106e10(void)
{
    const char *name = DAT_004090cc[1];
    u32 opened = DAT_00471b64;
    if (opened == 0) {
        s32 result = asdModelForwardChecked(&DAT_00471b64, name, libc_strlen(name), 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    return 0;
}
}
