#include "shard/W6_W6Match3_OnlineValueCompletion.h"

struct OnlineValueOutput {
    u8 unk00[0xc];
    u32 *destination;
    u8 unk10[8];
    u32 value;
};

struct OnlineValueJob {
    u8 unk000[0x68];
    u32 instanceId;
    u8 unk06c[0x24];
    u8 notification[0xf0];
    OnlineValueOutput output;
};

extern "C" {
void *onlineInstanceTableGetCurrent(void);
void *onlineInstanceTableFind(void *table, u32 id);
u32 refIsNonNegative(const s32 *value);
void FUN_002f3dc4(void *object, const OnlineCallbackResult *result);
void FUN_002f3dde(void *object, const OnlineCallbackResult *result);
u32 FUN_002e9f00(void *notification, u32 state);
void onlineJobSetStateDone(OnlineValueJob *job);


// Store the requested value on success, notify its owner, and finish the job.
void onlineJobFinishValueRequest(OnlineValueJob *job, const OnlineCallbackResult *result)
{
    void *table = onlineInstanceTableGetCurrent();
    void *instance = onlineInstanceTableFind(table, job->instanceId);
    if (instance != NULL) {
        if (refIsNonNegative(&result->status)) {
            *job->output.destination = job->output.value;
            OnlineCallbackResult copy = *result;
            FUN_002f3dc4(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            FUN_002f3dde(instance, &copy);
        }
    } else {
        FUN_002e9f00(job->notification, 4);
    }
    onlineJobSetStateDone(job);
}

} /* extern "C" */
