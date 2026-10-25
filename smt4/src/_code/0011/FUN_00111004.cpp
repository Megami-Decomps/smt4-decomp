/* NON_MATCHING: request construction, by-reference queueRequest ABI and the wait/timeout logic match; remaining: stack slot reuse between the request block and the wait block, zero register allocation, and the result tests (lsrs scratch register, description compare) compile differently. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "nn/Result.h"

extern "C" {
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;
AocJobWork *jobGetWork(u32 handle);
s32 FUN_00121e50(AocSystem *system);
void aocReleasePackageOwner(AocSystem *system);
void FUN_002ba8f4(u32 *waitHandle);
s32 FUN_002c40f8(s32 *signalled, const u32 *handles, s32 count, s32 waitAll, u32 timeoutLow, u32 timeoutHigh);
void FUN_002c526c(s32 result);

/* The AOC job step: once the operation it started is acknowledged and its event is signalled,
 * queues the follow-up request; then, if the wait on its handle times out, releases the handle. */
u32 FUN_00111004(u32 handle)
{
    AocJobWork *work = jobGetWork(handle);

    if (work->operationActive == 1 && work->requestId == work->completedId &&
        FUN_00121e50(g_aocSystem) != 0 && FUN_002ad1e0(&g_aocMain->objB) != 0) {
        g_aocMain->flags &= ~0x10000u;
        aocReleasePackageOwner(g_aocSystem);
        RequestParameters request;
        request.kind = 1;
        request.word3 = 0;
        request.result = WindowStatusResult(0);
        request.kind = 200;
        g_aocMain->queueRequest(request, 0x65, 0);
    }
    u32 waitHandle = work->waitHandle;
    if (waitHandle != 0) {
        s32 signalled = 0;
        s32 result = FUN_002c40f8(&signalled, &waitHandle, 1, 0, 0, 0);
        if (nnResultIsFailure(result)) {
            FUN_002c526c(result);
        }
        if (!nnResultDescriptionIsNot(result, 0x3FE) && work->requestId == work->completedId) {
            FUN_002ba8f4(&work->waitHandle);
        }
    }
    return 0;
}

} /* extern "C" */
