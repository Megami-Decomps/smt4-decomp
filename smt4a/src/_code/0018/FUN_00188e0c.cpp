/* NON_MATCHING: sign test only: retail extracts the sign bit with `lsrs r0,r0,#31; beq`, built uses `cmp r0,#0; bge` */
/* Forwards a failed FUN_0016f1d4 result (sign bit set) to sysFatalBreak. */
#include "common.h"

extern "C" {

extern s32 FUN_0016f1d4(void);
extern void sysFatalBreak(void);

void FUN_00188e0c(void)
{
    if (FUN_0016f1d4() < 0) {
        sysFatalBreak();
    }
}

}
