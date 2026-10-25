#include "clear_save/clearSave.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern ClearSaveWorkA *g_clearSave;
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void sysMemClear(void *memory, u32 size);
void loadSlotEnsureLoaded(u32 slot);
void campCommonBgAcquire();
void campButtonHelpAcquire();
void FUN_003b61ec();
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *FUN_00275bc8(void *scriptFile, void *messageFile);
void FUN_0014afd0(s32 table, s32 entry);
void FUN_0022677c(s32 screen, s32 alpha);
u32 FUN_00241058();
u32 FUN_00290688();
void clearSaveDestroy();
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);

// Load clear-save scripts and create the update task and both stereo draw tasks.
void clearSaveCreate(s32 mode)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\clear_save\\clearSave.cpp", 597);
    g_clearSave = static_cast<ClearSaveWorkA *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(ClearSaveWorkA), 1));
    sysMemClear(g_clearSave, sizeof(ClearSaveWorkA));
    if (mode == 0)
        g_clearSave->initialization.active = 1;
    ClearSaveWorkA *work = g_clearSave;
    loadSlotEnsureLoaded(0x3C);
    campCommonBgAcquire();
    campButtonHelpAcquire();
    FUN_003b61ec();
    work->heapA = asdLoadFileSyncDefault("clear_save/clearSave.bf");
    void *messages = asdLoadFileSyncDefault("clear_save/clearSave.mbm");
    work->heapB = messages;
    ScriptRunState *script = FUN_00275bc8(work->heapA, messages);
    work->resource = reinterpret_cast<u32>(script);
    script->mode = 2;
    FUN_0014afd0(0, 0x83);
    if (work->initialization.active != 0) {
        FUN_0022677c(0, 0xFF);
        FUN_0022677c(1, 0xFF);
    }
    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("clearSave C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00241058), reinterpret_cast<AsdProcFunc>(clearSaveDestroy), reinterpret_cast<u32>(g_clearSave));
    work = g_clearSave;
    work->initialization.process = process;
    taskCreateDraw("clearSave L", 0x65, 0, 0, FUN_00290688, 0, work, process);
    taskCreateDraw("clearSave R", 0xCC, 0, 0, FUN_00290688, 0, g_clearSave, g_clearSave->initialization.process);
}
}
