#include "common.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"

extern "C" {
u8 FUN_001d25dc(WindowStatusResult *result);
u32 queuedHandleGetToken(WindowStatusResult *handle);
void appletShowOperationMessage(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_00473d74(AocMain *main, WindowStatusResult result)
{
    if (FUN_001d25dc(&result) != 0) {
        appletShowOperationMessage(queuedHandleGetToken(&result));
        return 1;
    }
    return 0;
}
}
