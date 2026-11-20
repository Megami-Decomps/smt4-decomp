#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineJobResult {
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
s32 _ZNK18OnlineResultRecord7isValidEv(const s32 *);
void onlineInstanceCompleteMode2(OnlineInstance *, const OnlineCallbackResult *);
void onlineInstanceCompleteMode3(OnlineInstance *, const OnlineCallbackResult *);
void onlineInstanceCompleteWithChildren(s32 *, s32);
void onlineJobSetStateDone(OnlineJobResult *);

// Deliver an online result to its instance, then complete the job.
void FUN_0030c720(OnlineJobResult *job, const OnlineCallbackResult *result)
{
    OnlineInstance *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(),
                                                       job->instanceId);
    if (instance != NULL) {
        if (_ZNK18OnlineResultRecord7isValidEv(&result->status)) {
            OnlineCallbackResult copy = *result;
            onlineInstanceCompleteMode2(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            onlineInstanceCompleteMode3(instance, &copy);
        }
    } else {
        onlineInstanceCompleteWithChildren(&job->resultState, 4);
    }
    onlineJobSetStateDone(job);
}
}
