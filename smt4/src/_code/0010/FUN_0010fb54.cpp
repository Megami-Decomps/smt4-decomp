#include "nn/svc.h"

struct ThreadContext {
    u32 unk00;
    void *threadLocalStorage;
};

extern "C" {
extern ThreadContext DAT_0044e7ac;

// Records the calling thread's local storage in the shared thread context.
void FUN_0010fb54(void)
{
    DAT_0044e7ac.threadLocalStorage = nn::os::GetThreadLocalStorage();
}
}
