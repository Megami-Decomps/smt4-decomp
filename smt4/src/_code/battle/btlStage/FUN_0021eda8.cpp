/* NON_MATCHING: svc 0x23 now matches through the svcCloseHandle wrapper call (armlink inlines it); retail keeps the thread address in r5 after nn_os_Thread_FinalizeImpl (str r7,[r5]) and orders the joined store / the -1 store before the context load differently. */
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlStage.h"
#include "nn/Result.h"
#include "nn/svc.h"

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

StageJobWork *jobGetWork(void);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void FUN_002c3f5c(AddressSpaceRegion *region);
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result);
void nn_os_Thread_FinalizeImpl(u32 *thread);
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
static void threadJoin(StageLoaderThread *thread)
{
    s32 index;
    u32 handle = thread->handle;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    thread->joined = 1;
}

/* Closes a kernel handle and clears it. */
static void closeHandle(u32 *handle)
{
    if (*handle != 0) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
}

/* Destroy callback of the stage job: joins the loader thread, releases its stack, tears the
 * stage model down, frees it and stops the owner job. */
extern "C" void FUN_0021eda8(void)
{
    StageJobWork *owner = jobGetWork();
    BattleStageModel *stage = (BattleStageModel *)g_btlStage.stage;

    if (stage != NULL) {
        threadJoin(&stage->thread);
        nn_os_Thread_FinalizeImpl(&stage->thread.handle);
        closeHandle(&stage->thread.handle);
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
