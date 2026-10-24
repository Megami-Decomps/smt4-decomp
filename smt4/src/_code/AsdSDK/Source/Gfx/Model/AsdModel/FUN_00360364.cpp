/* NON_MATCHING: retail tests the result sign with lsrs r0,r0,#31 (and swaps r4/r5); armcc here emits cmp r0,#0. */
#include "common.h"
#include "nn/svc.h"
extern "C" {
extern u8 DAT_00471ba8;
void FUN_003607d0();
void asdFatalError(s32 result);
/* Closes the initialized service handle and clears its initialization flag. */
void FUN_00360364(const u32 *handle)
{
    if (DAT_00471ba8) {
        FUN_003607d0();
        s32 result = svcCloseHandle(*handle);
        if (result < 0)
            asdFatalError(result);
        DAT_00471ba8 = 0;
    }
}
}
