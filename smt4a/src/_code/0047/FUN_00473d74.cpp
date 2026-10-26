#include "common.h"
#include "classes/WindowStatus.h"

struct AocMain;

extern "C" {
u8 FUN_001d25dc(WindowStatusResult *result);
u32 queuedHandleGetToken(WindowStatusResult *handle);
void FUN_001764f4(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_00473d74(AocMain *main, WindowStatusResult result)
{
    if (FUN_001d25dc(&result) != 0) {
        FUN_001764f4(queuedHandleGetToken(&result));
        return 1;
    }
    return 0;
}
}
