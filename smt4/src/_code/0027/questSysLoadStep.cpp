/* NON_MATCHING: recovered script-mode setter matches; state-store tail merging differs. */
#include "common.h"
#include "shard/FUN_002903f0.h"

struct QuestScriptProcess {
    u8 unk00[0x108];
    u32 mode;                    /* 0x108 */
};
struct QuestLoadStep {
    u32 state;                   /* 0x00 */
    u32 entry;                   /* 0x04 */
    u8 showButtonHelp;           /* 0x08 */
    u8 unk09[3];
    void *script;                /* 0x0c */
    void *messages;              /* 0x10 */
    QuestScriptProcess *process; /* 0x14 */
};

extern "C" {
extern const char g_questScriptPath[];
extern const char g_questMessagesPath[];
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 flags);
void buttonHelpSetPreset(s32 preset);
QuestScriptProcess *FUN_00297060(void *script, void *messages);
void scrScriptProcessStartEntry(QuestScriptProcess *process, u32 entry);
s32 scrRunOpcodesStub(QuestScriptProcess *process);
s32 FUN_00298dc8();
void FUN_0029016c(u32 selection, s32 flags);
void FUN_002900d0();
s32 gameJumpRequestIsPending();
void scriptProcessSetMode(QuestScriptProcess *process, u32 mode);

// Load quest script resources, run the requested entry, and finish any jump entry.
u32 questSysLoadStep(QuestLoadStep *step)
{
    switch (step->state) {
    case 0:
        asdLoadFileAsyncSimple(g_questScriptPath, &step->script, 0);
        asdLoadFileAsyncSimple(g_questMessagesPath, &step->messages, 0);
        step->state = 1;
        break;
    case 1:
        if (step->script == NULL || step->messages == NULL) {
            return 0;
        }
        if (step->showButtonHelp) {
            buttonHelpSetPreset(0x90);
        }
        step->process = FUN_00297060(step->script, step->messages);
        scriptProcessSetMode(step->process, 2);
        scrScriptProcessStartEntry(step->process, step->entry);
        step->state = 2;
        break;
    case 2: {
        if (scrRunOpcodesStub(step->process) != 2) {
            return 0;
        }
        u32 selection = FUN_002903f0();
        if (FUN_00298dc8()) {
            FUN_0029016c(selection, 0);
        }
        FUN_002900d0();
        if (gameJumpRequestIsPending()) {
            scrScriptProcessStartEntry(step->process, 13);
            step->state = 3;
        } else {
            step->state = 4;
        }
        break;
    }
    case 3:
        if (scrRunOpcodesStub(step->process) == 2) {
            step->state = 4;
        }
        break;
    case 4:
        return 1;
    }
    return 0;
}
}
