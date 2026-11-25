/* NON_MATCHING: checks both kernel results before using the memory total; retail assumes success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ProcessMemoryUsage.h"

extern "C" {
extern const ProcessMemoryUsageQuery DAT_0040b820;
s32 FUN_001132e4(u32 *handle, u32 process);

/* Reads the current process's committed memory from its resource limit. */
u32 asdMemoryGetProcessCommittedBytes(void)
{
    u32 limit = 0;
    s32 resource = DAT_0040b820.committedMemory;
    if (!nnResultIsSuccess(FUN_001132e4(&limit, DAT_0040b820.process)))
        return 0;

    s64 committed;
    s32 result = nn::svc::GetResourceLimitCurrentValues(&committed, limit, &resource, 1);
    nn::svc::CloseHandle(limit);
    return nnResultIsSuccess(result) ? (u32)committed : 0;
}
} /* extern "C" */
