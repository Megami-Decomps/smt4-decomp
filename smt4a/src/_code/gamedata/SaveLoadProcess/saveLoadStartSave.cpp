#include "AsdSDK/AsdDebug.h"
#include "gamedata/SaveLoadProcess.h"
#include "gamedata/SaveLoadProcessState.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct SavedSlotPrefix {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 lastSlot;
};

extern "C" {
extern SaveByteSettings g_saveLoadProcess;
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u8* gameDataBlocksGetSaveData(void);
void gameDataAddHomeButtonHold(u32 bits);
void gameDataBlocksAddFlags(u32 bits);
void gameDataBlocksOrFlagsClearUnk02(u32 bits);
u32 taskCreateDraw(const s8* name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void* owner);
s32 saveLoadProcessWriteStep(u32 process);
void work8BufDestroy(u32 process);
s32 saveLoadDrawActivityIcon(u32 process);
void asdProcessClearSelectedFlags(u32 process, u32 mask, u32 mode);
}

// The end callback owns the work area and its optional save buffer.
extern "C" u32 saveLoadStartSave(s32 slot, u8 option)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 0x14c);
    SaveLoadProcessWorkA* work = static_cast<SaveLoadProcessWorkA*>(
        asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(SaveLoadProcessWorkA), 1));
    gameDataAddHomeButtonHold(1);
    gameDataBlocksAddFlags(1);
    gameDataBlocksOrFlagsClearUnk02(1);
    work->buffer = NULL;
    work->slot = reinterpret_cast<const SavedSlotPrefix*>(gameDataBlocksGetSaveData())->lastSlot;
    if (work->slot == 0) {
        work->slot = 1;
    }

    g_saveLoadProcess.third = 0;
    g_saveLoadProcess.fourth = 0;
    g_saveLoadProcess.flags = 0;
    g_saveLoadProcess.value = 0;
    g_saveLoadProcess.selected = 0;
    g_saveLoadProcess.first = 0;
    g_saveLoadProcess.second = 0;
    if (slot <= 1) {
        work->slot = slot;
        work->mode = 0;
    } else {
        work->slot = slot - 1;
        work->mode = 1;
    }
    work->rawLoad = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8*>("Save"), 4, 0, 0, saveLoadProcessWriteStep, work8BufDestroy, reinterpret_cast<u32>(work));
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    work->state = 0;
    work->saveKind = option;
    taskCreateDraw(reinterpret_cast<const s8*>("Boot UpDraw"), 0x86, 0, 0,
                   saveLoadDrawActivityIcon, NULL, 0, reinterpret_cast<void*>(work->process));
    taskCreateDraw(reinterpret_cast<const s8*>("Boot UpDraw_R"), 0xe2, 0, 0,
                   saveLoadDrawActivityIcon, NULL, 0, reinterpret_cast<void*>(work->process));
    return work->process;
}
