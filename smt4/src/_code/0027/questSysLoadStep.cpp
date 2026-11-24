#include "addon/QuestScriptLoader.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern const char g_questScriptPath[];
extern const char g_questMessagesPath[];
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 flags);
void buttonHelpSetPreset(s32 preset);
void scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);
s32 questHasNewMark();
void FUN_0029016c(u32 selection, s32 flags);
void FUN_002900d0();
s32 gameJumpRequestIsPending();

// Load quest script resources, run the requested entry, and finish any jump entry.
u32 questSysLoadStep(AocScriptHolder *step)
{
    switch (step->state) {
    case 0:
        asdLoadFileAsyncSimple(g_questScriptPath, &step->script, 0);
        asdLoadFileAsyncSimple(g_questMessagesPath, &step->messages, 0);
        step->state = 1;
        break;
    case 1:
        if (step->script != NULL && step->messages != NULL) {
            if (step->showButtonHelp) {
                buttonHelpSetPreset(0x90);
            }
            step->process = scrScriptProcessCreate(step->script, step->messages);
            scriptProcessSetMode(step->process, 2);
            scrScriptProcessStartEntry(step->process, step->entry);
            step->state = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(step->process) == 2) {
            u32 selection = rosterGetLeaderId();
            if (questHasNewMark()) {
                FUN_0029016c(selection, 0);
            }
            FUN_002900d0();
            if (gameJumpRequestIsPending()) {
                scrScriptProcessStartEntry(step->process, 13);
                step->state = 3;
            } else {
                step->state = 4;
            }
        }
        break;
    case 3:
        if (scrRunOpcodesStub(step->process) == 2) {
            step->state = 4;
        }
        return 0;
    case 4:
        return 1;
    }
    return 0;
}
}
