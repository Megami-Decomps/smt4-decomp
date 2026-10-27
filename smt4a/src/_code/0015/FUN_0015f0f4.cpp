/* NON_MATCHING: svc 0x24 (wrapper) matches and the request construction and queueRequest call match; armcc keeps a zero in r6 from the top (retail frame 48, predicated wait arguments) where it hoists less and uses a 56-byte frame. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "nn/Result.h"
#include "shard/JobWork.h"
#include "sys/ResultReport.h"

extern "C" {
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;
s32 FUN_00176474(AocSystem *system);
s32 sysLightEventTryWait(AocObjB *event);
void aocReleasePackageOwner(AocSystem *system);
void FUN_001b3428(u32 *waitHandle);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);

/* The AOC job step: once the operation it started is acknowledged and its event is signalled,
 * queues the follow-up request; then, if the wait on its handle times out, releases the handle. */
u32 FUN_0015f0f4(u32 job)
{
    AocJobWork *work = (AocJobWork *)jobGetWork(job);

    if (work->operationActive == 1 && work->requestId == work->completedId &&
        FUN_00176474(g_aocSystem) != 0 && sysLightEventTryWait(&g_aocMain->objB) != 0) {
        g_aocMain->flags &= ~0x10000u;
        aocReleasePackageOwner(g_aocSystem);
        RequestParameters request;
        request.kind = 1;
        request.word3 = 0;
        request.result = WindowStatusResult(0);
        request.kind = 200;
        g_aocMain->queueRequest(request, 0x65, 0);
    }
    if (work->waitHandle != 0) {
        s32 result = svcWaitSynchronization1(work->waitHandle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        nnResultFields code;
        code.value = result;
        if (code.fields.description != 0x3fe && work->requestId == work->completedId) {
            FUN_001b3428(&work->waitHandle);
        }
    }
    return 0;
}

} /* extern "C" */
