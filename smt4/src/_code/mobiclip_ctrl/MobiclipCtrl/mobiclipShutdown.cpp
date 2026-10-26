#include "mobiclip_ctrl/MobiclipHeaps.h"

extern "C" {
void mobiclipAudioDeviceFinalize(void);
void FUN_00351b44(void);
void videoResetAuxFilterState(void);
void videoResetSecondaryFilterState(void);
void videoResetFilterState(void);
void FUN_003f60a4(void);
void mobiclipAllocatorReset(void);
void videoResetDeblockerState(void);
extern MobiclipHeap DAT_004c3828;
extern MobiclipHeap DAT_004c3880;
extern MobiclipHeap DAT_004c38d8;
extern MobiclipHeap DAT_004c3930;
extern MobiclipHeap DAT_004c3988;
extern MobiclipHeap DAT_004c39e0;
}

/* Shut down movie devices and release all six backing heaps. */
extern "C" void mobiclipShutdown(void)
{
    mobiclipAudioDeviceFinalize();
    FUN_00351b44();
    videoResetAuxFilterState();
    videoResetSecondaryFilterState();
    videoResetFilterState();
    FUN_003f60a4();
    mobiclipAllocatorReset();
    videoResetDeblockerState();
    mobiclipFinalizeHeap(&DAT_004c3828);
    mobiclipFinalizeHeap(&DAT_004c3880);
    mobiclipFinalizeHeap(&DAT_004c38d8);
    mobiclipFinalizeHeap(&DAT_004c3930);
    mobiclipFinalizeHeap(&DAT_004c3988);
    mobiclipFinalizeHeap(&DAT_004c39e0);
}
