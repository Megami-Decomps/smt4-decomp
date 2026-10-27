/* NON_MATCHING: result tests use the SDK helpers; remaining differences are in the block order after the poll. */
#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "code/Code0042_Smt4a.h"
#include "sys/ResultReport.h"
#include "nn/Result.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 svcCloseHandle(u32 handle);
s32 FUN_00426204(void);
s32 FUN_0017fd20(u32 *handle, s32 flags);
s32 FUN_0042632c(void *buffer);
s32 resetFlag5891A4And6530(void);
void FUN_004262e4(u32 *detail);

// Start or poll the asynchronous operation, returning its result and detailed failure code.
u32 asyncOperationStartOrPoll(ThreadHandleState *operation, s32 *result, u32 *detail)
{
    *result = 0;
    *detail = 0;
    if (operation->unk04) {
        s32 waitResult = svcWaitSynchronization1(operation->handle, 30000000);
        bool waitFailed = nnResultIsFailure(waitResult);
        if (waitFailed) {
            FUN_002e3140(waitResult, waitFailed);
        }
        if ((static_cast<u32>(waitResult) & 0x3ff) == 0x3fe) {
            return 0;
        }
        operation->unk04 = 0;
        s32 pollStatus = resetFlag5891A4And6530();
        *result = pollStatus;
        if (nnResultIsSuccess(pollStatus)) {
            return 1;
        }
        FUN_004262e4(detail);
    } else {
        if (FUN_00426204()) {
            return 1;
        }
        u32 handle = 0;
        s32 createResult;
        if (operation->handle != 0) {
            createResult = static_cast<s32>(0xe0a0183b);
        } else {
            createResult = FUN_0017fd20(&handle, 0);
            if (!nnResultIsFailure(createResult)) {
                operation->handle = handle;
                createResult = 0;
            }
        }
        bool createFailed = nnResultIsFailure(createResult);
        if (createFailed) {
            FUN_002e3140(createResult, createFailed);
        }
        u8 buffer[512];
        s32 startStatus = FUN_0042632c(buffer);
        *result = startStatus;
        if (nnResultIsSuccess(startStatus)) {
            s32 openStatus = FUN_00426264(buffer, &operation->handle);
            *result = openStatus;
            if (nnResultIsSuccess(openStatus)) {
                operation->unk04 = 1;
                return 0;
            }
            if (static_cast<u32>(*result) == 0xc9209f84) {
                *detail = 0x76bf;
            }
        }
    }
    if (operation->handle != 0) {
        svcCloseHandle(operation->handle);
        operation->handle = 0;
    }
    return 0;
}
}
