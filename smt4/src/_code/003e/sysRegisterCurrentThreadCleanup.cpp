#include "shard/W6_W6Match3_ThreadHandleState.h"
#include "nn/Result.h"

extern "C" {
extern ThreadHandleState DAT_0044e7b4;
extern const u32 DAT_00408ee0;
s32 FUN_0015f858(u32* handle, u32 original);
void FUN_002c526c(s32 result);
void nn_os_Thread_Thread_sub_object(void* object);
void entry(void);
void __aeabi_atexit(void* object, void (*destroy)(void*), void* module);

static __inline ThreadHandleState* initializeCurrentThread(ThreadHandleState* thread)
{
    thread->handle = 0;
    u32 handle = 0;
    s32 result = FUN_0015f858(&handle, DAT_00408ee0);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    thread->handle = handle;
    thread->unk04 = 0;
    thread->unk05 = 0;
    return thread;
}

// Duplicate the current thread handle and register the thread object's cleanup.
void sysRegisterCurrentThreadCleanup(void)
{
    __aeabi_atexit(initializeCurrentThread(&DAT_0044e7b4),
                    nn_os_Thread_Thread_sub_object, reinterpret_cast<void*>(entry));
}
}
