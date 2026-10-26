/* NON_MATCHING: native result construction keeps `result` in r1 across the later checks and uses different saved registers; retail also lays out the first failure test with a NOP. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
u32 FUN_00427bf0(u64 handle);
u32 ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size);

// Execute a file operation and translate the service's two special failures to window status codes.
WindowStatusResult FUN_005003b4(const u64 *handle, void *buffer, u32 size)
{
    if (*handle == 0)
        return WindowStatusResult(0xe0a13882);
    u32 result = FUN_00427bf0(*handle);
    if (nnResultIsFailure(result))
        return WindowStatusResult(result);
    result = ipcRequest04Forward(1, *handle, buffer, size);
    if (result == 0xd880803b)
        return WindowStatusResult(0xd8813889);
    if (result == 0xd900803e)
        return WindowStatusResult(0xd8e1389b);
    if (nnResultIsFailure(result))
        return WindowStatusResult(result);
    return WindowStatusResult(0);
}
}
