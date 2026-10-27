/* NON_MATCHING: callback destruction branch factoring and five-word error packet copy registers differ; local tail view preserves transition size. */
#include "addon/aocMain.h"
#include "addon/AocHandleJob.h"
#include "shard/ScreenTransitionState.h"
#include "nn/Result.h"
#include "code/Code002b.h"

static inline s32 aocResultLevel(u32 result)
{
    s32 level = result >> 27;
    if (result & 0x80000000)
        level -= 32;
    return level;
}

extern "C" {
extern AocMain *g_aocMain;
u32 legacyResourceIdRemap(WindowStatusResult *result);
s32 FUN_0038b420(AocMain *main, WindowStatusResult result);
u32 resourceResultMatchesKnownRanges(const u32 *result);
u32 resourceResultMatchesRemappedCodes(const u32 *result);
s32 queryResultFailureOnly(const u32 *object);
void FUN_00234124(ScreenTransitionState *transition, const void *result);

// Select the next transition state or dispatch recoverable addon errors.
void FUN_00233e70(ScreenTransitionState *transition, u32 unused, u32 nextState)
{
    // Result data extends beyond the canonical transition prefix.
    struct ResultPacket { u32 status; WindowStatusResult handle; u32 details[2]; };
    struct ResultTransitionView {
        ScreenTransitionState transition;
        u32 unk20C;
        ResultPacket result;
    };
    ResultTransitionView *work = reinterpret_cast<ResultTransitionView *>(transition);
    AocMain *main = g_aocMain;
    kernelThreadJoinAndClose(&main->objA);
    if (legacyResourceIdRemap(&work->result.handle) == 0xC9413891)
        return;
    FUN_0038b420(g_aocMain, work->result.handle);
    if (resourceResultMatchesKnownRanges(&work->result.handle.code)) {
        transition->flags = 4;
        transition->phase = 0;
    } else if (resourceResultMatchesRemappedCodes(&work->result.handle.code) ||
               nnResultIsFailure(queryResultFailureOnly(&main->operation.queryResult))) {
        transition->flags = 3;
        transition->phase = 0;
    } else {
        if (aocResultLevel(legacyResourceIdRemap(&work->result.handle)) == -4 ||
            aocResultLevel(legacyResourceIdRemap(&work->result.handle)) == -5 ||
            legacyResourceIdRemap(&work->result.handle) == 0xC8813890) {
            ResultPacket result = work->result;
            FUN_00234124(transition, &result);
            return;
        }
        transition->flags = nextState;
        transition->phase = 0;
    }
    if (transition->callback != NULL) {
        transition->callback->vtable->destroy(transition->callback);
        transition->callback = NULL;
    }
}
}
