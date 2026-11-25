/* NON_MATCHING: only the -1 store differs: retail uses r1, this build r0. The field is written as a word;
 * there is no evidence for a bytewise clear (which would match). */
#include "nn/os/WaitObject.h"
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/BtlStageStackRegion.h"
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "sys/ResultReport.h"

extern "C" {
void frameTexturesRelease(void);
void mdlHandleArrayDestroy(BattleStageModel *stage);

/* Waits for the loader thread to end, then finalizes and closes it. */
static __inline void stageStopThread(BattleStageModel *stage)
{
    nn::os::ThreadJoin(&stage->thread);
    stage->thread.finalize();
    stage->thread.NnOsHandle::~NnOsHandle();
}

/* Tears the stage model down: joins its loader thread, releases the thread's stack, the frame
 * textures and the model handles. */
void btlStageModelRelease(BattleStageModel *stage)
{
    stageStopThread(stage);
    if (stage->stackRegion != NULL) {
        addressSpaceRegionFree(stage->stackRegion);
        delete static_cast<StackRegion *>(stage->stackRegion);
        stage->stackRegion = NULL;
    }
    if (stage->threadStack != NULL) {
        asdMemFree(stage->threadStack);
        stage->threadStack = NULL;
    }
    stage->unkc0 = -1;
    if (void *context = stage->context) {
        stage->context = NULL;
    }
    frameTexturesRelease();
    mdlHandleArrayDestroy(stage);
    stage->state = 0;
}

} /* extern "C" */
