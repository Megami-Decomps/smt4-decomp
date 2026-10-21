#include "common.h"
#include "AsdSDK/AsdDebug.h"
struct AllocatorPair { u32 allocate,release; };
extern "C" {
extern AllocatorPair g_mobiclipAllocator;
extern u32 g_mwmoCriticalSection;
void nn_os_CriticalSection_Initialize(void *section);
/* Installs the movie allocator and initializes its synchronization state. */
void FUN_00513b94(u32 allocate,u32 release) { asdDebugTrace(NULL,0x040000CB);g_mobiclipAllocator.allocate=allocate;g_mobiclipAllocator.release=release;nn_os_CriticalSection_Initialize(&g_mwmoCriticalSection); }
}
