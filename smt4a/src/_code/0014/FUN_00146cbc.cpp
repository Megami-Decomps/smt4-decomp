#include "nn/svc.h"

struct ThreadContext {
    u32 unk00;
    void *threadLocalStorage;
};

extern "C" {
extern ThreadContext DAT_005894d0;

// Records the calling thread's local storage in the shared thread context.
void FUN_00146cbc(void)
{
    DAT_005894d0.threadLocalStorage = nn::os::GetThreadLocalStorage();
}
}
