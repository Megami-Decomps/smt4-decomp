#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
extern ThreadHandleState g_currentThreadHandleState;
extern const u32 DAT_00408ee0;
s32 FUN_0015f858(u32* handle, u32 original);
void _ZN10NnOsThreadD1Ev(void* object);
void entry(void);
void __aeabi_atexit(void* object, void (*destroy)(void*), void* module);

static __inline ThreadHandleState* initializeCurrentThread(ThreadHandleState* thread)
{
    thread->handle = 0;
    u32 handle = 0;
    s32 result = FUN_0015f858(&handle, DAT_00408ee0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
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
                    _ZN10NnOsThreadD1Ev, reinterpret_cast<void*>(entry));
}
}
