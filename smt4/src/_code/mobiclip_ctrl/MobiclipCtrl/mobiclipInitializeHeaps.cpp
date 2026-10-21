/* NON_MATCHING: heapOwnerCreate calls reverse r2/r3 immediate loads; -O2 candidate. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct MovieHeapOwner { u8 storage[0x58]; };
struct MovieController { u8 initialized; };
typedef void *(*MovieAllocate)(u32);
typedef void (*MovieFree)(void *);
extern "C" {
extern MovieController g_mobiclipCtrl;
extern MovieHeapOwner DAT_004c3828;
extern MovieHeapOwner DAT_004c3880;
extern MovieHeapOwner DAT_004c38d8;
extern MovieHeapOwner DAT_004c3930;
extern MovieHeapOwner DAT_004c3988;
extern MovieHeapOwner DAT_004c39e0;
extern MovieHeapOwner DAT_004c3a38;
u32 asdMemoryAlloc(u32, u32, u32, u32, u32);
void heapOwnerCreate(MovieHeapOwner *, u32, u32, u32);
void *mobiclipHeapAllocA(u32);
void *mobiclipHeapAllocB(u32);
void *mobiclipHeapAllocC(u32);
void *mobiclipHeapAllocD(u32);
void FUN_0018c034(void *);
void FUN_001a0f60(void *);
void FUN_001dbc3c(void *);
void FUN_001df8b4(void *);
void FUN_003f5fc4(MovieAllocate, MovieFree);
void FUN_003f6520(MovieAllocate, MovieFree);
void FUN_003f60ec(MovieAllocate, MovieFree);
void FUN_003f5810(MovieAllocate, MovieFree);
void FUN_003f5bdc(MovieAllocate, MovieFree);
void FUN_003f6a14(MovieAllocate, MovieFree);
void FUN_0035196c();
void FUN_0034e43c(MovieHeapOwner *, s32, s32, s32);

// Reserve movie playback heaps and install the allocator callbacks.
void mobiclipInitializeHeaps()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 198);
    heapOwnerCreate(&DAT_004c3828, asdMemoryAlloc(0x10000, 0x100, 0, 0x240000, 1), 0x240000, 0x100);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 201);
    heapOwnerCreate(&DAT_004c3880, asdMemoryAlloc(0x10000, 0x100, 0, 0x80000, 1), 0x80000, 0x100);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 204);
    heapOwnerCreate(&DAT_004c39e0, asdMemoryAlloc(0x10000, 0x100, 0, 0x400000, 1), 0x400000, 0x100);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 207);
    heapOwnerCreate(&DAT_004c38d8, asdMemoryAlloc(0x10000, 0x100, 0, 0x100000, 1), 0x100000, 0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 210);
    heapOwnerCreate(&DAT_004c3930, asdMemoryAlloc(0x10000, 0x100, 0, 0x8000, 1), 0x8000, 0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\MobiclipCtrl.cpp", 213);
    heapOwnerCreate(&DAT_004c3988, asdMemoryAlloc(0x10000, 0x100, 0, 0x90000, 1), 0x90000, 0);
    g_mobiclipCtrl.initialized = 0;
    FUN_003f5fc4(mobiclipHeapAllocB, FUN_001a0f60);
    FUN_003f6520(mobiclipHeapAllocD, FUN_001df8b4);
    FUN_003f60ec(mobiclipHeapAllocC, FUN_001dbc3c);
    FUN_003f5810(mobiclipHeapAllocC, FUN_001dbc3c);
    FUN_003f5bdc(mobiclipHeapAllocC, FUN_001dbc3c);
    FUN_003f6a14(mobiclipHeapAllocA, FUN_0018c034);
    FUN_0035196c();
    FUN_0034e43c(&DAT_004c3a38, 1, 0, 0);
}
}
