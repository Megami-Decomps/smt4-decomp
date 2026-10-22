#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern SaveByteSettings g_byteSettings;
void *asdMemAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void gameDataBlocksAddFlags(u32 flags);
void gameDataFlagsSetBits(u32 flags);
void gameDataFlagsSet(u32 flags);
GameSaveData *gameDataBlocksGetSaveData(void);
void FUN_002efa00(void);
void jobTeardownFlagsAndWork(void);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 argument, u32 owner,
                          void (*update)(void), void (*release)(void), void *work);
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
    work->process = asdProcessCreateSimple("Load", 2, 0, 0, FUN_002efa00, jobTeardownFlagsAndWork, work);
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    work->option = option;
    g_byteSettings.selected = 0;
    g_byteSettings.first = 0;
    g_byteSettings.second = 0;
    work->state = 4;
    return work->process;
}
}
