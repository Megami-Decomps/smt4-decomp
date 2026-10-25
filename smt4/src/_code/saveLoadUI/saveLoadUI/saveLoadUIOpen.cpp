/* NON_MATCHING: save-screen allocation and process-registration scheduling differ from retail. */
#include "saveLoadUI/saveLoadUI.h"
#include "shard/Sys44de28.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
s32 FUN_001c8e28(u32 handle);
void saveDataNotifyNoop(u32 handle);

// Allocate the save/load screen and start its controller process.
void saveLoadUIOpen(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 2814);
    SaveLoadUIWork *ui = (SaveLoadUIWork *)asdMemAlloc(0x10000, 0x100, 0, sizeof(SaveLoadUIWork), 1);
    g_saveLoadUIFlags.worker = reinterpret_cast<Worker *>(ui);
    ui->unk04 = 0;
    ui->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BOOT C"), 2, 0, 0, FUN_001c8e28, saveDataNotifyNoop, 0);
    ui->state = 0x11;
    ui->unk0C = 0;
}
}
