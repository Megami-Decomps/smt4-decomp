#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern SaveByteSettings g_saveLoadProcess;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void gameDataAddHomeButtonHold(s32 count);
void gameDataBlocksAddFlags(u32 flags);
void FUN_00333574(s32 enabled);
GameSaveData *gameDataBlocksGetSaveData(void);
s32 FUN_0037116c(void *work);
void work8BufDestroy(void *work);
void FUN_003a7938(void *work);
void asdProcessClearSelectedFlags(u32 process, u32 flags, s32 group);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 size,
                   void (*draw)(void *), void *work, void (*destroy)(void *), u32 process);

// Create the boot save/load process and both screen draw tasks while holding the HOME button.
u32 saveLoadCreateBootProcess(void)
{
    // The shared work prefix ends at 0x18; this allocation additionally owns one trailing word.
    struct BootSaveWorkView {
        SaveLoadProcessWork24 state;
        u32 unk18;
    };
    typedef char BootSaveWorkSizeCheck[sizeof(BootSaveWorkView) == 0x1C ? 1 : -1];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 0x31D);
    BootSaveWorkView *allocation = static_cast<BootSaveWorkView *>(
        asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BootSaveWorkView), 1));
    SaveLoadProcessWork24 *work = &allocation->state;
    gameDataAddHomeButtonHold(1);
    gameDataBlocksAddFlags(1);
    FUN_00333574(1);
    work->result = 0;
    work->option = gameDataBlocksGetSaveData()->metadata.option;
    if (work->option == 0) {
        work->option = 1;
    }
    g_saveLoadProcess.third = 0;
    g_saveLoadProcess.fourth = 0;
    g_saveLoadProcess.flags = 0;
    g_saveLoadProcess.value = 0;
    g_saveLoadProcess.selected = 0;
    g_saveLoadProcess.first = 0;
    g_saveLoadProcess.second = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Boot"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0037116c), reinterpret_cast<AsdProcFunc>(work8BufDestroy), reinterpret_cast<u32>(work));
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    taskCreateDraw("Boot UpDraw", 0x86, 0, 0, FUN_003a7938, NULL, NULL, work->process);
    taskCreateDraw("Boot UpDraw_R", 0xE2, 0, 0, FUN_003a7938, NULL, NULL, work->process);
    work->state = 12;
    return work->process;
}
}
