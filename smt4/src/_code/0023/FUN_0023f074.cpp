#include "battle/BtlGameOverTransition.h"
#include "battle/BtlMainAccess.h"
#include "script/scrScriptProcess.h"
#include "code/Code002c.h"
#include "code/Code0013.h"
#include "script/ScriptEntry.h"
extern "C" {
void commonBgAcquire(void);
void buttonHelpCreate(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32 preset);

void uiFadeRelease(void);
void buttonHelpRelease(void);

/* Enter the battle event script once both fade channels are ready. */
u32 FUN_0023f074(BtlGameOver *work)
{
    if (pairedAvailabilityGetState(0) == 3 && pairedAvailabilityGetState(1) == 3) {
        commonBgAcquire();
        buttonHelpCreate();
        commonBgStopChildAndBeginTransition();
        buttonHelpSetPreset(0xA9);
        work->process = scrScriptProcessCreate(work->dataA, work->dataB);
        scriptProcessSetMode(work->process, 1);
        scrScriptProcessStartEntry(work->process, 0);
        work->state = 7;
        u32 result;
        if (scrRunOpcodesStub(work->process) == 2) {
            uiFadeRelease();
            buttonHelpRelease();
            BtlMainState *battle = btlGetMainState();
            if ((work->flags & 1) == 0 && battle->completion.complete != 1) {
                work->state = 8;
                result = FUN_0023ed64(work);
            } else {
                battle->completion.complete = 1;
                result = ~0u;
                work->state = 9;
            }
        } else {
            result = 0;
        }
        return result;
    }
    return 0;
}
}
