/* NON_MATCHING: the wait is sys/HandleWait.h's handleWait with the bool test of threadTryJoinAndClose; remaining:
 * retail keeps the request kind 1 in r8 for both stores, reuses one stack slot for both WindowStatusResult(0)
 * temporaries (frame 48, built 60), and builds the wait's stack arguments with str+stm. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "nn/Result.h"
#include "shard/JobWork.h"
#include "sys/ResultReport.h"
#include "addon/AocSystem.h"
#include "sys/HandleWait.h"

extern "C" {
s32 FUN_00121e50(AocSystem *system);
void aocReleasePackageOwner(AocSystem *system);
void kernelThreadJoinAndClose(u32 *waitHandle);

/* The AOC job step: once the operation it started is acknowledged and its event is signalled,
 * queues the follow-up request; then, if the wait on its handle times out, releases the handle. */
u32 FUN_00111004(u32 handle)
{
    AocJobWork *work = (AocJobWork *)jobGetWork(handle);

    if (work->operationActive == 1 && work->requestId == work->completedId &&
        FUN_00121e50(g_aocSystem) != 0 && FUN_002ad1e0(&g_aocMain->operationDone) != 0) {
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
        bool timedOut = nnResultIsNotTimeout(handleWait(work->waitHandle, 0)) != 1;
        if (timedOut && work->requestId == work->completedId) {
            kernelThreadJoinAndClose(&work->waitHandle);
        }
    }
    return 0;
}

} /* extern "C" */
