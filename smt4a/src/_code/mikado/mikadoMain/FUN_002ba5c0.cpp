/* NON_MATCHING: register choice only: retail uses r1/r2 (not r0/r1) for the start-position copies and the stacked callback arguments. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "kernel/jyoucyuGetTableEntry.h"

typedef void (*MikadoProcFunc)(void);

struct MikadoWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 unk08;
};

struct MikadoModule {
    /* 0x00 */ u8 flag;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MikadoWork *work;
    /* 0x08 */ s32 startX;
    /* 0x0c */ s32 startY;
};

extern "C" {
extern MikadoModule g_mikado;

u32 taskCreateDraw(const char *name, s32 group, u16 startDelay, u16 endDelay, MikadoProcFunc onUpdate,
                   MikadoProcFunc onEnd, MikadoWork *work, u32 owner);
void FUN_002bd1f4(void);
void mikadoControllerFinish(void);
void childOwnerUpdateKind123(void);

/* Allocates the mikado work, takes the optional start position and creates its main process and draw task. */
void FUN_002ba5c0(const s16 *args, s32 argSize)
{
    MikadoWork *work;

    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\mikadoMain.cpp", 125);
    work = reinterpret_cast<MikadoWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, 12, 1));
    g_mikado.work = work;
    work->unk04 = 0;
    work->unk08 = 0;
    g_mikado.flag = 0;
    work->unk05 = 0;
    if (args != NULL && argSize == 4) {
        g_mikado.startX = args[0];
        g_mikado.startY = args[1];
    }
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("MikadoMainProc"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002bd1f4), reinterpret_cast<AsdProcFunc>(mikadoControllerFinish), reinterpret_cast<u32>(work));
    taskCreateDraw("MikadoDrawDown", 235, 1, 0, childOwnerUpdateKind123, NULL, g_mikado.work, work->process);
}

} /* extern "C" */
