/* NON_MATCHING: null-mode initialization and alternate-priority draw branches have different cold-block placement. */
#include "shard/W5_W5Match2_MapCallbacks.h"
#include "AsdSDK/AsdDebug.h"

struct NameCreateWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 lowerDraw;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ u8 drawing[1];
};

extern "C" {
extern NameCallbackGlobals g_name;
extern const char DAT_0040567c[];
extern const char DAT_004056ac[];
extern const char DAT_004056bc[];
extern const char DAT_004056c8[];
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 first, s32 second,
                           s32 (*update)(void *), void (*end)(void *), void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 screen, u32 flags,
                    s32 (*draw)(void), void (*end)(void), void *work, u32 parent);
s32 nameEntryUpdateTask(void *process);
void nameWorkMarkDone(void *process);
s32 nameDrawIfVisible(void);
s32 nameDrawLowerCallback(void);
void FUN_003984ac(void *drawing, s8 mode);
void FUN_003984a4(void *drawing);
}

/* Allocate the name-entry process and the upper/lower screen draw jobs. */
extern "C" void nameMainCreateJobs(const s32 *mode)
{
    asdDebugTrace(DAT_0040567c, 177);
    NameCreateWork *work = (NameCreateWork *)asdMemAlloc(0x100, 0x100, 0, 0x960, 1);
    g_name.work = (NameCallbackWork *)work;
    if (mode == NULL)
        FUN_003984a4(work->drawing);
    else
        FUN_003984ac(work->drawing, (s8)*mode);
    work->process = asdProcessCreateSimple(DAT_004056ac, 2, 0, 0, nameEntryUpdateTask,
                                           nameWorkMarkDone, g_name.work);
    if (*mode != 1) {
        taskCreateDraw(DAT_004056bc, 0x7a, 1, 0, nameDrawIfVisible, NULL, g_name.work, work->process);
        taskCreateDraw(DAT_004056bc, 0xd8, 1, 0, nameDrawIfVisible, NULL, g_name.work, work->process);
    } else {
        taskCreateDraw(DAT_004056bc, 0x80, 1, 0, nameDrawIfVisible, NULL, g_name.work, work->process);
        taskCreateDraw(DAT_004056bc, 0xde, 1, 0, nameDrawIfVisible, NULL, g_name.work, work->process);
    }
    work->lowerDraw = taskCreateDraw(DAT_004056c8, 0xe6, 1, 0, nameDrawLowerCallback, NULL,
                                      g_name.work, work->process);
}
