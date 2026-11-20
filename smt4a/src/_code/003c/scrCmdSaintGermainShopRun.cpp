#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "battle/btlDebug.h"
#include "code/Code0015_Smt4a.h"
#include "gamedata/DataTableSections.h"
#include "script/ScriptArgs.h"
#include "script/scrScriptProcess.h"
#include "sys/RuntimeObjects.h"

struct SaintGermainScriptWork {
    SaintGermainScriptWork() : messages(NULL), scriptData(NULL), process(NULL) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    u32 job;
    s32 state;
    u32 frame;
    s32 previousState;
    void *messages;
    void *scriptData;
    ScriptProcess *process;
    u8 ownsSlot;
    u8 unk1D[3];
    u32 argument;
    u8 unk24[0x2C];
};

extern "C" {
extern SaintGermainScriptWork *DAT_00588130;
extern const s8 DAT_00533364[], DAT_00533350[];
extern const char DAT_0053328c[], DAT_00533264[];
s32 FUN_00349b14(u32 arg);
s32 FUN_003710f8(u32 arg);
void campButtonHelpAcquire(void);
void campButtonHelpRelease(void);
void buttonHelpSetText(s32 index, u32 color);

/* Moves the script work to `state`, remembering the state it left and restarting its frame count. */
static __inline void saintGermainEnterState(SaintGermainScriptWork *work, s32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->frame = 0;
}

/* True once the NPC shop work has not started or has reached a terminal state (0 or 8). An inlined predicate, as the
 * sibling scrCmdTransitionFinish reads its work's state through scrTransitionGetState: retail tests the work for NULL
 * again after the state tests, which the test written in place threads away. */
static __inline s32 saintGermainIsDone(void)
{
    SaintGermainScriptWork *work = DAT_00588130;

    if (work == NULL || work->state == 0 || work->state == 8) {
        return 1;
    }
    return 0;
}

/* Script command: launches the NPC shop job on frame 0, waits until it finishes, then tears it down. */
u32 scrCmdSaintGermainShopRun(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 argument = scrGetArg(0);
        SaintGermainScriptWork *work = new SaintGermainScriptWork;
        DAT_00588130 = work;
        work->job = asdProcessCreateSimple(DAT_00533364, 4, 0, 0, FUN_00349b14, NULL, 0);
        taskCreateDraw(DAT_00533350, 0xEB, 0, 0, FUN_003710f8, NULL, 0, (void *)work->job);
        work->argument = argument;
        asdLoadFileAsyncSimple(DAT_0053328c, (u32 *)&work->messages, 0);
        asdLoadFileAsyncSimple(DAT_00533264, (u32 *)&work->scriptData, 0);
        work->ownsSlot = 0;
        if (!loadSlotIsLoaded(0x4F)) {
            loadSlotRequestAsync(0x4F, 0);
            work->ownsSlot = 1;
        }
        campButtonHelpAcquire();
        saintGermainEnterState(work, 1);
    }
    if (!saintGermainIsDone()) {
        return 0;
    }
    SaintGermainScriptWork *work = DAT_00588130;
    if (work != NULL) {
        buttonHelpSetText(0, 0xF4F4F4FF);
        campButtonHelpRelease();
        if (work->process != NULL) {
            scrScriptProcessDestroy(work->process);
            work->process = NULL;
        }
        if (work->messages != NULL) {
            asdMemFree(work->messages);
            work->messages = NULL;
        }
        if (work->scriptData != NULL) {
            asdMemFree(work->scriptData);
            work->scriptData = NULL;
        }
        if (work->ownsSlot) {
            dataTableFree(0x4F);
        }
        jobStop(work->job, 0);
        if (DAT_00588130 != NULL) {
            asdOperatorDelete(DAT_00588130);
            DAT_00588130 = NULL;
        }
    }
    return 1;
}

} /* extern "C" */
