/* NON_MATCHING: retail packed state stores or parameter lifetime differs. */
#include "common.h"

extern "C" {
extern u32 DAT_0040b88c;
s32 FUN_003606dc(u32 handle, u32 first, u32 second, u32 third, u32 fourth);
void asdFatalError(s32 result);
/* Runs the service helper and reports a fatal result. */
void FUN_00360328(u32 first, u32 second, u32 third, u32 fourth)
{
    s32 result = FUN_003606dc(DAT_0040b88c, first, second, third, fourth);
    if (result < 0)
        asdFatalError(result);
}
}
