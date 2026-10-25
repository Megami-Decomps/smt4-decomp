/* NON_MATCHING: instructions and call relocations match; armcc reverses the service-ID and initializer-address literal-pool words, changing three load displacements. */
#include "common.h"

struct PlatformInitializer {
    u32 unk00[4];
    u32 argument; // 0x10
};
extern "C" PlatformInitializer g_fsWaitNotification2;
extern "C" s32 FUN_00129584(PlatformInitializer *initializer, u32 service);
extern "C" s32 FUN_0013af84(u32 service);
extern "C" void FUN_002bbb2c(s32 result, u32 location, u32 failed);

static __inline void checkPlatformResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_002bbb2c(result, location, failed);
}

// Initialize both platform services and report a failing result with its program counter.
extern "C" void FUN_00127138(u32 argument)
{
    g_fsWaitNotification2.argument = argument;
    s32 result = FUN_00129584(&g_fsWaitNotification2, 0x207);
    checkPlatformResult(result, __current_pc());
    result = FUN_0013af84(0x207);
    checkPlatformResult(result, __current_pc());
}
