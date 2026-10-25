/* NON_MATCHING: allocation/global-store and process-create argument scratch registers differ; local full-allocation view preserves shared prefix. */
#include "title/S4Load.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern S4Load *g_s4Load;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void rt_aeabi_memclr(void *memory, u32 size);
u32 spriteHandleCreate(u32 kind);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);
u32 FUN_002364fc();
void s4LoadDestroy();
u32 FUN_0027dbac();
u32 FUN_002bd488();
void asdProcessClearSelectedFlags(u32 job, u32 flags, u32 option);

// Create the title load screen, its two save-slot buffers, asynchronous script loads and tasks.
u32 FUN_002c7150(void)
{
    // Save-slot buffers extend beyond the canonical script-resource prefix.
    struct LoadInitializationView {
        u32 job;
        u8 closing;
        u8 unk005[3];
        u32 state;
        u8 unk00C[8];
        void *data;
        u32 dataSize;
        u8 unk01C[0x80];
        u32 selection, page;
        u8 slotState[2];
        u8 unk0A6[0x202];
        void *dataA, *dataB, *process;
        u8 loaded;
        u8 unk2B5[3];
        u32 sprite;
        u8 slotData[2][0x80];
    };
    typedef char LoadInitializationOffsets[offsetof(LoadInitializationView, slotState) == 0xA4 &&
        offsetof(LoadInitializationView, dataA) == 0x2A8 &&
        offsetof(LoadInitializationView, slotData) == 0x2BC && sizeof(LoadInitializationView) == 0x3BC ? 1 : -1];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\S4Load.cpp", 134);
    LoadInitializationView *work = static_cast<LoadInitializationView *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(LoadInitializationView), 1));
    g_s4Load = reinterpret_cast<S4Load *>(work);
    work->state = 0;
    s32 index = 0;
    do {
        rt_aeabi_memclr(work->slotData[index], sizeof(work->slotData[index]));
        work->slotState[index] = 0;
        ++index;
    } while (index < 2);
    work->selection = 0;
    work->page = 1;
    work->loaded = 0;
    asdLoadFileAsyncSimple("title/loadS4.bf", reinterpret_cast<u32 *>(&work->dataA), 0);
    asdLoadFileAsyncSimple("title/loadS4.mbm", reinterpret_cast<u32 *>(&work->dataB), 0);
    work->dataSize = 0x80;
    work->process = NULL;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\S4Load.cpp", 215);
    work->data = asdMemoryAlloc(0x100, 0x100, 0, work->dataSize, 1);
    work->sprite = spriteHandleCreate(0);
    work->closing = 0;
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("S4 LOAD TEST C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002364fc), reinterpret_cast<AsdProcFunc>(s4LoadDestroy), NULL);
    taskCreateDraw("S4 LOAD TEST UL", 0x7E, 0, 0, FUN_0027dbac, 0, NULL, work->job);
    taskCreateDraw("S4 LOAD TEST UR", 0xDA, 0, 0, FUN_0027dbac, 0, NULL, work->job);
    taskCreateDraw("S4 LOAD TEST D", 0xEC, 0, 0, FUN_002bd488, 0, NULL, work->job);
    asdProcessClearSelectedFlags(work->job, 0x80000, 0);
    return work->job;
}
}
