#include "common.h"
#include "classes/WindowStatus.h"

struct AocMain;

extern "C" {
u8 FUN_0015e8b4(WindowStatusResult *result);
u32 queuedHandleGetToken(WindowStatusResult *handle);
void FUN_002b4828(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_0038b420(AocMain *main, WindowStatusResult result)
{
    if (FUN_0015e8b4(&result) != 0) {
        FUN_002b4828(queuedHandleGetToken(&result));
        return 1;
    }
    return 0;
}
}
