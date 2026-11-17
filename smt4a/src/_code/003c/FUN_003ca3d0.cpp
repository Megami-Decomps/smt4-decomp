/* NON_MATCHING: the constructor gives retail's predicated allocation and the state-entry helper its final stores; remaining: retail keeps the constant 1 of ownsSlot in r8 (saving r8, 16-byte frame), and does not thread the terminal-state test (state 0 falls through to a second null test of the work). */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "script/scrScriptProcess.h"

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
s32 scrGetCommandFrame();
u32 scrGetArg(u32);
s32 FUN_00349b14(u32);
s32 FUN_003710f8(u32);
u32 taskCreateDraw(const s8 *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, void *);
s32 loadSlotIsLoaded(u32);
void loadSlotRequestAsync(u32, u32);
void campButtonHelpAcquire();
void campButtonHelpRelease();
void buttonHelpSetText(s32, u32);
void asdMemFree(void *);
void dataTableFree(u32);
void jobStop(u32, s32);
void asdOperatorDelete(void *);

/* Moves the script work to `state`, remembering the state it left and restarting its frame count. */
static inline void saintGermainEnterState(SaintGermainScriptWork *work, s32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->frame = 0;
}

u32 FUN_003ca3d0()
{
    if (scrGetCommandFrame() == 0) {
        u32 argument = scrGetArg(0);
        SaintGermainScriptWork *work = new SaintGermainScriptWork;
        DAT_00588130 = work;
        work->job = asdProcessCreateSimple(DAT_00533364, 4, 0, 0, FUN_00349b14, NULL, 0);
        taskCreateDraw(DAT_00533350, 0xEB, 0, 0, FUN_003710f8, NULL, 0, reinterpret_cast<void *>(work->job));
        work->argument = argument;
        asdLoadFileAsyncSimple(DAT_0053328c, reinterpret_cast<u32 *>(&work->messages), 0);
        asdLoadFileAsyncSimple(DAT_00533264, reinterpret_cast<u32 *>(&work->scriptData), 0);
        work->ownsSlot = 0;
        if (!loadSlotIsLoaded(0x4F)) {
            loadSlotRequestAsync(0x4F, 0);
            work->ownsSlot = 1;
        }
        campButtonHelpAcquire();
        saintGermainEnterState(work, 1);
    }
    SaintGermainScriptWork *work = DAT_00588130;
    if (work && work->state != 0 && work->state != 8)
        return 0;
    if (work) {
        buttonHelpSetText(0, 0xF4F4F4FF);
        campButtonHelpRelease();
        if (work->process) {
            scrScriptProcessDestroy(work->process);
            work->process = NULL;
        }
        if (work->messages) {
            asdMemFree(work->messages);
            work->messages = NULL;
        }
        if (work->scriptData) {
            asdMemFree(work->scriptData);
            work->scriptData = NULL;
        }
        if (work->ownsSlot)
            dataTableFree(0x4F);
        jobStop(work->job, 0);
        if (DAT_00588130) {
            asdOperatorDelete(DAT_00588130);
            DAT_00588130 = NULL;
        }
    }
    return 1;
}
}
