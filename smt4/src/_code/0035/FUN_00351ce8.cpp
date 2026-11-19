/* NON_MATCHING: same source as its smt4a twin FUN_00426344 (the initialisation block out of line like retail); remaining: retail keeps the id in r5 and the value pointer in r6 (the build swaps them), predicates the FUN_00351e54 argument moves and sets the helper's zero result before the flag test. */
#include "common.h"
#include "nn/Result.h"

extern "C" s8 g_archiveModuleState;
extern "C" s32 FUN_00351ef0(u32 request, u8 *reply);
extern "C" s32 FUN_00351e54(u32 handle, u32 buffer, u32 value);
extern "C" s32 FUN_00351dfc(u32 buffer, u32 size);
extern "C" s32 FUN_00352008(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag);
extern "C" s32 ipcServiceSessionAcquire();
extern "C" s32 FUN_0035adf0(u32 mode);
extern "C" void ipcServiceSessionRelease();

static __inline s32 sessionEnsureInitialized()
{
    s32 result;
    if (g_archiveModuleState == 0) {
        result = ipcServiceSessionAcquire();
        if (nnResultIsFailure(result))
            return result;
        result = FUN_0035adf0(1);
        if (nnResultIsFailure(result))
            ipcServiceSessionRelease();
        else
            g_archiveModuleState = 1;
    } else {
        result = 0;
    }
    return result;
}

// Prepare a session and apply the caller's value after initialization succeeds.
extern "C" s32 FUN_00351ce8(u32 id, const u32 *value)
{
    u8 ready;
    s32 result = FUN_00351ef0(id, &ready);
    if (nnResultIsFailure(result))
        return result;
    if (!ready) {
        result = sessionEnsureInitialized();
        if (nnResultIsFailure(result))
            return result;
        FUN_00352008(id, id, 0, 0);
    } else {
        FUN_00351e54(id, id, 0x40);
    }
    result = FUN_00351dfc(id, *value);
    return result;
}
