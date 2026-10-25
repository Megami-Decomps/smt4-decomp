/* NON_MATCHING: corrected initial speed and second-column row to retail 0.0f; vector stores, VFP constant/temporary allocation, and handler argument scheduling still differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "StaffRoll/StaffRollMain.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern StaffRollWork *g_staffRoll;

void asdTMTexTableLoadTmx(s32 type, s32 index);
void FUN_002c58c8(s32 type, s32 index);
void uiGetEntrySize(s32 type, s32 index, s32 *outWidth, s32 *outHeight);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);

s32 machineStep(u32 handle);
void staffRollClose(u32 handle);
void staffRollFadeEnterState1(void);
void staffRollEnterState2(void);
void staffRollScrollUpdate(void);
void staffRollFadeEnterState4(void);
void staffRollEnterState5(void);
void staffRollSetComplete(void);
void staffRollTickExitTimer(void);
s32 FUN_002e0820(u32 handle);
s32 FUN_002f4bc0(u32 handle);

/* Builds the staff roll: loads the credit images, lays out the two columns of lines and starts
 * the calc process and the three draw tasks. */
void FUN_002cac54(s32 skipFade)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\StaffRoll\\StaffRollMain.cpp", 141);
    StaffRollWork *work = (StaffRollWork *)asdMemAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(StaffRollWork), 1);
    g_staffRoll = work;
    work->closing = 0;
    work->skip = 0;
    work->speed = 0.0f;

    asdTMTexTableLoadTmx(0x34, 0);
    for (u32 i = 0; i < 12; i++)
        FUN_002c58c8(0x34, i);

    for (s32 i = 0; i < 12; i++) {
        s32 width, height;
        uiGetEntrySize(0x34, i * 1000, &width, &height);
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
    work->handlers[4] = staffRollEnterState5;
    work->handlers[5] = staffRollSetComplete;
    work->handlers[6] = staffRollTickExitTimer;
    work->state = 0;
    work->active = 1;
    if (skipFade != 0)
        work->active = 0;
    work->closing = 0;

    work->task = asdProcessCreateSimple((const s8 *)"STAFFROLL C", 2, 0, 0, machineStep, staffRollClose, 0);
    taskCreateDraw((const s8 *)"STAFFROLL U", 0x7A, 0, 0, FUN_002e0820, NULL, 0, work->task);
    taskCreateDraw((const s8 *)"STAFFROLL UR", 0xD8, 0, 0, FUN_002e0820, NULL, 0, work->task);
    taskCreateDraw((const s8 *)"STAFFROLL DD", 0xE8, 0, 0, FUN_002f4bc0, NULL, 0, work->task);
}

} /* extern "C" */
