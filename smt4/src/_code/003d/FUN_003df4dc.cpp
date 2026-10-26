/* NON_MATCHING: retail has a linker-NOPed hook between the first failure test (lsrs r1,r0,#31) and its branch, keeps the failure arm inline and uses r5-r7; the hook's shape is unknown. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
u32 FUN_00352f50(u64 handle);
u32 ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size);

// Execute a file operation and translate the service's two special failures to window status codes.
WindowStatusResult FUN_003df4dc(const u64 *handle, void *buffer, u32 size)
{
    if (*handle == 0)
        return WindowStatusResult(0xe0a13882);
    u32 result = FUN_00352f50(*handle);
    if (!nnResultIsFailure(result)) {
        result = ipcRequest04Forward(1, *handle, buffer, size);
        if (result == 0xd880803b)
            return WindowStatusResult(0xd8813889);
        if (result == 0xd900803e)
            return WindowStatusResult(0xd8e1389b);
        if (nnResultIsFailure(result))
            return WindowStatusResult(result);
        return WindowStatusResult(0);
    }
    return WindowStatusResult(result);
}
}
