/* NON_MATCHING: identical except instruction scheduling of the literal-pool loads (retail loads the runner global's address after the constructor, this build hoists it before the process call). */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" void *asdOperatorNew(u32 bytes);

/* The save/load screen's runner: its process handle, a running flag and the child it updates. */
struct SaveLoadRunner {
    SaveLoadRunner()
    {
        child = NULL;
        running = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x00 */ u32 job;
    /* 0x04 */ u8 running;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ void *child;
    /* 0x0C */ u8 unk0C[4];
};

extern "C" {

extern SaveLoadRunner *DAT_00588e2c;
extern const s8 DAT_00533f80[]; /* "SAVELOAD_UI C" */
extern const char DAT_00533f70[]; /* "SAVELOAD_UI UD" */
extern const char DAT_00533f60[]; /* "SAVELOAD_UI UDD" */
extern const char DAT_00533f50[]; /* "SAVELOAD_UI D" */

u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);
s32 runnerShutdown(u32 handle);
void FUN_002ef9ec(u32 handle);
s32 saveLoadDrawUpdate(u32 handle);
s32 FUN_002efa8c(u32 handle);

/* Creates the save/load runner and its four tasks (the runner process, then the three draw tasks parented to it). */
void FUN_002c75c0(void)
{
    SaveLoadRunner *runner = new SaveLoadRunner;
    DAT_00588e2c = runner;
    runner->job = asdProcessCreateSimple(DAT_00533f80, 4, 0, 0, runnerShutdown, FUN_002ef9ec, 0);
    taskCreateDraw(DAT_00533f70, 0x83, 0, 0, saveLoadDrawUpdate, NULL, NULL, runner->job);
    taskCreateDraw(DAT_00533f60, 0xdf, 0, 0, saveLoadDrawUpdate, NULL, NULL, runner->job);
    taskCreateDraw(DAT_00533f50, 0xec, 0, 0, FUN_002efa8c, NULL, NULL, runner->job);
}

} /* extern "C" */
