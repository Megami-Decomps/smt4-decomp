#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "nn/Result.h"

extern "C" {
extern ThreadHandleState DAT_005894d8;
extern const u32 DAT_00537d24;
s32 FUN_001d3ef8(u32* handle, u32 original);
void FUN_002e3140(s32 result);
void FUN_002fd02a(void* object);
void entry(void);
void __aeabi_atexit(void* object, void (*destroy)(void*), void* module);

static __inline ThreadHandleState* initializeCurrentThread(ThreadHandleState* thread)
{
    thread->handle = 0;
    u32 handle = 0;
    s32 result = FUN_001d3ef8(&handle, DAT_00537d24);
    if (nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
    thread->handle = handle;
    thread->unk04 = 0;
    thread->unk05 = 0;
    return thread;
}

// Duplicate the current thread handle and register the thread object's cleanup.
void FUN_0050f70c(void)
{
    __aeabi_atexit(initializeCurrentThread(&DAT_005894d8),
                       FUN_002fd02a, reinterpret_cast<void*>(entry));
}
}
