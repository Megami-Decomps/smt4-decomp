/* NON_MATCHING: only register allocation differs (retail reuses r5 for the refcount pointer and then the success result; built uses r6 for the pointer and r5 for the result) */
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

static const char g_ndmServiceName[] = "ndm:u";

extern "C" {

extern u8 g_ndmLock[];        /* 0x4e6cd0: nn::os::CriticalSection */
extern s32 g_ndmRefCount;     /* 0x471b10 */
extern u32 g_ndmSession[];    /* 0x472ad8 */

void FUN_002c1398(void);
u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *session, const char *name, u32 length, u32 flags);

/* Opens the "ndm:u" service session on the first reference; returns the failure result or 0. */
s32 FUN_0011c834(void)
{
    ScopedCriticalLock guard(g_ndmLock);

    if (g_ndmRefCount == 0) {
        FUN_002c1398();
        s32 result = asdModelForwardChecked(g_ndmSession, g_ndmServiceName, libc_strlen(g_ndmServiceName), 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    g_ndmRefCount++;
    s32 success = 0;
    return success;
}

} /* extern "C" */
