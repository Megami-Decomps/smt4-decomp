/* NON_MATCHING: both exits that leave for step 3 write state 3/substep 0; retail stores each pair with one stm and keeps
 * the 3 out of the saved registers, this build hoists the 3 into r7 and stores the words separately (substep first); the
 * closing flag's bit extraction also takes other registers. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocQuestReturn.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

extern "C" {
void msgWindowReset();
void messageBannerBeginClose();
void ifTouchRegionRemove();

/* Bit `bit` of a flag word, as 0 or 1. */
static __inline u32 flagBit(u32 flags, u32 bit)
{
    return (flags & (1u << bit)) >> bit;
}

/* Waits for the add-on request to finish, then restarts the menu's script and leaves for step 3; the first pass queues
 * the request unless the AOC process is closing. */
void AocMenu::returnToScript()
{
    AocQuestReturnView *work = (AocQuestReturnView *)this;
    if (work->substate != 0) {
        if (work->substate != 1) {
            return;
        }
        u32 flags = g_aocMain->flags;
        if ((flags & 4) != 0) {
            return;
        }
        if ((flags & 8) != 0) {
            return;
        }
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
        ScriptProcess *process = scrScriptProcessCreate(work->script, work->messages);
        work->process = process;
        process->mode = 2;
        msgWindowReset();
        messageBannerBeginClose();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        work->state = 3;
        work->substate = 0;
        if (work->child != NULL) {
            delete work->child;
            work->child = NULL;
        }
        return;
    }
    AocMain *main = g_aocMain;
    u32 closing = flagBit(main->flags, 4);
    main->flags &= ~0x70;
    if (closing) {
        work->state = 3;
        work->substate = 0;
        if (work->child != NULL) {
            delete work->child;
            work->child = NULL;
        }
        return;
    }
    RequestParameters parameters;
    parameters.kind = 1;
    parameters.word3 = 0;
    parameters.result = WindowStatusResult(parameters.word3);
    parameters.kind = 200;
    u32 argument;
    if (work->contentCode == 0x6a) {
        argument = work->argument;
    } else {
        argument = (g_aocMain->flags & 0x100) != 0 ? 2 : 1;
    }
    g_aocMain->queueRequest(parameters, argument, 0);
    work->substate = 1;
}
}
