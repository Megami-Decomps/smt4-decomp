/* NON_MATCHING: retail closes the native handle with SVC 0x23, which is prohibited by the no-intrinsics rule. */
#include "common.h"
extern "C" {
extern u8 DAT_00471ba8;
void FUN_003607d0();
s32 nn_svc_CloseHandle(u32 handle);
void asdFatalError(s32 result);
/* Closes the initialized service handle and clears its initialization flag. */
void FUN_00360364(const u32 *handle)
{
    if (DAT_00471ba8) {
        FUN_003607d0();
        s32 result = nn_svc_CloseHandle(*handle);
        if (result < 0)
            asdFatalError(result);
        DAT_00471ba8 = 0;
    }
}
}
