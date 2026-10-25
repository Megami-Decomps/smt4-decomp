/* NON_MATCHING: heap constructor store scheduling differs, and separate external globals prevent retail's relative first/second-heap addressing; saved-register/frame allocation consequently differs. */
#include "shard/W6_W6Match7_UnitHeapModule.h"

extern "C" {
extern UnitHeapModuleRecord DAT_0062d410[32];
extern u32 DAT_005893a8, DAT_0062d400;
extern UnitHeapModuleState DAT_0062d34c, DAT_0062d388, DAT_0062d3c4;
extern const u32 DAT_00558438[];
extern u8 DAT_0056d6c0[0x100], DAT_0056d7c0[0x100], DAT_0056d8c0[0x80];
extern u8 entry;
void FUN_0042b478(void *);
void _ZN2nn2os15CriticalSectionD1Ev(void *);
void FUN_001aa330(void *);
void __aeabi_vec_ctor_nocookie_nodtor(void *, void (*)(void *), u32 size, u32 count);
s32 __aeabi_atexit(void *, UnitHeapModuleDestructor, void *module);

// Initialize the record pool, module lock and three fixed-size unit heaps.
void unitHeapModuleInitialize(void)
{
    __aeabi_vec_ctor_nocookie_nodtor(DAT_0062d410, FUN_0042b478, sizeof(UnitHeapModuleRecord), 32);
    DAT_005893a8 = 0;
    DAT_0062d400 = 0;
    nn_os_CriticalSection_Initialize(&DAT_0062d400);
    __aeabi_atexit(&DAT_0062d400, _ZN2nn2os15CriticalSectionD1Ev, &entry);
    unitHeapModuleInitialize(&DAT_0062d34c, DAT_00558438, 16, DAT_0056d6c0, 0x100);
    __aeabi_atexit(&DAT_0062d34c, _ZN2nn2os15CriticalSectionD1Ev, &entry);
    unitHeapModuleInitialize(&DAT_0062d388, DAT_00558438, 8, DAT_0056d7c0, 0x100);
    __aeabi_atexit(&DAT_0062d388, FUN_001aa330, &entry);
    unitHeapModuleInitialize(&DAT_0062d3c4, DAT_00558438, 8, DAT_0056d8c0, 0x80);
    __aeabi_atexit(&DAT_0062d3c4, FUN_001aa330, &entry);
}
}
