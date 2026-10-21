/* NON_MATCHING: Ospace restores the retail stack-save shape, but result/output field addresses use separate bases and two extra instructions instead of retail's shared job+0x180 base. */
#include "common.h"

struct OnlineReference {
    s32 index;
    u32 unk04;
    u32 unk08;
};
struct OnlineResultPair { u32 first, second; };
struct OnlineCompletionJob {
    u8 unk000[0x68];
    u32 instanceKey; // 0x68
    u8 unk06c[0x24];
    u8 state[0x114]; // 0x90
    OnlineResultPair *output; // 0x1a4
    u8 unk1a8[8];
    OnlineResultPair result; // 0x1b0
};
struct OnlineInstanceTable;
struct OnlineInstance;

extern "C" {
OnlineInstanceTable *onlineInstanceTableGetCurrent(void);
OnlineInstance *onlineInstanceTableFind(OnlineInstanceTable *table, u32 key);
s32 refIsNonNegative(s32 *index);
void FUN_002f3dc4(OnlineInstance *instance, const OnlineReference *reference);
void FUN_002f3dde(OnlineInstance *instance, const OnlineReference *reference);
void FUN_002e9f00(void *state, s32 value);
void onlineJobSetStateDone(OnlineCompletionJob *job);

// Complete an online job by delivering its result/reference to the matching instance.
void FUN_0030c910(OnlineCompletionJob *job, OnlineReference *reference)
{
    OnlineInstance *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), job->instanceKey);
    if (instance != NULL) {
        if (refIsNonNegative(&reference->index) != 0) {
            *job->output = job->result;
            OnlineReference copied = *reference;
            FUN_002f3dc4(instance, &copied);
        } else {
            OnlineReference copied = *reference;
            FUN_002f3dde(instance, &copied);
        }
    } else {
        FUN_002e9f00(job->state, 4);
    }
    onlineJobSetStateDone(job);
}
}
