/* NON_MATCHING: 38 lines with the token-registry module's --fpu=softvfp (wave 82); before it: the result-return storage and the buffer arguments occupy different saved registers (retail r5 and r6/r7 stored with strd, this build r7 and r5/r6 with stm), and this build copies the forwarded result to r1 before its compares. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "code/Code0035.h"

extern "C" {
/* Executes a file operation and maps the service's special failures to window status codes. */
WindowStatusResult FUN_003df4dc(const u64 *handle, void *buffer, u32 size)
{
    if (*handle == 0)
        return WindowStatusResult(0xe0a13882);
    nn::Result result = FUN_00352f50(*handle);
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
} /* extern "C" */
