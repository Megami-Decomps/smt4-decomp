/* NON_MATCHING: corrected initial speed and second-column row to retail 0.0f; vector stores, VFP constant/temporary allocation, and handler argument scheduling still differ, as in the smt4 twin. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {
extern StaffRollWork *g_staffRoll;

void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 option, u32 bytes, s32 fromFront);
void asdTMTexTableLoadTmx(s32 type, s32 index);
void FUN_0014afd0(s32 type, s32 index);
void FUN_002e1208(s32 type, s32 index, s32 *outWidth, s32 *outHeight);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);

s32 machineStep(u32 handle);
void staffRollClose(u32 handle);
void staffRollFadeEnterState1(void);
void staffRollEnterState2(void);
void staffRollScrollUpdate(void);
void staffRollFadeEnterState4(void);
void staffRollAdvanceState(void);
void staffRollSetComplete(void);
void staffRollTickExitTimer(void);
s32 FUN_00358918(u32 handle);
s32 staffRollDrawSecondaryColumn(u32 handle);

/* Builds the staff roll: loads the credit images, lays out the two columns of lines and starts
 * the calc process and the three draw tasks. */
void FUN_0032b688(s32 skipFade)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\StaffRoll\\StaffRollMain.cpp", 153);
    StaffRollWork *work = (StaffRollWork *)asdMemoryAllocTracked(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(StaffRollWork), 1);
    g_staffRoll = work;
    work->closing = 0;
    work->skip = 0;
    work->speed = 0.0f;

    asdTMTexTableLoadTmx(0x29, 0);
    for (u32 i = 0; i < 12; i++)
        FUN_0014afd0(0x29, i);

    for (s32 i = 0; i < 12; i++) {
        s32 width, height;
        FUN_002e1208(0x29, i * 1000, &width, &height);
        work->sizes[i].width = (f32)width;
        work->sizes[i].height = (f32)height;
        work->lineA[i].x = 200.0f - work->sizes[i].width * 0.5f;
        work->lineA[i].y = (f32)(i * height) + 520.0f;
    }
    f32 row = 0.0f;
    for (s32 i = 0; i < 12; i++) {
        work->lineB[i].x = 160.0f - work->sizes[i].width * 0.5f;
        work->lineB[i].y = row * work->sizes[i].height + 240.0f;
        row += 1.0f;
    }

    work->endY = -work->sizes[11].height;
    work->speed = 1.0f;
    work->frames = 0;
    work->finished = 0;
    work->unk760 = 0xA5;
    g_staffRoll->state = 0;
    work->handlers[0] = (StaffRollStateHandler)staffRollFadeEnterState1;
    work->handlers[1] = staffRollEnterState2;
    work->handlers[2] = staffRollScrollUpdate;
    work->handlers[3] = (StaffRollStateHandler)staffRollFadeEnterState4;
    work->handlers[4] = staffRollAdvanceState;
    work->handlers[5] = staffRollSetComplete;
    work->handlers[6] = staffRollTickExitTimer;
    work->state = 0;
    work->active = 1;
    if (skipFade != 0)
        work->active = 0;
    work->closing = 0;

    work->task = asdProcessCreateSimple((const s8 *)"STAFFROLL C", 4, 0, 0, machineStep, staffRollClose, 0);
    taskCreateDraw((const s8 *)"STAFFROLL U", 0x7E, 0, 0, FUN_00358918, NULL, 0, work->task);
    taskCreateDraw((const s8 *)"STAFFROLL UR", 0xDA, 0, 0, FUN_00358918, NULL, 0, work->task);
    taskCreateDraw((const s8 *)"STAFFROLL DD", 0xEC, 0, 0, staffRollDrawSecondaryColumn, NULL, 0, work->task);
}

} /* extern "C" */
