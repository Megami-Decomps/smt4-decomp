/* NON_MATCHING: svc 0x23 matches through svcCloseHandle and the call structure is recovered; retail shares the wait temporaries with the 500-byte buffer at sp+0 (handle at sp+512), tests results with ands/bpl and lsrs where armcc emits and/cmp, and loads r0=0 before the stack adjustment. */
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
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 FUN_002b5820(u32 *handle, u32 resetType);
s32 FUN_0023793c(void);
s32 FUN_00351c58(void);
s32 FUN_00351c08(void *buffer, AsyncRequest *request);
void FUN_00351c88(u32 *error);
s32 FUN_00351cd0(void *buffer);

/* Polls the request: while its event is unsignaled it returns 0; once signaled it collects the
 * result. Without a request in flight it creates the event and sends one. Returns 1 when
 * nothing is left to wait for (done, or the service is not available); *result and *error carry
 * the outcome. */
u32 FUN_00394230(AsyncRequest *request, s32 *result, u32 *error)
{
    u8 buffer[500];

    *result = 0;
    *error = 0;
    if (request->started != 0) {
        s32 index;
        u32 handle = request->handle;
        s32 waited = FUN_002c40f8(&index, &handle, 1, 0, 0);
        bool failed = nnResultIsFailure(waited);
        if (failed) {
            FUN_002c526c(waited, failed);
        }
        nnResultFields code;
        code.value = waited;
        if (code.fields.description == 0x3fe) {
            return 0;
        }
        request->started = 0;
        s32 finished = FUN_00351c58();
        *result = finished;
        if (nnResultIsSuccess(finished)) {
            return 1;
        }
        FUN_00351c88(error);
    } else {
        if (FUN_0023793c() != 0) {
            return 1;
        }
        u32 handle = 0;
        s32 created = FUN_002b5820(&handle, 0);
        if (nnResultIsSuccess(created)) {
            request->handle = handle;
            created = 0;
        }
        bool failed = nnResultIsFailure(created);
        if (failed) {
            FUN_002c526c(created, failed);
        }
        s32 prepared = FUN_00351cd0(buffer);
        *result = prepared;
        if (nnResultIsSuccess(prepared)) {
            s32 sent = FUN_00351c08(buffer, request);
            *result = sent;
            if (nnResultIsSuccess(sent)) {
                request->started = 1;
                return 0;
            }
            if (*result == (s32)0xc9209f84) {
                *error = 0x76bf;
            }
        }
    }
    if (request->handle != 0) {
        svcCloseHandle(request->handle);
        request->handle = 0;
    }
    return 0;
}

} /* extern "C" */
