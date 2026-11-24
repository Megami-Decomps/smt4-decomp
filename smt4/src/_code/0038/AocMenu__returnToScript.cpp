/* NON_MATCHING: 73 lines. The request is queued by value as its RequestParameters base: retail copies it whole
 * (five plain words, a 52-byte frame), this build member by member out of the AocMenuRequest local (a base
 * subobject), which moves the frame and every register after it. Passing it as static_cast<RequestParameters &>
 * gives retail's copy (17 lines) but only steers (the w87 review rejected the same cast); a RequestParameters local
 * is 76. Both exits that leave for step 3 are aocMenuChangeStep(this, 3): retail forms the 3 at each site and stores
 * step and substep with one stm, this build keeps the 3 in r7 and stores the two words separately (armcc inlining the
 * helper late, as with many calls of it in one file). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocQuestReturn.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

extern "C" {
void msgWindowReset();
void messageBannerBeginClose();
void ifTouchRegionRemove();

/* Waits for the add-on request to finish, then restarts the menu's script and leaves for step 3; the first pass queues
 * the request unless the AOC process is closing. */
void AocMenu::returnToScript()
{
    AocQuestReturnView *work = (AocQuestReturnView *)this;

    switch (work->substate) {
    case 0: {
        if (aocMainTakeCancel()) {
            aocMenuChangeStep(this, 3);
            break;
        }
        AocMenuRequest parameters;
        resetRequestOperation(&parameters);
        parameters.kind = 200;
        u32 argument;
        if (work->contentCode == 0x6a) {
            argument = work->argument;
        } else {
            argument = (g_aocMain->flags & 0x100) != 0 ? 2 : 1;
        }
        g_aocMain->queueRequest(parameters, argument, 0);
        work->substate = 1;
        break;
    }
    case 1:
        if (aocMainIsBusy(g_aocMain)) {
            break;
        }
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
        ScriptProcess *process = scrScriptProcessCreate(work->script, work->messages);
        work->process = process;
        scriptProcessSetMode(process, 2);
        msgWindowReset();
        messageBannerBeginClose();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        aocMenuChangeStep(this, 3);
        break;
    }
}
}
