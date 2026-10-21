/* NON_MATCHING: retail weak call receives r0=0 and r1=0x040000ce, but its target symbol is missing. */
#include "common.h"

struct CriticalSection;

extern "C" {
extern u32 g_mobiclipAllocator;
extern u32 DAT_0044e97c;
extern CriticalSection g_mwmoCriticalSection;

void nn_os_CriticalSection_Initialize(CriticalSection* section, u32 initializationCode);

void FUN_003f6520(u32 allocator, u32 deallocator)
{
    g_mobiclipAllocator = allocator;
    DAT_0044e97c = deallocator;
    nn_os_CriticalSection_Initialize(&g_mwmoCriticalSection, 0x040000CA);
}
}
