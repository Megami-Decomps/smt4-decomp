/* NON_MATCHING: initialization-helper return lifetime and ready/error block placement differ. */
#include "common.h"
#include "nn/Result.h"

extern "C" u8 DAT_005891a4;
extern "C" s32 FUN_0042656c(u32 id, bool *ready);
extern "C" s32 FUN_004264d0(u32 destination, u32 source, u32 size);
extern "C" s32 FUN_00426478(u32 id, u32 value);
extern "C" s32 FUN_004266e4(u32 destination, u32 source, u8 first, u8 second);
extern "C" s32 FUN_0015997c();
extern "C" s32 FUN_00432040(u32 mode);
extern "C" void FUN_00432104();

static __inline s32 sessionEnsureInitialized()
{
    s32 result = 0;
    if (DAT_005891a4 == 0) {
        result = FUN_0015997c();
        if (nnResultIsFailure(result))
            return result;
        result = FUN_00432040(1);
        if (nnResultIsFailure(result))
            FUN_00432104();
        else
            DAT_005891a4 = 1;
    }
    return result;
}

// Prepare a session and apply the caller's value after initialization succeeds.
extern "C" s32 FUN_00426344(u32 id, const u32 *value)
{
    bool ready;
    s32 result = FUN_0042656c(id, &ready);
    if (nnResultIsFailure(result))
        return result;
    if (ready) {
        FUN_004264d0(id, id, 0x40);
    } else {
        result = sessionEnsureInitialized();
        if (nnResultIsFailure(result))
            return result;
        FUN_004266e4(id, id, 0, 0);
    }
    result = FUN_00426478(id, *value);
    return result;
}
