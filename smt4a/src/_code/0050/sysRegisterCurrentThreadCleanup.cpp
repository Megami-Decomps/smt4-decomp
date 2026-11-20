#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
extern ThreadHandleState g_currentThreadHandleState;
extern const u32 DAT_00537d24;
s32 FUN_001d3ef8(u32* handle, u32 original);
void _ZN9Obj2fd02aD1Ev(void* object);
void entry(void);
void __aeabi_atexit(void* object, void (*destroy)(void*), void* module);

static __inline ThreadHandleState* initializeCurrentThread(ThreadHandleState* thread)
{
    thread->handle = 0;
    u32 handle = 0;
    s32 result = FUN_001d3ef8(&handle, DAT_00537d24);
    if (nnResultIsFailure(result)) {
        resultHandleFailure(result);
    }
    thread->handle = handle;
    thread->unk04 = 0;
    thread->unk05 = 0;
    return thread;
}

// Duplicate the current thread handle and register the thread object's cleanup.
void sysRegisterCurrentThreadCleanup(void)
{
    __aeabi_atexit(initializeCurrentThread(&g_currentThreadHandleState),
                       _ZN9Obj2fd02aD1Ev, reinterpret_cast<void*>(entry));
}
}
