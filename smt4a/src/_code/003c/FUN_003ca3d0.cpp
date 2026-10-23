/* NON_MATCHING: allocation initialization uses a branch instead of predication; terminal-state tests and constant-one lifetime differ. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct SaintGermainScriptWork {
    u32 job;
    s32 state;
    u32 frame;
    s32 previousState;
    void *messages;
    void *scriptData;
    void *process;
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
void *asdOperatorNew(u32);
s32 FUN_00349b14(u32);
s32 FUN_003710f8(u32);
u32 asdProcessCreateSimple(const s8 *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const s8 *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, void *);
void asdLoadFileAsyncSimple(const char *, void **, s32);
s32 loadSlotIsLoaded(u32);
void loadSlotRequestAsync(u32, u32);
void campButtonHelpAcquire();
void campButtonHelpRelease();
void FUN_0019de98(s32, u32);
void scrScriptProcessDestroy(void *);
void asdMemFree(void *);
void dataTableFree(u32);
void jobStop(u32, s32);
void asdOperatorDelete(void *);

u32 FUN_003ca3d0()
{
    if (scrGetCommandFrame() == 0) {
        u32 argument = scrGetArg(0);
        SaintGermainScriptWork *work = static_cast<SaintGermainScriptWork *>(asdOperatorNew(sizeof(SaintGermainScriptWork)));
        if (work) {
            work->messages = NULL;
            work->scriptData = NULL;
            work->process = NULL;
        }
        DAT_00588130 = work;
        work->job = asdProcessCreateSimple(DAT_00533364, 4, 0, 0, FUN_00349b14, NULL, 0);
        taskCreateDraw(DAT_00533350, 0xEB, 0, 0, FUN_003710f8, NULL, 0, reinterpret_cast<void *>(work->job));
        work->argument = argument;
        asdLoadFileAsyncSimple(DAT_0053328c, &work->messages, 0);
        asdLoadFileAsyncSimple(DAT_00533264, &work->scriptData, 0);
        work->ownsSlot = 0;
        if (!loadSlotIsLoaded(0x4F)) {
            loadSlotRequestAsync(0x4F, 0);
            work->ownsSlot = 1;
        }
        campButtonHelpAcquire();
        work->previousState = work->state;
        work->state = 1;
        work->frame = 0;
    }
    SaintGermainScriptWork *work = DAT_00588130;
    if (work && work->state != 0 && work->state != 8)
        return 0;
    if (work) {
        FUN_0019de98(0, 0xF4F4F4FF);
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
