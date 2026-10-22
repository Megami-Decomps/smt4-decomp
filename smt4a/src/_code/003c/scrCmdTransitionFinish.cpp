#include "common.h"

extern "C" {

struct ScriptTransition {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 state;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ void *buffer10;
    /* 0x14 */ void *buffer14;
    /* 0x18 */ void *process;
    /* 0x1C */ u8 ownsTable; // set when data table 79 was loaded for the transition
};
extern ScriptTransition *DAT_0058812c;

s32 scrGetCommandFrame(void);
s32 scrGetArg(s32 index);
void FUN_0035b404(s32 arg);
void campButtonHelpRelease(void);
void FUN_003c607c(s32 arg);
void FUN_00333f6c(void);
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *block);
void dataTableFree(s32 table);
void jobStop(u32 job, s32 arg);
void asdOperatorDelete(void *block);

/* The running transition's state, 0 when there is none. */
static __inline u32 scrTransitionGetState(void)
{
    ScriptTransition *work = DAT_0058812c;

    return work != NULL ? work->state : 0;
}

/* Script command: waits for the running transition to finish, then tears it down. */
s32 scrCmdTransitionFinish(void)
{
    ScriptTransition *work;
    u32 state;

    if (scrGetCommandFrame() == 0) {
        FUN_0035b404(scrGetArg(0));
    }
    state = scrTransitionGetState();
    if (state != 0 && state != 7) {
        return 0;
    }
    work = DAT_0058812c;
    if (work != NULL) {
        campButtonHelpRelease();
        FUN_003c607c(0);
        FUN_00333f6c();
        if (work->process != NULL) {
            scrScriptProcessDestroy(work->process);
            work->process = NULL;
        }
        if (work->buffer10 != NULL) {
            asdMemFree(work->buffer10);
            work->buffer10 = NULL;
        }
        if (work->buffer14 != NULL) {
            asdMemFree(work->buffer14);
            work->buffer14 = NULL;
        }
        if (work->ownsTable) {
            dataTableFree(79);
        }
        jobStop(work->job, 0);
        if (DAT_0058812c != NULL) {
            asdOperatorDelete(DAT_0058812c);
            DAT_0058812c = NULL;
        }
    }
    return 1;
}

} /* extern "C" */
