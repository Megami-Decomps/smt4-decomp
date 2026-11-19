/* NON_MATCHING: retail keeps the id in r5 and the value pointer in r6 (the build swaps them) and predicates the FUN_004264d0 argument moves. */
#include "common.h"
#include "nn/Result.h"

extern "C" u8 DAT_005891a4;
extern "C" s32 FUN_0042656c(u32 request, u8 *reply);
extern "C" s32 FUN_004264d0(u32 handle, u32 buffer, u32 value);
extern "C" s32 FUN_00426478(u32 buffer, u32 size);
extern "C" s32 FUN_004266e4(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag);
extern "C" s32 ipcServiceSessionAcquire();
extern "C" s32 FUN_00432040(u32 mode);
extern "C" void ipcServiceSessionRelease();

static __inline s32 sessionEnsureInitialized()
{
    s32 result = 0;
    if (DAT_005891a4 == 0) {
        result = ipcServiceSessionAcquire();
        if (nnResultIsFailure(result))
            return result;
        result = FUN_00432040(1);
        if (nnResultIsFailure(result))
            ipcServiceSessionRelease();
        else
            DAT_005891a4 = 1;
    }
    return result;
}

// Prepare a session and apply the caller's value after initialization succeeds.
extern "C" nn::Result FUN_00426344(u32 id, const u32 *value)
{
    u8 ready;
    s32 result = FUN_0042656c(id, &ready);
    if (nnResultIsFailure(result))
        return result;
    if (!ready) {
        result = sessionEnsureInitialized();
        if (nnResultIsFailure(result))
            return result;
        FUN_004266e4(id, id, 0, 0);
    } else {
        FUN_004264d0(id, id, 0x40);
    }
    result = FUN_00426478(id, *value);
    return result;
}
