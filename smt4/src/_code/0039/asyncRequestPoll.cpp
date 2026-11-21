/* NON_MATCHING: retail places the finished-request failure path (report, close) at the end, reloads *result
 * for the 0xc9209f84 test, keeps error in r6 (the build r7) and starts from r0 = 0 before the stack
 * adjustment; the close tests and the svc block are cross-jumped as in retail. */
#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

/* An asynchronous request: the event the service signals when it is done, and whether it has been sent. */
struct AsyncRequest {
    u32 handle;  // 0x00
    u8 started;  // 0x04
    u8 unk05[3];
};

extern "C" {
s32 svcWaitSynchronizationN(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 FUN_002b5820(u32 *handle, u32 resetType);
s32 FUN_0023793c(void);
s32 FUN_00351c58(void);
s32 FUN_00351c08(void *buffer, AsyncRequest *request);
void FUN_00351c88(u32 *error);
s32 FUN_00351cd0(void *buffer);

/* Closes the request's event, if it has one. */
static __inline void asyncRequestCloseEvent(AsyncRequest *request)
{
    if (request->handle != 0) {
        svcCloseHandle(request->handle);
        request->handle = 0;
    }
}

/* Polls the request: while its event is unsignaled it returns 0; once signaled it collects the
 * result. Without a request in flight it creates the event and sends one. Returns 1 when
 * nothing is left to wait for (done, or the service is not available); *result and *error carry
 * the outcome. */
u32 asyncRequestPoll(AsyncRequest *request, s32 *result, u32 *error)
{
    *result = 0;
    *error = 0;
    if (request->started == 0) {
        if (FUN_0023793c() != 0) {
            return 1;
        }
        /* Retail keeps the request buffer at sp+0, the slot the wait branch uses for its arguments, and the
         * new event handle right after it at sp+512. */
        u8 buffer[512];
        u32 handle = 0;
        s32 created = FUN_002b5820(&handle, 0);
        if (!nnResultIsFailure(created)) {
            request->handle = handle;
            created = 0;
        }
        bool failed = nnResultIsFailure(created);
        if (failed) {
            resultHandleFailure(created, failed);
        }
        s32 prepared = FUN_00351cd0(buffer);
        *result = prepared;
        if ((s32)(prepared & 0x80000000) < 0) {
            asyncRequestCloseEvent(request);
            return 0;
        }
        s32 sent = FUN_00351c08(buffer, request);
        *result = sent;
        if ((s32)(sent & 0x80000000) < 0) {
            if (*result == (s32)0xc9209f84) {
                *error = 0x76bf;
            }
            asyncRequestCloseEvent(request);
            return 0;
        }
        request->started = 1;
        return 0;
    } else {
        s32 index;
        u32 handle = request->handle;
        s32 waited = svcWaitSynchronizationN(&index, &handle, 1, 0, 0);
        bool failed = nnResultIsFailure(waited);
        if (failed) {
            resultHandleFailure(waited, failed);
        }
        nnResultFields code;
        code.value = waited;
        if (code.fields.description == 0x3fe) {
            return 0;
        }
        request->started = 0;
        s32 finished = FUN_00351c58();
        *result = finished;
        if ((s32)(finished & 0x80000000) < 0) {
            FUN_00351c88(error);
            asyncRequestCloseEvent(request);
            return 0;
        }
        return 1;
    }
}

} /* extern "C" */
