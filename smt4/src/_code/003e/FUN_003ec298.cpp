/* NON_MATCHING: static initialiser of the DAT_0044e608 callback state; retail stores the u64 argument (-1) with strd and the result with a separate stm, the build merges them into one stm. */
#include "common.h"

struct CallbackState {
    u32 kind; // 0x00
    u32 unk04;
    u64 argument; // 0x08
    u64 result; // 0x10
};

extern "C" {
extern const u32 DAT_00407eac[];
extern u32 DAT_004d4280;
extern CallbackState DAT_0044e608;
void nn_os_CriticalSection_Initialize(u32 *);
void _ZN2nn2os15CriticalSectionD1Ev(void *);
void entry(void);
void __aeabi_atexit(void *, void (*)(void *), void *);

// Initialize the global callback storage and its process-wide critical section.
void FUN_003ec298(void)
{
    DAT_0044e608.argument = ~0ULL;
    DAT_0044e608.result = 0;
    DAT_0044e608.kind = DAT_00407eac[1];
    DAT_004d4280 = 0;
    nn_os_CriticalSection_Initialize(&DAT_004d4280);
    __aeabi_atexit(&DAT_004d4280, _ZN2nn2os15CriticalSectionD1Ev, (void *)&entry);
}
}
