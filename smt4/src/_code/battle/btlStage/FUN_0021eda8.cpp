/* NON_MATCHING: native thread destruction forms the saved handle pointer before FinalizeImpl instead of after; joined-store and context-reset scheduling still differ. */
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlStage.h"
#include "nn/Result.h"

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

u32 jobGetWork(u32 handle);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void FUN_002c3f5c(AddressSpaceRegion *region);
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result, bool failed);
void FUN_002759bc(void);
void mdlHandleArrayDestroy(BattleStageModel *stage);
void asdMemFreeNonNull(void *block);
void asdMemFree(void *block);
}

inline StackRegion::~StackRegion()
{
    FUN_002c3f5c(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

/* Waits for the thread to end. */
static void threadJoin(NnOsThread *thread)
{
    s32 index;
    u32 handle = thread->handle;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    thread->joined = 1;
}


/* Destroy callback of the stage job: joins the loader thread, releases its stack, tears the
 * stage model down, frees it and stops the owner job. */
extern "C" void FUN_0021eda8(u32 handle)
{
    StageJobWork *owner = reinterpret_cast<StageJobWork *>(jobGetWork(handle));
    BattleStageModel *stage = (BattleStageModel *)g_btlStage.stage;

    if (stage != NULL) {
        threadJoin(&stage->thread);
        stage->thread.~NnOsThread();
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
        asdMemFree(g_btlStage.stage);
        g_btlStage.stage = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
}
