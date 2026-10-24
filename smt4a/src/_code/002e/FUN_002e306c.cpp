/* NON_MATCHING: the unrolled gather loop is scheduled differently (retail keeps the constant 4 in r4 and bumps the index before the stores; this build addresses the second element with other registers). */
#include "common.h"

extern "C" {

/* A request to wait on several kernel objects (each referenced through a pointer to its handle). */
struct WaitRequest {
    /* 0x00 */ s32 *signaledIndex;
    /* 0x04 */ u32 *const *objects;
    /* 0x08 */ s32 count;
    /* 0x0C */ s8 waitAll;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ const s64 *timeout;
};

s32 FUN_0017fd38(s32 *signaledIndex, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);

/* Gathers the object handles into `handles` and waits on them (svc WaitSynchronizationN, or WaitSynchronization1 for a single object). */
s32 FUN_002e306c(WaitRequest *request, u32 *handles)
{
    s32 i = request->count;
    if (i <= 0) {
        i = 0;
    } else {
        i &= 1;
        if (i == 1) {
            handles[0] = *request->objects[0];
        }
    }
    while (i < request->count) {
        handles[i] = *request->objects[i];
        handles[i + 1] = *request->objects[i + 1];
        i += 2;
    }
    s64 timeout = *request->timeout;
    s32 count = request->count;
    s32 *signaledIndex = request->signaledIndex;
    s32 waitAll = request->waitAll;
    if (count != 1) {
        return FUN_0017fd38(signaledIndex, handles, count, waitAll, timeout);
    }
    *signaledIndex = 0;
    return svcWaitSynchronization1(handles[0], timeout);
}

} /* extern "C" */
