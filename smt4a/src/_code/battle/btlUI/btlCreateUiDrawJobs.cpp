#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
void campCommonBgAcquire(void);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_002248f8(u32 handle);
void FUN_00298670(u32 handle);
s32 FUN_0024e31c(u32 handle);
s32 FUN_00298674(u32 handle);
s32 FUN_002df668(u32 handle);
void FUN_004a8ef4(BtlUiA *ui, BtlMainStateA *battle);

// Allocate the UI once and attach its calculation and draw passes to the battle job.
void btlCreateUiDrawJobs(BtlMainStateA *battle)
{
    campCommonBgAcquire();
    if (g_btlUi.ui == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlUI.cpp", 0xE6C);
        g_btlUi.ui = static_cast<BtlUiA *>(asdMemoryAllocTracked(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, 0x13018, 1));
    }
    BtlUiA *ui = g_btlUi.ui;
    battle->uiJobs.drawJob = taskCreateDraw(reinterpret_cast<const s8 *>("btlUI Calc"),
        4, 0, 0, FUN_002248f8, FUN_00298670, reinterpret_cast<u32>(battle),
        reinterpret_cast<void *>(battle->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlUI DrawUpLeft"), 0x7E, 0, 0,
        FUN_0024e31c, NULL, reinterpret_cast<u32>(battle), reinterpret_cast<void *>(battle->uiJobs.drawJob));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlUI DrawUpRight"), 0xDA, 0, 0,
        FUN_0024e31c, NULL, reinterpret_cast<u32>(battle), reinterpret_cast<void *>(battle->uiJobs.drawJob));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlUI DrawDown"), 0xEB, 0, 0,
        FUN_00298674, NULL, reinterpret_cast<u32>(battle), reinterpret_cast<void *>(battle->uiJobs.drawJob));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlUI DrawNumber"), 0xED, 0, 0,
        FUN_002df668, NULL, reinterpret_cast<u32>(battle), reinterpret_cast<void *>(battle->uiJobs.drawJob));
    FUN_004a8ef4(ui, battle);
    ui->owner = reinterpret_cast<u32>(battle);
}
}
