/* NON_MATCHING: control flow, lock release and results match; retail hoists the zero stored into the closed handle into r7 before the reference-count test (pushing r4-r8), where this build materialises it with moveq at the store. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

extern u8 g_moduleCriticalSection7[];  /* guards the session reference count */
extern s32 DAT_005c0ac4;   /* session reference count */
extern u32 g_ipcServiceSessionHandle;

}

extern "C" {

/* Drops one reference to the service session, closing the session handle on the last one;
 * returns 0, the close error, or an error code when no reference is held. */
nn::Result ipcServiceSessionRelease(void)
{
    ScopedCriticalLock lock(g_moduleCriticalSection7);
    if (DAT_005c0ac4 == 0) {
        return nn::Result(0xC8A06BF8);
    }
    if (DAT_005c0ac4 == 1) {
        nn::Result result = nn::svc::CloseHandle(g_ipcServiceSessionHandle);
        if (nnResultIsFailure(result)) {
            return result;
        }
        g_ipcServiceSessionHandle = 0;
    }
    DAT_005c0ac4--;
    return nn::Result(0);
}

} /* extern "C" */
