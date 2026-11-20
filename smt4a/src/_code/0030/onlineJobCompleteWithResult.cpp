#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineInstanceTable;
struct OnlineInstance;


struct OnlineCallbackRequest {
    u8 data[0xa4];
};

struct OnlineCallbackJob {
    u8 unk000[0x6c]; // 0x000
    u32 instanceId;   // 0x06c
    u8 unk070[0x28];  // 0x070
    OnlineCallbackRequest request; // 0x098
    u32 value;        // 0x13c
    u8 unk140[0x48];  // 0x140
    u32* output;      // 0x188
};

extern "C" {
OnlineInstanceTable* onlineInstanceTableGetCurrent();
OnlineInstance* onlineInstanceTableFind(OnlineInstanceTable*, u32);
s32 _ZNK18OnlineResultRecord7isValidEv(s32*);
void onlineInstanceCompleteMode2(OnlineInstance*, const OnlineCallbackResult*);
void onlineInstanceCompleteMode3(OnlineInstance*, const OnlineCallbackResult*);
u32 onlineInstanceCompleteWithChildren(OnlineCallbackRequest*, u32);
void onlineJobSetStateDone(OnlineCallbackJob*);

// Forward the completion result to its instance, then finish the originating job.
void onlineJobCompleteWithResult(OnlineCallbackJob* job, OnlineCallbackResult* result)
{
    OnlineInstance* instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(),
                                                       job->instanceId);
    if (instance != NULL) {
        if (_ZNK18OnlineResultRecord7isValidEv(&result->status) != 0) {
            if (job->output != NULL) {
                *job->output = job->value;
            }
            OnlineCallbackResult copy = *result;
            onlineInstanceCompleteMode2(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            onlineInstanceCompleteMode3(instance, &copy);
        }
    } else {
        onlineInstanceCompleteWithChildren(&job->request, 4);
    }
    onlineJobSetStateDone(job);
}
}
