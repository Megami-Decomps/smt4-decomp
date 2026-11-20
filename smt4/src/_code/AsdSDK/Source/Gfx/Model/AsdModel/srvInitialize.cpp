#include "common.h"
#include "code/Code002c_Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern s32 g_srvInitializeCount;
extern CriticalSection g_modelWorkCriticalSection;
extern const char DAT_0040b880[];
u32 FUN_0011ce28(const char* service);
}

// Acquires another service reference or opens srv: on its first use.
extern "C" nn::Result srvInitialize()
{
    ScopedCriticalLock lock(g_modelWorkCriticalSection);
    if (g_srvInitializeCount > 0) {
        ++g_srvInitializeCount;
        return nn::Result(0x082067f9);
    }
    return nn::Result(FUN_0011ce28(DAT_0040b880));
}
