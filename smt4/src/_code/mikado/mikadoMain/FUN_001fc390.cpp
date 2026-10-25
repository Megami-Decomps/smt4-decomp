/* NON_MATCHING: identical except register allocation after the work-block stores (retail keeps r1/r2 as the argument temporaries and r0 for the stm base; this build uses r0/r1 and r5). */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

#include "mikado/mikadoMain.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

extern MikadoGlobals g_mikado;

u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);
s32 FUN_001fdff0(u32 handle);
void mikadoDestroyCameraCallback(u32 handle);
s32 mikadoDrawCameraCallback(u32 handle);

/* Starts the mikado: allocates its work block, takes the optional start position (two halfwords, when `size` is 4) and
 * creates the main process and its draw task. */
void FUN_001fc390(const s16 *position, s32 size)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mikado\\mikadoMain.cpp", 0x7b);
    MikadoWork *work = static_cast<MikadoWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MikadoWork), 1));
    g_mikado.work = work;
    work->done = 0;
    work->camera = NULL;
    g_mikado.flags.active = 0;
    work->state = 0;
    if (position != NULL && size == 4) {
        g_mikado.cameraStartA = position[0];
        g_mikado.cameraStartC = position[1];
    }
    work->task = asdProcessCreateSimple((const s8 *)"MikadoMainProc", 2, 0, 0, FUN_001fdff0, mikadoDestroyCameraCallback, reinterpret_cast<u32>(work));
    taskCreateDraw("MikadoDrawDown", 0xe7, 1, 0, mikadoDrawCameraCallback, NULL, g_mikado.work, work->task);
}

} /* extern "C" */
