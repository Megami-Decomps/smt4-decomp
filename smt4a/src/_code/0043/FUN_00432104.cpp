/* NON_MATCHING: control flow, per-path lock release and return temporaries match retail; retail also keeps a hoisted zero in r7 (used for the handle store, push of r4-r8) where the build uses movs. */
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
s32 FUN_00432104(void)
{
    s32 result = 0;
    ScopedCriticalLock lock(g_moduleCriticalSection7);
    if (DAT_005c0ac4 == 0) {
        result = (s32)0xC8A06BF8;
        return result;
    }
    if (DAT_005c0ac4 == 1) {
        result = nn::svc::CloseHandle(g_ipcServiceSessionHandle);
        if (nnResultIsFailure(result)) {
            return result;
        }
        g_ipcServiceSessionHandle = 0;
    }
    DAT_005c0ac4--;
    result = 0;
    return result;
}

} /* extern "C" */
