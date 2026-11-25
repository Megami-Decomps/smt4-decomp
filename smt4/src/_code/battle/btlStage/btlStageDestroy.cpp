/* NON_MATCHING: the thread stop matches (wait, joined flag, finalize, NnOsHandle close as in uniteScreenDestroy); only
 * the context load is scheduled before the -1 store to unkc0 (retail loads it after the store), as in btlStageModelRelease
 * (a memset of unkc0 matches both and was rejected: the field's type is unknown). */
#include "nn/os/WaitObject.h"
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlStage.h"
#include "nn/Result.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/JobWork.h"
#include "sys/ResultReport.h"

/* The work area of the job that owns the stage. */
struct StageJobWork {
    u8 unk00[0x30];
    u32 job; /* the stage job, stopped when the stage is destroyed */
};

/* The stage thread's stack mapping: its destructor unmaps the region and the memory goes back
 * to the engine heap. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

extern "C" {
extern BtlStageGlobals g_btlStage;

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void addressSpaceRegionFree(AddressSpaceRegion *region);
void frameTexturesRelease(void);
void mdlHandleArrayDestroy(BattleStageModel *stage);
}

inline StackRegion::~StackRegion()
{
    addressSpaceRegionFree(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

/* Waits for the loader thread to end, then finalizes it and closes its handle. */
static __inline void stageStopThread(BattleStageModel *stage)
{
    nn::os::ThreadJoin(&stage->thread);
    stage->thread.finalize();
    stage->thread.NnOsHandle::~NnOsHandle();
}


/* Destroy callback of the stage job: joins the loader thread, releases its stack, tears the
 * stage model down, frees it and stops the owner job. */
extern "C" void btlStageDestroy(u32 handle)
{
    StageJobWork *owner = reinterpret_cast<StageJobWork *>(jobGetWork(handle));
    BattleStageModel *stage = (BattleStageModel *)g_btlStage.stage;

    if (stage != NULL) {
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
        void *context = stage->context;
        if (context != NULL) {
            stage->context = NULL;
        }
        frameTexturesRelease();
        mdlHandleArrayDestroy(stage);
        stage->state = 0;
        asdMemFree(g_btlStage.stage);
        g_btlStage.stage = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
}
