/* NON_MATCHING: retail initializes the work through the allocation result in r0 (copied to r4 for
 * later) and passes the new job straight from r0; armcc here works through r4 and r1 */
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
s32 FUN_0032affc(u32 handle);
void FUN_0037a114(u32 handle);

/* Creates the sound test: its work block, the control process and the draw task under it. */
void FUN_002a0a38(void)
{
    SoundTestWork *work;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\sound\\soundTest.cpp", 49);
    work = (SoundTestWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SoundTestWork), 1);
    g_requestWork = work;
    work->state = 0;
    work->frame = 0;
    work->selection = 0;
    work->requested = 0;
    work->job = asdProcessCreateSimple((const s8 *)"ST C", 4, 0, 0, soundTestActionMenuUpdate, workRequest, 0);
    taskCreateDraw((const s8 *)"ST D", 0xEA, 0, 0, FUN_0032affc, FUN_0037a114, 0, work->job);
}

} /* extern "C" */
