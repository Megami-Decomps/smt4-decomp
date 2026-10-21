#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineJob {
    u8 unk00[0x68];
    u32 instanceId; // 0x68
    u8 unk6c[0x14];
    s32 resultState; // 0x80
};
struct OnlineInstance;
struct OnlineInstanceTable;

extern "C" {
OnlineInstanceTable *onlineInstanceTableGetCurrent(void);
OnlineInstance *onlineInstanceTableFind(OnlineInstanceTable *, u32);
s32 refIsNonNegative(const s32 *);
void FUN_002f3dc4(OnlineInstance *, const OnlineCallbackResult *);
void FUN_002f3dde(OnlineInstance *, const OnlineCallbackResult *);
void FUN_002e9f00(s32 *, s32);
void onlineJobSetStateDone(OnlineJob *);

// Deliver an online result to its instance, then complete the job.
void FUN_0030c720(OnlineJob *job, const OnlineCallbackResult *result)
{
    OnlineInstance *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(),
                                                       job->instanceId);
    if (instance != NULL) {
        if (refIsNonNegative(&result->status)) {
            OnlineCallbackResult copy = *result;
            FUN_002f3dc4(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            FUN_002f3dde(instance, &copy);
        }
    } else {
        FUN_002e9f00(&job->resultState, 4);
    }
    onlineJobSetStateDone(job);
}
}
