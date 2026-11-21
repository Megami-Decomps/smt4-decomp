/* NON_MATCHING: the request's constructor and the second kind/word3/result store sequence retail repeats after it, and
 * the timeout test materialised as a bool (movne/moveq; teq #1, as in IV's twin), now follow retail; remaining:
 * retail reuses one stack slot for both WindowStatusResult temporaries (frame 48), keeps zero in r6 from the top and
 * predicates the wait arguments. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "nn/Result.h"
#include "shard/JobWork.h"
#include "sys/ResultReport.h"
#include "addon/AocSystemA.h"

extern "C" {
s32 FUN_00176474(AocSystemA *system);
s32 sysLightEventTryWait(LightEvent *event);
void aocReleasePackageOwner(AocSystemA *system);
void nnOsThreadImplDestroy(u32 *waitHandle);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);

/* The AOC job step: once the operation it started is acknowledged and its event is signalled,
 * queues the follow-up request; then, if the wait on its handle times out, releases the handle. */
u32 FUN_0015f0f4(u32 job)
{
    AocJobWork *work = (AocJobWork *)jobGetWork(job);

    if (work->operationActive == 1 && work->requestId == work->completedId &&
        FUN_00176474(g_aocSystem) != 0 && sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
        aocReleasePackageOwner(g_aocSystem);
        RequestParameters request(1);
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
            resultHandleFailure(result, failed);
        }
        bool timedOut = nnResultIsNotTimeout(result) != 1;
        if (timedOut && work->requestId == work->completedId) {
            nnOsThreadImplDestroy(&work->waitHandle);
        }
    }
    return 0;
}

} /* extern "C" */
