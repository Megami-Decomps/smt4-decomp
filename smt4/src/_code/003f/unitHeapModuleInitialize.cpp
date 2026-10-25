/* NON_MATCHING: heap constructor store scheduling differs, and separate external globals prevent retail's relative first/second-heap addressing; saved-register/frame allocation consequently differs. */
#include "shard/W6_W6Match7_UnitHeapModule.h"

extern "C" {
extern UnitHeapModuleRecord DAT_004d43e0[32];
extern u32 DAT_0044e660, DAT_004d43d0;
extern UnitHeapModuleState DAT_004d431c, g_titleContentAdapterHeap, DAT_004d4394;
extern const u32 DAT_00420f54[];
extern u8 DAT_004306c0[0x100], DAT_004307c0[0x100], DAT_004308c0[0x80];
extern u8 entry;
void FUN_00355f8c(void *);
void _ZN2nn2os15CriticalSectionD1Ev(void *);
void FUN_0014dcb8(void *);
void __aeabi_vec_ctor_nocookie_nodtor(void *, void (*)(void *), u32 size, u32 count);
s32 __aeabi_atexit(void *, UnitHeapModuleDestructor, void *module);

// Initialize the record pool, module lock and three fixed-size unit heaps.
void unitHeapModuleInitialize(void)
{
    __aeabi_vec_ctor_nocookie_nodtor(DAT_004d43e0, FUN_00355f8c, sizeof(UnitHeapModuleRecord), 32);
    DAT_0044e660 = 0;
    DAT_004d43d0 = 0;
    nn_os_CriticalSection_Initialize(&DAT_004d43d0);
    __aeabi_atexit(&DAT_004d43d0, _ZN2nn2os15CriticalSectionD1Ev, &entry);
    unitHeapModuleInitialize(&DAT_004d431c, DAT_00420f54, 16, DAT_004306c0, 0x100);
    __aeabi_atexit(&DAT_004d431c, _ZN2nn2os15CriticalSectionD1Ev, &entry);
    unitHeapModuleInitialize(&g_titleContentAdapterHeap, DAT_00420f54, 8, DAT_004307c0, 0x100);
    __aeabi_atexit(&g_titleContentAdapterHeap, FUN_0014dcb8, &entry);
    unitHeapModuleInitialize(&DAT_004d4394, DAT_00420f54, 8, DAT_004308c0, 0x80);
    __aeabi_atexit(&DAT_004d4394, FUN_0014dcb8, &entry);
}
}
