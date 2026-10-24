#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineInstanceTable;
struct OnlineInstance;
struct OnlineCallbackRequest;

struct OnlineOutputCallbackJob {
    u8 unk000[0x6c];
    u32 instanceId;
    u8 unk070[0x28];
    u8 request[0xd4];
    u32 value;
    u8 unk170[0x54];
    u32* output;
};

extern "C" {
OnlineInstanceTable* onlineInstanceTableGetCurrent(void);
OnlineInstance* onlineInstanceTableFind(OnlineInstanceTable* table, u32 id);
s32 _ZNK18OnlineResultRecord7isValidEv(s32* status);
void FUN_002f3dc4(OnlineInstance* instance, const OnlineCallbackResult* result);
void FUN_002f3dde(OnlineInstance* instance, const OnlineCallbackResult* result);
u32 FUN_002e9f00(OnlineCallbackRequest* request, u32 state);
void onlineJobSetStateDone(OnlineOutputCallbackJob* job);

void FUN_0030ca30(OnlineOutputCallbackJob* job, OnlineCallbackResult* result)
{
    OnlineInstance* instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), job->instanceId);
    if (instance != NULL) {
        if (_ZNK18OnlineResultRecord7isValidEv(&result->status) != 0) {
            if (job->output != NULL) {
                *job->output = job->value;
            }
            OnlineCallbackResult copy = *result;
            FUN_002f3dc4(instance, &copy);
        } else {
            OnlineCallbackResult copy = *result;
            FUN_002f3dde(instance, &copy);
        }
    } else {
        FUN_002e9f00(reinterpret_cast<OnlineCallbackRequest*>(job->request), 4);
    }
    onlineJobSetStateDone(job);
}
}
