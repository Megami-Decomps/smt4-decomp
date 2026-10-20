/* NON_MATCHING: the svc is an inline-asm-only instruction (declared as a function, svc 0x23 = CloseHandle) */
#include "common.h"
#include "nn/Result.h"

extern "C" {

void svcCloseHandle(u32 handle);
s32 FUN_00441e1c(void);
void sysFatalBreak(void);
void asdMemFree(void *ptr);

extern u32 DAT_00588118;  /* kernel handle */
extern void *DAT_00588114;  /* buffer */

/* Closes the handle and frees the buffer after shutting the network layer down (FUN_00441e1c);
 * returns 1 when that succeeded. */
s32 FUN_004321a4(void)
{
    if (DAT_00588118 != 0) {
        svcCloseHandle(DAT_00588118);
        DAT_00588118 = 0;
    }
    s32 result = FUN_00441e1c();

    if (nnResultIsFailure(result)) {
        sysFatalBreak();
    }
    if (!nnResultIsSuccess(result)) {
        return 0;
    }
    if (DAT_00588114 != NULL) {
        asdMemFree(DAT_00588114);
        DAT_00588114 = NULL;
    }
    return 1;
}

} /* extern "C" */
