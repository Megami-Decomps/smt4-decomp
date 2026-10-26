#include "common.h"
#include "code/Code002c_Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern s32 DAT_00471b90;
extern CriticalSection DAT_004e9ba8;
extern const char DAT_0040b880[];
u32 FUN_0011ce28(const char* service);
}

// Acquires another service reference or opens srv: on its first use.
extern "C" nn::Result FUN_002c1398()
{
    ScopedCriticalLock lock(DAT_004e9ba8);
    if (DAT_00471b90 > 0) {
        ++DAT_00471b90;
        return nn::Result(0x082067f9);
    }
    return nn::Result(FUN_0011ce28(DAT_0040b880));
}
