/* NON_MATCHING: control flow, lock release and results match; retail hoists the zero stored into the closed handle into r7 before the reference-count test (pushing r4-r8), where this build materialises it with moveq at the store. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

extern u8 g_moduleCriticalSection3[];  /* guards the session reference count */
extern s32 DAT_00471b10;   /* session reference count */
extern u32 DAT_00472ad8;   /* service session handle */

/* Drops one reference to the "ndm:u" service session, closing the session handle on the last one;
 * returns 0, the close error, or an error code when no reference is held. */
nn::Result ipcServiceSessionRelease(void)
{
    ScopedCriticalLock lock(g_moduleCriticalSection3);
    if (DAT_00471b10 == 0) {
        return nn::Result(0xC8A06BF8);
    }
    if (DAT_00471b10 == 1) {
        nn::Result result = nn::svc::CloseHandle(DAT_00472ad8);
        if (nnResultIsFailure(result)) {
            return result;
        }
        DAT_00472ad8 = 0;
    }
    DAT_00471b10--;
    return nn::Result(0);
}

} /* extern "C" */
