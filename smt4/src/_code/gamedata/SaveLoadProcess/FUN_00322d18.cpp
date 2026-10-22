/* NON_MATCHING: retail retains removed debug-log filename/line setup and a NOP before allocation. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/SaveLoadProcessState.h"

struct SaveStartWork {
    u32 process, state, result, unk0c, slot;
    u8 option;
    u8 unk15[0xeb];
};
struct SaveStartData { u8 unk00[3]; u8 mode; };
extern "C" {
extern SaveByteSettings g_byteSettings;
void *asdMemAlloc(u32 size, u32 alignment, u32 pool, u32 flags, u32 clear);
void gameDataBlocksAddFlags(u32 flags);
void gameDataFlagsSetBits(u32 flags);
void gameDataFlagsSet(u32 flags);
SaveStartData *gameDataBlocksGetSaveData();
s32 FUN_002efba0(u32 process);
void jobTeardownFlagsAndWork(u32 process);
u32 asdProcessCreateSimple(const char *name, s32 group, u32 flags, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, void *work);
void asdProcessClearSelectedFlags(u32 process, u32 mask, u32 flags);

// Initialize save bookkeeping and launch the save process with its requested slot and option.
u32 FUN_00322d18(u32 slot, u8 option)
{
    SaveStartWork *work = (SaveStartWork *)asdMemAlloc(0x100, 0x100, 0, 0x18, 1);
    gameDataBlocksAddFlags(1);
    gameDataFlagsSetBits(1);
    gameDataFlagsSet(1);
    work->result = 0;
    work->slot = gameDataBlocksGetSaveData()->mode;
    if (work->slot == 0)
        work->slot = 1;
    g_byteSettings.third = 0;
    g_byteSettings.fourth = 0;
    g_byteSettings.flags = 0;
    g_byteSettings.value = 0;
    g_byteSettings.selected = 0;
    g_byteSettings.first = 0;
    g_byteSettings.second = 0;
    work->slot = slot;
    work->process = asdProcessCreateSimple("Save", 2, 0, NULL, FUN_002efba0, jobTeardownFlagsAndWork, work);
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    work->state = 0;
    work->option = option;
    return work->process;
}
}
