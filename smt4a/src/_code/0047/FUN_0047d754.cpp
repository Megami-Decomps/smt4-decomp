/* NON_MATCHING: retail inlines wait/close syscalls; this source calls their existing native wrappers. */
#include "shard/W6_W6Match3_ThreadHandleState.h"

extern "C" {
u32 FUN_002e3138(u32 handle, s64 timeout);
void FUN_002e3140(u32 result);
void FUN_001a0d08(ThreadHandleState *thread);
u32 svcCloseHandle(u32 handle);

bool FUN_0047d754(ThreadHandleState *thread)
{
    if (thread->handle) {
        u32 result = FUN_002e3138(thread->handle, 0);
        if (result >> 31) {
            FUN_002e3140(result);
        }
        if ((result & 0x3ff) == 0x3fe) {
            return false;
        }
    }
    u32 result = FUN_002e3138(thread->handle, -1);
    if (result >> 31) {
        FUN_002e3140(result);
    }
    thread->unk04 = 1;
    FUN_001a0d08(thread);
    if (thread->handle) {
        svcCloseHandle(thread->handle);
        thread->handle = 0;
    }
    return true;
}
}
