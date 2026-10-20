#include "common.h"

extern "C" {

void FUN_002e3140(void);
s32 svcSetThreadPriority(u32 handle, u32 priority);
u32 nn_os_detail_ConvertLibraryToSvcPriority(u32 priority);

/* Sets the thread priority of the handle `*handle` (converted to the SVC range) and calls the failure handler when that returns an error. */
void onlineThreadSetPriority(u32 *handle, u32 priority)
{
    u32 svcPriority;
    s32 result;

    svcPriority = nn_os_detail_ConvertLibraryToSvcPriority(priority);
    result = svcSetThreadPriority(*handle, svcPriority);
    if (result < 0) {
        FUN_002e3140();
    }
}

} /* extern "C" */
