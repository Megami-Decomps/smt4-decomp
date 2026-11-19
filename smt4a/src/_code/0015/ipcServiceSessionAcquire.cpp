#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

static const char g_ndmServiceName[] = "ndm:u";

extern "C" {

extern u8 g_moduleCriticalSection7[];        /* 0x4e6cd0: nn::os::CriticalSection */
extern s32 DAT_005c0ac4;     /* 0x471b10 */
extern u32 g_ipcServiceSessionHandle[];    /* 0x472ad8 */

void FUN_0016f864(void);
u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *session, const char *name, u32 length, u32 flags);

/* Opens the "ndm:u" service session on the first reference; returns the failure result or 0. */
nn::Result ipcServiceSessionAcquire(void)
{
    ScopedCriticalLock guard(g_moduleCriticalSection7);

    if (DAT_005c0ac4 == 0) {
        FUN_0016f864();
        nn::Result result = asdModelForwardChecked(g_ipcServiceSessionHandle, g_ndmServiceName, libc_strlen(g_ndmServiceName), 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    DAT_005c0ac4++;
    return nn::Result(0);
}

} /* extern "C" */
