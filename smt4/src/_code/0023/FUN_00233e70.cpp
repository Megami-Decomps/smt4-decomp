/* NON_MATCHING: 58 lines: each state change is the shared change-and-destroy body as retail has it, but retail keeps g_aocMain's address in r8 and a zero in r7 from the first test, passes the result pair with one ldm and lays the destroy call out in another arm. */
#include "addon/aocMain.h"
#include "addon/AocHandleJob.h"
#include "shard/ScreenTransitionState.h"
#include "nn/Result.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "code/Code002b.h"

static inline s32 aocResultLevel(u32 result)
{
    s32 level = result >> 27;
    if (result & 0x80000000)
        level -= 32;
    return level;
}

/* Enters `state` at its first phase and destroys the callback of the state it leaves. */
static __inline void transitionChangeState(ScreenTransitionState *transition, u32 state)
{
    transition->flags = state;
    transition->phase = 0;
    if (transition->callback != NULL) {
        transition->callback->vtable->destroy(transition->callback);
        transition->callback = NULL;
    }
}

extern "C" {
u32 legacyResourceIdRemap(WindowStatusResult *result);
s32 FUN_0038b420(AocMain *main, WindowStatusResult result);
u32 resourceResultMatchesKnownRanges(const u32 *result);
u32 resourceResultMatchesRemappedCodes(const u32 *result);
s32 queryResultFailureOnly(const u32 *object);
void FUN_00234124(ScreenTransitionState *transition, const RequestParameters *result);

// Select the next transition state or dispatch recoverable addon errors.
void FUN_00233e70(ScreenTransitionState *transition, u32 unused, u32 nextState)
{
    // Result data extends beyond the canonical transition prefix.
    struct ResultTransitionView {
        ScreenTransitionState transition;
        u32 unk20C;
        RequestParameters result;
    };
    ResultTransitionView *work = reinterpret_cast<ResultTransitionView *>(transition);
    AocMain *main = g_aocMain;
    kernelThreadJoinAndClose(&main->thread);
    if (legacyResourceIdRemap(&work->result.result) == 0xC9413891)
        return;
    FUN_0038b420(g_aocMain, work->result.result);
    if (resourceResultMatchesKnownRanges(&work->result.result.code)) {
        transitionChangeState(transition, 4);
    } else if (resourceResultMatchesRemappedCodes(&work->result.result.code) ||
               nnResultIsFailure(queryResultFailureOnly(&main->queryResult))) {
        transitionChangeState(transition, 3);
    } else if (aocResultLevel(legacyResourceIdRemap(&work->result.result)) != -4 &&
               aocResultLevel(legacyResourceIdRemap(&work->result.result)) != -5 &&
               legacyResourceIdRemap(&work->result.result) != 0xC8813890) {
        transitionChangeState(transition, nextState);
    } else {
        RequestParameters result = work->result;
        FUN_00234124(transition, &result);
    }
}
}
