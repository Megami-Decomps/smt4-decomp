#include "gamedata/SaveLoadProcessState.h"
#include "AsdSDK/AsdDebug.h"

struct SaveProcessHeader {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 option;
};
extern "C" {
void *asdMemAlloc(u32 heap, u32 tag, u32 mode, u32 size, u32 flags);
void gameDataBlocksAddFlags(u32 flags);
void gameDataFlagsSetBits(u32 flags);
void gameDataFlagsSet(u32 flags);
const SaveProcessHeader *gameDataBlocksGetSaveData(void);
u32 asdProcessCreateSimple(const char *name, u32 group, s32 start, s32 end,
    s32 (*update)(u32), void (*destroy)(u32), void *work);
void asdProcessClearSelectedFlags(u32 process, u32 flags, u32 mode);
void taskCreateDraw(const char *name, u32 priority, u32 arg, u32 mode,
    void (*draw)(u32), void *work, u32 flags, u32 parent);
s32 FUN_002ef8e4(u32 process);
void FUN_003112ec(u32 process);
void jobTeardownFlagsAndWork(u32 process);
extern SaveByteSettings g_byteSettings;

/* Creates the save/load boot process and its upper/lower-screen draw tasks. */
u32 saveLoadCreateBootProcess(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 411);
    SaveLoadProcessWork24 *work = (SaveLoadProcessWork24 *)asdMemAlloc(0x100, 0x100, 0, sizeof(*work), 1);
    gameDataBlocksAddFlags(1);
    gameDataFlagsSetBits(1);
    gameDataFlagsSet(1);
    work->result = 0;
    u8 option = gameDataBlocksGetSaveData()->option;
    work->option = option;
    if (option == 0) {
        work->option = 1;
    }
    g_byteSettings.third = 0;
    g_byteSettings.fourth = 0;
    g_byteSettings.flags = 0;
    g_byteSettings.value = 0;
    g_byteSettings.selected = 0;
    g_byteSettings.first = 0;
    g_byteSettings.second = 0;
    work->process = asdProcessCreateSimple("Boot", 2, 0, 0,
        FUN_002ef8e4, jobTeardownFlagsAndWork, work);
    asdProcessClearSelectedFlags(work->process, 0x80000, 0);
    taskCreateDraw("Boot UpDraw", 0x81, 0, 0, FUN_003112ec, NULL, 0, work->process);
    taskCreateDraw("Boot UpDraw_R", 0xDF, 0, 0, FUN_003112ec, NULL, 0, work->process);
    work->state = 8;
    return work->process;
}
}
