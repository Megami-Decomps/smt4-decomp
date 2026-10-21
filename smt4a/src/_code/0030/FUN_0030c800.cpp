/* NON_MATCHING: retail reserves stack space in PUSH and schedules its result copy after the success comparison; compiled code uses a separate SUB and different registers. */
#include "common.h"

struct OnlineResult {
    s32 status; // 0x00
    u32 value;  // 0x04
    u32 detail; // 0x08
};
struct OnlineJob {
    u8 unk00[0x68]; // 0x00
    u32 instanceId; // 0x68
    u8 unk6c[0x14]; // 0x6c
    u8 error[1];    // 0x80
};
struct OnlineInstance;
struct OnlineInstanceTable;

extern "C" {
OnlineInstanceTable* onlineInstanceTableGetCurrent(void);
OnlineInstance* onlineInstanceTableFind(OnlineInstanceTable* table, u32 id);
s32 refIsNonNegative(const OnlineResult* result);
void FUN_002f3dc4(OnlineInstance* instance, OnlineResult* result);
void FUN_002f3dde(OnlineInstance* instance, OnlineResult* result);
void FUN_002e9f00(void* error, s32 code);
void onlineJobSetStateDone(OnlineJob* job);

// Delivers a completion result to its instance and finishes the job.
void FUN_0030c800(OnlineJob* job, const OnlineResult* status)
{
    OnlineInstance* instance = onlineInstanceTableFind(
        onlineInstanceTableGetCurrent(), job->instanceId);
    if (instance != NULL) {
        s32 succeeded = refIsNonNegative(status);
        OnlineResult result = *status;
        if (succeeded) {
            FUN_002f3dc4(instance, &result);
        } else {
            FUN_002f3dde(instance, &result);
        }
    } else {
        FUN_002e9f00(job->error, 4);
    }
    onlineJobSetStateDone(job);
}
}
