/* NON_MATCHING: identical except register allocation after the work-block stores (retail keeps r1/r2 as the argument temporaries and r0 for the stm base; this build uses r0/r1 and r5). */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* The mikado work block (12 bytes): the process handle and two flags. */
struct MikadoWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u8 flag04;
    /* 0x05 */ u8 flag05;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 unk08;
};

/* The mikado module global. */
struct MikadoGlobals {
    /* 0x00 */ u8 flag00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MikadoWork *work;
    /* 0x08 */ s32 startX;
    /* 0x0C */ s32 startY;
};

extern "C" {

extern MikadoGlobals g_mikado;

void jyoucyuGetTableEntry(u32 index);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);
s32 FUN_001fdff0(u32 handle);
void FUN_002d54dc(u32 handle);
s32 FUN_002d5534(u32 handle);

/* Starts the mikado: allocates its work block, takes the optional start position (two halfwords, when `size` is 4) and
 * creates the main process and its draw task. */
void FUN_001fc390(const s16 *position, s32 size)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mikado\\mikadoMain.cpp", 0x7b);
    MikadoWork *work = static_cast<MikadoWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MikadoWork), 1));
    g_mikado.work = work;
    work->flag04 = 0;
    work->unk08 = 0;
    g_mikado.flag00 = 0;
    work->flag05 = 0;
    if (position != NULL && size == 4) {
        g_mikado.startX = position[0];
        g_mikado.startY = position[1];
    }
    work->process = asdProcessCreateSimple((const s8 *)"MikadoMainProc", 2, 0, 0, FUN_001fdff0, FUN_002d54dc, reinterpret_cast<u32>(work));
    taskCreateDraw("MikadoDrawDown", 0xe7, 1, 0, FUN_002d5534, NULL, g_mikado.work, work->process);
}

} /* extern "C" */
