/* NON_MATCHING: only the -1 store / context test block differs: retail materialises -1 in r1 and loads the context into r0 after the store (the build loads it first into r1); declaring FUN_002759bc with a context argument fixes the registers, so the call may really pass it. */
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/BtlStageStackRegion.h"
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "sys/ResultReport.h"

extern "C" {
s32 FUN_002c40f8(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002759bc(void);
void mdlHandleArrayDestroy(BattleStageModel *stage);

/* Waits for the loader thread to end, then finalizes and closes it. */
static __inline void stageStopThread(BattleStageModel *stage)
{
    s32 signaled;
    u32 handles[1] = { stage->thread.handle };
    s32 result = FUN_002c40f8(&signaled, handles, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    stage->thread.joined = 1;
    stage->thread.finalize();
    stage->thread.NnOsHandle::~NnOsHandle();
}

/* Tears the stage model down: joins its loader thread, releases the thread's stack, the frame
 * textures and the model handles. */
void FUN_003c7f20(BattleStageModel *stage)
{
    stageStopThread(stage);
    if (stage->stackRegion != NULL) {
        FUN_002c3f5c(stage->stackRegion);
        delete static_cast<StackRegion *>(stage->stackRegion);
        stage->stackRegion = NULL;
    }
    if (stage->threadStack != NULL) {
        asdMemFree(stage->threadStack);
        stage->threadStack = NULL;
    }
    stage->unkc0 = -1;
    if (stage->context != NULL) {
        stage->context = NULL;
    }
    FUN_002759bc();
    mdlHandleArrayDestroy(stage);
    stage->state = 0;
}

} /* extern "C" */
