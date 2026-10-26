/* NON_MATCHING: only register allocation differs (retail reuses r5 for the refcount pointer and then the success result; built uses r6 for the pointer and r5 for the result) */
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "code/Code002c_Result.h"

static const char g_ndmServiceName[] = "ndm:u";

extern "C" {

extern u8 g_moduleCriticalSection3[];        /* 0x4e6cd0: nn::os::CriticalSection */
extern s32 DAT_00471b10;     /* 0x471b10 */
extern u32 DAT_00472ad8[];    /* 0x472ad8 */

u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *session, const char *name, u32 length, u32 flags);

/* Opens the "ndm:u" service session on the first reference; returns the failure result or 0. */
s32 FUN_0011c834(void)
{
    ScopedCriticalLock guard(g_moduleCriticalSection3);

    if (DAT_00471b10 == 0) {
        FUN_002c1398();
        s32 result = asdModelForwardChecked(DAT_00472ad8, g_ndmServiceName, libc_strlen(g_ndmServiceName), 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    DAT_00471b10++;
    s32 success = 0;
    return success;
}

} /* extern "C" */
