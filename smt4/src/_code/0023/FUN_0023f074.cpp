#include "battle/BtlMainAccess.h"
#include "battle/btlEvent.h"
#include "battle/btlMain.h"
#include "script/scrScriptProcess.h"
#include "code/Code002c.h"
#include "code/Code0013.h"
extern "C" {
void commonBgAcquire(void);
void buttonHelpCreate(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32 preset);
void scrScriptProcessStartEntry(ScriptProcess *runner, s32 entry);
void scriptProcessSetMode(ScriptProcess *runner, s32 mode);
void uiFadeRelease(void);
void buttonHelpRelease(void);
u32 FUN_0023ed64(BtlEvent *event);

/* Enter the battle event script once both fade channels are ready. */
u32 FUN_0023f074(BtlEvent *event)
{
    if (pairedAvailabilityGetState(0) == 3 && pairedAvailabilityGetState(1) == 3) {
        commonBgAcquire();
        buttonHelpCreate();
        commonBgStopChildAndBeginTransition();
        buttonHelpSetPreset(0xA9);
        event->runner = scrScriptProcessCreate(event->dataB, event->process);
        scriptProcessSetMode(event->runner, 1);
        scrScriptProcessStartEntry(event->runner, 0);
        event->state = 7;
        u32 result;
        if (scrRunOpcodesStub(event->runner) == 2) {
            uiFadeRelease();
            buttonHelpRelease();
            BtlMainState *battle = btlGetMainState();
            if ((event->flags & 1) == 0 && battle->completion.complete != 1) {
                event->state = 8;
                result = FUN_0023ed64(event);
            } else {
                battle->completion.complete = 1;
                result = ~0u;
                event->state = 9;
            }
        } else {
            result = 0;
        }
        return result;
    }
    return 0;
}
}
