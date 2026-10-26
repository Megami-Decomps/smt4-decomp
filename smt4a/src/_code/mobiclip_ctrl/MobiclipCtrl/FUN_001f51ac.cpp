#include "mobiclip_ctrl/MobiclipHeaps.h"

extern "C" {
void FUN_00422ef8(void);
void FUN_00426140(void);
void FUN_00513f6c(void);
void valuePairClear(void);
void FUN_00512e38(void);
void FUN_00513718(void);
void mobiclipAllocatorReset(void);
void videoResetDeblockerState(void);
extern MobiclipHeap DAT_00617c48;
extern MobiclipHeap DAT_00617ca0;
extern MobiclipHeap DAT_00617cf8;
extern MobiclipHeap DAT_00617d50;
extern MobiclipHeap DAT_00617da8;
extern MobiclipHeap DAT_00617e00;
}

/* Shut down movie devices and release all six backing heaps. */
extern "C" void FUN_001f51ac(void)
{
    FUN_00422ef8();
    FUN_00426140();
    FUN_00513f6c();
    valuePairClear();
    FUN_00512e38();
    FUN_00513718();
    mobiclipAllocatorReset();
    videoResetDeblockerState();
    mobiclipFinalizeHeap(&DAT_00617c48);
    mobiclipFinalizeHeap(&DAT_00617ca0);
    mobiclipFinalizeHeap(&DAT_00617cf8);
    mobiclipFinalizeHeap(&DAT_00617d50);
    mobiclipFinalizeHeap(&DAT_00617da8);
    mobiclipFinalizeHeap(&DAT_00617e00);
}
