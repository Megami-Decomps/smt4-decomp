#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineInstance;
struct OnlineInstanceTable;
struct OnlineDispatchJob {
    u8 unk00[0x6c];
    u32 instanceId; // 0x6c
};

extern "C" {
OnlineInstanceTable *onlineInstanceTableGetCurrent();
OnlineInstance *onlineInstanceTableFind(OnlineInstanceTable *table, u32 id);
void FUN_002fa722(OnlineInstance *instance, u32 value, const OnlineCallbackResult *result);
void onlineJobSetStateDone(OnlineDispatchJob *job);

// Deliver the result to the owning instance, then finish the job.
void onlineJobDispatchInstanceResult(OnlineDispatchJob *job, u32 value, const OnlineCallbackResult *result)
{
    OnlineInstance *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), job->instanceId);
    if (instance != NULL) {
        OnlineCallbackResult copy = *result;
        FUN_002fa722(instance, value, &copy);
    }
    onlineJobSetStateDone(job);
}
}
