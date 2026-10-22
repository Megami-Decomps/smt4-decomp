/* NON_MATCHING: native result construction uses different saved registers and omits retail's removed-hook NOPs. */
#include "classes/WindowStatus.h"

extern "C" {
u32 FUN_00427bf0(u64 handle);
u32 FUN_0042679c(u32 mode, u64 handle, void *buffer, u32 size);

// Execute a file operation and translate the service's two special failures to window status codes.
WindowStatusResult FUN_005003b4(const u64 *handle, void *buffer, u32 size)
{
    if (*handle == 0)
        return WindowStatusResult(0xe0a13882);
    u32 result = FUN_00427bf0(*handle);
    if ((s32)result < 0)
        return WindowStatusResult(result);
    result = FUN_0042679c(1, *handle, buffer, size);
    if (result == 0xd880803b)
        return WindowStatusResult(0xd8813889);
    if (result == 0xd900803e)
        return WindowStatusResult(0xd8e1389b);
    if ((s32)result < 0)
        return WindowStatusResult(result);
    return WindowStatusResult(0);
}
}
