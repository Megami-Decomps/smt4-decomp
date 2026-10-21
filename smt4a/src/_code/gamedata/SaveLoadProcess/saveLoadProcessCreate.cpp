#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct SaveLoadWork {
    /* 0x00 */ void *process;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 unk08;
    /* 0x0c */ s32 unk0c;
    /* 0x10 */ s32 slot;
    /* 0x14 */ s32 mode;
    /* 0x18 */ u8 option;
};

struct SaveLoadState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u32 unk08;
};

struct SaveHeader {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 slot;
};

typedef void (*ProcessCallback)(void *);
extern "C" {
void *asdMemoryAllocTracked(u32 size, u32 alignment, s32 heap, s32 category, s32 clear);
void FUN_002c76d8(s32 enabled);
void gameDataBlocksAddFlags(u32 flags);
void FUN_00333574(s32 enabled);
SaveHeader *gameDataBlocksGetSaveData(void);
void FUN_003712a4(void *);
void work8BufDestroy(void *);
void FUN_003a7938(void *);
void *asdProcessCreateSimple(const char *, s32, s32, s32, ProcessCallback, ProcessCallback, void *);
void FUN_002a2d14(void *, u32, u32);
void *taskCreateDraw(const char *, s32, s32, s32, ProcessCallback, void *, void *, void *);
extern SaveLoadState g_saveLoadProcess;

// Start the save/load process and its two draw tasks.
void *saveLoadProcessCreate(s32 selection, u8 option)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 633);
    SaveLoadWork *work = static_cast<SaveLoadWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x1c, 1));
    FUN_002c76d8(1);
    gameDataBlocksAddFlags(1);
    FUN_00333574(1);
    work->unk08 = 0;
    work->slot = gameDataBlocksGetSaveData()->slot;
    if (work->slot == 0)
        work->slot = 1;
    g_saveLoadProcess.unk03 = 0;
    g_saveLoadProcess.unk04 = 0;
    g_saveLoadProcess.unk08 = 0;
    g_saveLoadProcess.unk06 = 0;
    work->process = asdProcessCreateSimple("Load", 4, 0, 0, FUN_003712a4, work8BufDestroy, work);
    FUN_002a2d14(work->process, 0x80000, 0);
    if (selection <= 1) {
        work->slot = selection;
        work->mode = 0;
    } else {
        work->slot = selection - 1;
        work->mode = 1;
    }
    work->option = option;
    taskCreateDraw("Boot UpDraw", 0x86, 0, 0, FUN_003a7938, NULL, NULL, work->process);
    taskCreateDraw("Boot UpDraw_R", 0xe2, 0, 0, FUN_003a7938, NULL, NULL, work->process);
    g_saveLoadProcess.active = 0;
    g_saveLoadProcess.unk01 = 0;
    g_saveLoadProcess.unk02 = 0;
    work->state = 6;
    return work->process;
}
}
