/* NON_MATCHING: retail folds stack reservation into PUSH and copies the result with scalar loads; compiled code uses SUB and LDM. */
#include "common.h"

struct OnlineResult {
    s32 status; // 0x00
    u32 value;  // 0x04
    u32 detail; // 0x08
};

struct OnlineJob {
    u8 unk00[0x70]; // 0x00
    u8 error[0x60]; // 0x70
    u32 instanceId; // 0xd0
};
struct OnlineInstance;
struct OnlineInstanceTable;

extern "C" {
OnlineInstanceTable* onlineInstanceTableGetCurrent(void);
OnlineInstance* onlineInstanceTableFind(OnlineInstanceTable* table, u32 id);
void FUN_002f3dc4(OnlineInstance* instance, OnlineResult* result);
void FUN_002f3dde(OnlineInstance* instance, OnlineResult* result);
void FUN_002e9f00(void* error, s32 code);
void onlineJobSetStateDone(OnlineJob* job);

// Delivers a completion result to the instance and finishes the job.
void FUN_002fdce8(OnlineJob* job, const OnlineResult* status)
{
    OnlineInstance* instance = onlineInstanceTableFind(
        onlineInstanceTableGetCurrent(), job->instanceId);
    if (instance != NULL) {
        OnlineResult result = *status;
        if (result.status >= 0) {
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
