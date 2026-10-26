#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern SaveByteSettings g_byteSettings;
void gameDataBlocksAddFlags(u32 flags);
void gameDataFlagsSetBits(u32 flags);
void gameDataFlagsSet(u32 flags);
GameSaveData *gameDataBlocksGetSaveData(void);
s32 FUN_002efa00(u32 job);
void jobTeardownFlagsAndWork(u32 process);
void asdProcessClearSelectedFlags(u32 process, u32 mask, u32 flags);

u32 saveStartLoadProcess(u32 option)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 283);
    SaveLoadProcessWork24 *work = static_cast<SaveLoadProcessWork24 *>(
        asdMemAlloc(0x100, 0x100, 0, sizeof(SaveLoadProcessWork24), 1));
    gameDataBlocksAddFlags(1);
    gameDataFlagsSetBits(1);
    gameDataFlagsSet(1);
    work->result = 0;
    work->option = gameDataBlocksGetSaveData()->metadata.option;
    if (!work->option) {
        work->option = 1;
    }
    g_byteSettings.third = 0;
    g_byteSettings.fourth = 0;
    g_byteSettings.flags = 0;
    g_byteSettings.value = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Load"), 2, 0, 0, FUN_002efa00, jobTeardownFlagsAndWork, reinterpret_cast<u32>(work));
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    work->option = option;
    g_byteSettings.selected = 0;
    g_byteSettings.first = 0;
    g_byteSettings.second = 0;
    work->state = 4;
    return work->process;
}
}
