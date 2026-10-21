#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct SaveLoadWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 phase;
    /* 0x08 */ void* buffer;
    /* 0x0c */ u32 bufferSize;
    /* 0x10 */ s32 slot;
    /* 0x14 */ u32 directSlot;
    /* 0x18 */ u8 started;
    /* 0x19 */ u8 option;
    /* 0x1a */ u8 unk1a[2];
};
struct SaveLoadState {
    /* 0x00 */ u8 state;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u32 unk08;
};
struct SavedSlotPrefix {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 lastSlot;
};

extern "C" {
extern SaveLoadState g_saveLoadProcess;
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u8* gameDataBlocksGetSaveData(void);
void FUN_002c76d8(u32 bits);
void gameDataBlocksAddFlags(u32 bits);
void FUN_00333574(u32 bits);
u32 asdProcessCreateSimple(const s8* name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, u32 work);
u32 taskCreateDraw(const s8* name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void* owner);
s32 FUN_00371750(u32 process);
void work8BufDestroy(u32 process);
s32 FUN_003a7938(u32 process);
void FUN_002a2d14(u32 process, u32 mask, u32 mode);
}

// The end callback owns the work area and its optional save buffer.
extern "C" u32 saveLoadStartSave(s32 slot, u8 option)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 0x14c);
    SaveLoadWork* work = static_cast<SaveLoadWork*>(
        asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(SaveLoadWork), 1));
    FUN_002c76d8(1);
    gameDataBlocksAddFlags(1);
    FUN_00333574(1);
    work->buffer = NULL;
    work->slot = reinterpret_cast<const SavedSlotPrefix*>(gameDataBlocksGetSaveData())->lastSlot;
    if (work->slot == 0) {
        work->slot = 1;
    }

    g_saveLoadProcess.unk03 = 0;
    g_saveLoadProcess.unk04 = 0;
    g_saveLoadProcess.unk08 = 0;
    g_saveLoadProcess.unk06 = 0;
    g_saveLoadProcess.state = 0;
    g_saveLoadProcess.unk01 = 0;
    g_saveLoadProcess.unk02 = 0;
    if (slot <= 1) {
        work->slot = slot;
        work->directSlot = 0;
    } else {
        work->slot = slot - 1;
        work->directSlot = 1;
    }
    work->started = 0;
    work->process = asdProcessCreateSimple(
        reinterpret_cast<const s8*>("Save"), 4, 0, 0, FUN_00371750, work8BufDestroy,
        reinterpret_cast<u32>(work));
    FUN_002a2d14(work->process, 0x80000, 0);
    work->phase = 0;
    work->option = option;
    taskCreateDraw(reinterpret_cast<const s8*>("Boot UpDraw"), 0x86, 0, 0,
                   FUN_003a7938, NULL, 0, reinterpret_cast<void*>(work->process));
    taskCreateDraw(reinterpret_cast<const s8*>("Boot UpDraw_R"), 0xe2, 0, 0,
                   FUN_003a7938, NULL, 0, reinterpret_cast<void*>(work->process));
    return work->process;
}
