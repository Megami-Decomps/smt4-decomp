/* NON_MATCHING: only the r4/r5 assignment of the handle pointer and the result differs (retail keeps the result in r4). */
#include "nn/svc.h"
#include "nn/Result.h"

extern "C" {
extern u32 DAT_0040b730;
void asdFatalError(void);

s32 FUN_00146704(u32 *handle)
{
    s32 result;
    if (*handle == 0) {
        result = 0xD8A103F7;
    } else {
        result = nn::svc::CloseHandle(*handle);
        if (nnResultIsFailure(result)) {
            asdFatalError();
        }
    }
    *handle = DAT_0040b730;
    return result;
}
}
