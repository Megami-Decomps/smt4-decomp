/* NON_MATCHING: initialised through g_requestWork as retail (stores via the allocation in r0); only the
 * scheduling differs: retail copies the work to r4 before the field stores and loads the onEnd callback
 * after them. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The sound test's work block (g_requestWork). */
struct SoundTestWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 requested;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 state;
    /* 0x0C */ u32 frame;
    /* 0x10 */ s32 selection;
};

extern "C" {

extern SoundTestWork *g_requestWork;

u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, u32 owner);
s32 soundTestActionMenuUpdate(u32 handle);
void workRequest(u32 handle);
s32 soundTestDrawJobUpdate(u32 handle);
void FUN_0037a114(u32 handle);

/* Creates the sound test: its work block, the control process and the draw task under it. */
void FUN_002a0a38(void)
{
    SoundTestWork *work;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\sound\\soundTest.cpp", 49);
    g_requestWork = (SoundTestWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SoundTestWork), 1);
    g_requestWork->state = 0;
    g_requestWork->frame = 0;
    g_requestWork->selection = 0;
    g_requestWork->requested = 0;
    work = g_requestWork;
    work->job = asdProcessCreateSimple((const s8 *)"ST C", 4, 0, 0, soundTestActionMenuUpdate, workRequest, 0);
    taskCreateDraw((const s8 *)"ST D", 0xEA, 0, 0, soundTestDrawJobUpdate, FUN_0037a114, 0, work->job);
}

} /* extern "C" */
