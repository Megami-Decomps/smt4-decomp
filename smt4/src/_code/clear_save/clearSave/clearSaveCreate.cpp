#include "clear_save/clearSave.h"
#include "shard/W4_Match6_BibleScreen.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern ClearSaveWork *g_clearSave;
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void fileSlotLoad(u32 slot);
void FUN_002898e4();
void buttonHelpCreate();
void FUN_00289880();
void *asdLoadFileSyncDefault(const char *path);
BibleScript *FUN_00297060(void *scriptFile, void *messageFile);
void FUN_002c58c8(s32 table, s32 entry);
void FUN_00282bfc(s32 screen, s32 alpha);
u32 FUN_001b10e4();
u32 FUN_001e1418();
void clearSaveDestroy();
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);

// Load clear-save scripts and create the update task and both stereo draw tasks.
void clearSaveCreate(s32 mode)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\clear_save\\clearSave.cpp", 592);
    g_clearSave = static_cast<ClearSaveWork *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(ClearSaveWork), 1));
    memClear(g_clearSave, sizeof(ClearSaveWork));
    if (mode == 0)
        g_clearSave->active = 1;
    ClearSaveWork *work = g_clearSave;
    fileSlotLoad(0x3C);
    FUN_002898e4();
    buttonHelpCreate();
    FUN_00289880();
    work->heapA = asdLoadFileSyncDefault("clear_save/clearSave.bf");
    void *messages = asdLoadFileSyncDefault("clear_save/clearSave.mbm");
    work->heapB = messages;
    BibleScript *script = FUN_00297060(work->heapA, messages);
    work->resource = reinterpret_cast<u32>(script);
    script->started = 2;
    FUN_002c58c8(2, 0x83);
    if (work->active != 0) {
        FUN_00282bfc(0, 0xFF);
        FUN_00282bfc(1, 0xFF);
    }
    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("clearSave C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001b10e4), reinterpret_cast<AsdProcFunc>(clearSaveDestroy), reinterpret_cast<u32>(g_clearSave));
    work = g_clearSave;
    work->process = process;
    taskCreateDraw("clearSave L", 0x65, 0, 0, FUN_001e1418, 0, work, process);
    taskCreateDraw("clearSave R", 0xCC, 0, 0, FUN_001e1418, 0, g_clearSave, g_clearSave->process);
}
}
