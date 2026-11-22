/* NON_MATCHING: 80 lines (96 vs 92 rows): SVC wait/close and result bit-tests match; retail places the failure report block at the end and reloads *result for the 0xc9209f84 check (same remaining diff as twin asyncOperationStartOrPoll). */
#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "code/Code0042_Smt4a.h"
#include "sys/ResultReport.h"
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_00426204(void);
s32 svcCreateEvent(u32 *handle, s32 flags);
s32 FUN_0042632c(void *buffer);
s32 resetFlag5891A4And6530(void);
void FUN_004262e4(u32 *detail);

/* Closes the operation's event handle when open (shared with smt4 asyncRequestPoll). */
static __inline void closeOperationEvent(ThreadHandleState *operation)
{
    if (operation->handle != 0) {
        svcCloseHandle(operation->handle);
        operation->handle = 0;
    }
}

/* Starts or non-blockingly polls the asynchronous operation, writing its result and failure detail. */
u32 asyncOperationStartOrPollNonBlocking(ThreadHandleState *operation, s32 *result, u32 *detail)
{
    *result = 0;
    *detail = 0;
    if (operation->unk04 != 0) {
        s32 waitResult = svcWaitSynchronization1(operation->handle, 0);
        bool waitFailed = nnResultIsFailure(waitResult);
        if (waitFailed) {
            resultHandleFailure(waitResult, waitFailed);
        }
        if (((u32)waitResult & 0x3ff) == 0x3fe) {
            return 0;
        }
        operation->unk04 = 0;
        *result = resetFlag5891A4And6530();
        if ((s32)(*result & 0x80000000) >= 0) {
            return 1;
        }
        FUN_004262e4(detail);
        closeOperationEvent(operation);
        return 0;
    }
    if (FUN_00426204() != 0) {
        return 1;
    }
    u32 handle = 0;
    s32 createResult;
    if (operation->handle != 0) {
        createResult = (s32)0xe0a0183b;
    } else {
        createResult = svcCreateEvent(&handle, 0);
        if (!nnResultIsFailure(createResult)) {
            operation->handle = handle;
            createResult = 0;
        }
    }
    bool createFailed = nnResultIsFailure(createResult);
    if (createFailed) {
        resultHandleFailure(createResult, createFailed);
    }
    u8 buffer[512];
    *result = FUN_0042632c(buffer);
    if ((s32)(*result & 0x80000000) < 0) {
        closeOperationEvent(operation);
        return 0;
    }
    *result = FUN_00426264(buffer, &operation->handle);
    if ((s32)(*result & 0x80000000) < 0) {
        if (*result == (s32)0xc9209f84) {
            *detail = 0x76bf;
        }
        closeOperationEvent(operation);
        return 0;
    }
    operation->unk04 = 1;
    return 0;
}
}
