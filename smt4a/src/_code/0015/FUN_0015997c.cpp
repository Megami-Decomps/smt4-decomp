/* NON_MATCHING: only register allocation differs (retail reuses r5 for the refcount pointer and then the success result; built uses r6 for the pointer and r5 for the result) */
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

static const char g_ndmServiceName[] = "ndm:u";

extern "C" {

extern u8 g_moduleCriticalSection7[];        /* 0x4e6cd0: nn::os::CriticalSection */
extern s32 DAT_005c0ac4;     /* 0x471b10 */
extern u32 g_ipcServiceSessionHandle[];    /* 0x472ad8 */

void FUN_0016f864(void);
u32 libc_strlen(const char *text);
s32 FUN_0016f988(u32 *session, const char *name, u32 length, u32 flags);

/* Opens the "ndm:u" service session on the first reference; returns the failure result or 0. */
s32 FUN_0015997c(void)
{
    ScopedCriticalLock guard(g_moduleCriticalSection7);

    if (DAT_005c0ac4 == 0) {
        FUN_0016f864();
        s32 result = FUN_0016f988(g_ipcServiceSessionHandle, g_ndmServiceName, libc_strlen(g_ndmServiceName), 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    DAT_005c0ac4++;
    s32 success = 0;
    return success;
}

} /* extern "C" */
