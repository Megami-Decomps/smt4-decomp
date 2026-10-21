#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineInstanceTable;
struct OnlineInstance;
struct OnlineVectorEntry;

struct OnlineValueVector {
    OnlineVectorEntry *begin;    // 0x00
    OnlineVectorEntry *end;      // 0x04
    OnlineVectorEntry *capacity; // 0x08
};

struct OnlineRequestPrefix {
    u8 unk00[0x44];
    u32 instanceId; // 0x44
};

struct OnlineVectorCompletionJob {
    u8 unk00[0x68];
    u32 instanceId;              // 0x68
    u8 unk6c[0x24];
    OnlineValueVector *output;   // 0x90
    OnlineValueVector values;    // 0x94
    u8 unka0[8];
    OnlineRequestPrefix request; // 0xa8
};

extern "C" {
OnlineInstanceTable *onlineInstanceTableGetCurrent(void);
OnlineInstance *onlineInstanceTableFind(OnlineInstanceTable *table, u32 id);
s32 refIsNonNegative(s32 *status);
OnlineValueVector *FUN_001343c8(OnlineValueVector *destination, const OnlineValueVector *source);
void FUN_002f3dc4(OnlineInstance *instance, const OnlineCallbackResult *result);
void FUN_002f3dde(OnlineInstance *instance, const OnlineCallbackResult *result);
u32 FUN_002e9f00(OnlineRequestPrefix *request, u32 error);
void onlineJobSetStateDone(OnlineVectorCompletionJob *job);

// Publish successful vector output, notify the instance, then finish the job.
void FUN_00301a60(OnlineVectorCompletionJob *job, OnlineCallbackResult *result)
{
    OnlineInstance *instance = onlineInstanceTableFind(
        onlineInstanceTableGetCurrent(), job->instanceId);
    if (instance != NULL) {
        if (refIsNonNegative(&result->status)) {
            if (job->output != NULL)
                FUN_001343c8(job->output, &job->values);
            OnlineCallbackResult copy = *result;
            FUN_002f3dc4(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            FUN_002f3dde(instance, &copy);
        }
    } else {
        FUN_002e9f00(&job->request, 4);
    }
    onlineJobSetStateDone(job);
}
}
