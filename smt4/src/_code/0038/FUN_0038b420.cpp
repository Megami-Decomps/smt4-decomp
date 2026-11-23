#include "common.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"

extern "C" {
u8 FUN_0015e8b4(WindowStatusResult *result);
u32 queuedHandleGetToken(WindowStatusResult *handle);
void appletShowOperationMessage(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_0038b420(AocMain *main, WindowStatusResult result)
{
    if (FUN_0015e8b4(&result) != 0) {
        appletShowOperationMessage(queuedHandleGetToken(&result));
        return 1;
    }
    return 0;
}
}
