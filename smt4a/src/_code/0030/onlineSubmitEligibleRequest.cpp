/* NON_MATCHING: Thumb status testing, guard-address setup and cleanup-block layout differ; retail shares the exit epilogue. Candidate Ospace/O2. */
#include "classes/Obj55b28c.h"
#include "nn/Result.h"

struct OnlineRequestManager {
    u8 unk00[0x58]; // 0x00
    u8 mutex;       // 0x58
};

struct OnlineRequestState {
    u8 unk00[0x44]; // 0x00
    u32 argument;    // 0x44
};

struct OnlineSubmitResult {
    s32 status; // 0x00
    u32 value;  // 0x04
    u32 extra;  // 0x08
};

struct OnlineRequestSettings {
    u8 unk00[0x40]; // 0x00
    u32 kind;        // 0x40
};

struct OnlineClient;
typedef void (*OnlineResultCallback)(u32 request, u32* first, u32* second);

extern "C" {
OnlineRequestManager* onlineContextGetInstance();
s32 FUN_002e789a(const OnlineRequestState* state);
void FUN_00123474(u32 request, u32* first, u32* second);
void FUN_002f6740(OnlineSubmitResult* result, OnlineClient* client, OnlineResultCallback callback,
                   const u32* argument, u32 kind);
void FUN_002f674e(OnlineClient* client);
extern OnlineRequestSettings DAT_005949d8;

// Submit an eligible request while holding the manager lock; release the client on failure.
u32 onlineSubmitEligibleRequest(void*, const OnlineRequestState* state, OnlineClient* client)
{
    OnlineRequestManager* manager = onlineContextGetInstance();
    Obj55b28c guard(&manager->mutex);
    if (FUN_002e789a(state)) {
        u32 argument = state->argument;
        OnlineSubmitResult result;
        FUN_002f6740(&result, client, FUN_00123474, &argument, DAT_005949d8.kind);
        if (!nnResultIsFailure(result.status)) {
            return 1;
        }
        FUN_002f674e(client);
    }
    return 0;
}
}
