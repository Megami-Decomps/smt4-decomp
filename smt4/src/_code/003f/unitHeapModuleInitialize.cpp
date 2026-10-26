/* NON_MATCHING: heap constructor store scheduling differs, and the module's globals are external here: retail derives the heaps from the lock's literal (sub #240 from DAT_004d43d0; same-TU data) and a shared-base layout cannot survive the build's split_sections carve; saved-register/frame allocation consequently differs. */
#include "shard/W6_W6Match7_UnitHeapModule.h"

extern "C" {
extern UnitHeapModuleRecord DAT_004d43e0[32];
extern u32 DAT_0044e660, DAT_004d43d0;
extern UnitHeapModuleState DAT_004d431c, g_titleContentAdapterHeap, DAT_004d4394;
extern const u32 DAT_00420f54[];
extern u8 DAT_004306c0[0x100], DAT_004307c0[0x100], DAT_004308c0[0x80];
extern u8 entry;
void _ZN20UnitHeapModuleRecordC1Ev(void *);
void _ZN2nn2os15CriticalSectionD1Ev(void *);
void _ZN9Obj420f4cD1Ev(void *);
void __aeabi_vec_ctor_nocookie_nodtor(void *, void (*)(void *), u32 size, u32 count);
s32 __aeabi_atexit(void *, UnitHeapModuleDestructor, void *module);

// Initialize the record pool, module lock and three fixed-size unit heaps.
void unitHeapModuleInitialize(void)
{
    __aeabi_vec_ctor_nocookie_nodtor(DAT_004d43e0, _ZN20UnitHeapModuleRecordC1Ev, sizeof(UnitHeapModuleRecord), 32);
    DAT_0044e660 = 0;
    DAT_004d43d0 = 0;
    nn_os_CriticalSection_Initialize(&DAT_004d43d0);
    __aeabi_atexit(&DAT_004d43d0, _ZN2nn2os15CriticalSectionD1Ev, &entry);
    unitHeapModuleInitialize(&DAT_004d431c, DAT_00420f54, 16, DAT_004306c0, 0x100);
    __aeabi_atexit(&DAT_004d431c, _ZN9Obj420f4cD1Ev, &entry);
    unitHeapModuleInitialize(&g_titleContentAdapterHeap, DAT_00420f54, 8, DAT_004307c0, 0x100);
    __aeabi_atexit(&g_titleContentAdapterHeap, _ZN9Obj420f4cD1Ev, &entry);
    unitHeapModuleInitialize(&DAT_004d4394, DAT_00420f54, 8, DAT_004308c0, 0x80);
    __aeabi_atexit(&DAT_004d4394, _ZN9Obj420f4cD1Ev, &entry);
}
}
