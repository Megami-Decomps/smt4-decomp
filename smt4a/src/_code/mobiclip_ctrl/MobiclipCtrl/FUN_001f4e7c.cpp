/* NON_MATCHING: heap-owner size/alignment argument setup is reversed relative to retail; all other instructions agree. */
#include "mobiclip_ctrl/MobiclipCtrl.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
struct HeapOwner;
extern HeapOwner DAT_00617c48;
extern HeapOwner DAT_00617ca0;
extern HeapOwner DAT_00617cf8;
extern HeapOwner DAT_00617d50;
extern HeapOwner DAT_00617da8;
extern HeapOwner DAT_00617e00;
extern u8 DAT_00617e58[];
extern u8 g_mobiclipCtrl;
void *asdMemoryAlloc(u32 flags, u32 alignment, s32 heap, u32 size, bool clear);
void heapOwnerCreate(HeapOwner *owner, void *memory, u32 size, s32 alignment);
void *mobiclipHeapAllocA(u32 size);
void *mobiclipHeapAllocB(u32 size);
void *mobiclipHeapAllocC(u32 size);
void *mobiclipHeapAllocD(u32 size);
void FUN_00203950(void *block);
void FUN_00227f8c(void *block);
void FUN_0028120c(void *block);
void FUN_00287770(void *block);
typedef void *(*MovieAllocate)(u32 size);
typedef void (*MovieFree)(void *block);
void mwmofilterDeblockerInitialize(MovieAllocate allocate, MovieFree release);
void mobiclipAllocatorInstall(MovieAllocate allocate, MovieFree release);
void mwmoimaadpcmDecoderInitialize(MovieAllocate allocate, MovieFree release);
void FUN_00512e84(MovieAllocate allocate, MovieFree release);
void FUN_00513250(MovieAllocate allocate, MovieFree release);
void pairSlotSet(MovieAllocate allocate, MovieFree release);
void FUN_00425f68(void);
void FUN_00422940(void *event, bool manualReset, bool initiallySignaled);

void FUN_001f4e7c(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 216);
    heapOwnerCreate(&DAT_00617c48, asdMemoryAlloc(0x10000, 0x100, 0, 0x240000, true), 0x240000, 0x100);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 219);
    heapOwnerCreate(&DAT_00617ca0, asdMemoryAlloc(0x10000, 0x100, 0, 0x80000, true), 0x80000, 0x100);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 222);
    heapOwnerCreate(&DAT_00617e00, asdMemoryAlloc(0x10000, 0x100, 0, 0x400000, true), 0x400000, 0x100);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 225);
    heapOwnerCreate(&DAT_00617cf8, asdMemoryAlloc(0x10000, 0x100, 0, 0x100000, true), 0x100000, 0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 228);
    heapOwnerCreate(&DAT_00617d50, asdMemoryAlloc(0x10000, 0x100, 0, 0x8000, true), 0x8000, 0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mobiclip_ctrl\\MobiclipCtrl.cpp", 231);
    heapOwnerCreate(&DAT_00617da8, asdMemoryAlloc(0x10000, 0x100, 0, 0x90000, true), 0x90000, 0);
    g_mobiclipCtrl = 0;
    mwmofilterDeblockerInitialize(mobiclipHeapAllocB, FUN_00227f8c);
    mobiclipAllocatorInstall(mobiclipHeapAllocD, FUN_00287770);
    mwmoimaadpcmDecoderInitialize(mobiclipHeapAllocC, FUN_0028120c);
    FUN_00512e84(mobiclipHeapAllocC, FUN_0028120c);
    FUN_00513250(mobiclipHeapAllocC, FUN_0028120c);
    pairSlotSet(mobiclipHeapAllocA, FUN_00203950);
    FUN_00425f68();
    FUN_00422940(DAT_00617e58, true, true);
}
}
