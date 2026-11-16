#include "battle/BtlMainAccess.h"
#include "battle/btlEvent.h"
#include "battle/btlMain.h"
#include "script/scrScriptProcess.h"
#include "code/Code002c.h"
extern "C" {
void FUN_002898e4(void);
void buttonHelpCreate(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32 preset);
ScriptRunState *scrScriptProcessCreate(void *data, void *context);
void scrScriptProcessStartEntry(ScriptRunState *runner, s32 entry);
void scriptProcessSetMode(ScriptRunState *runner, s32 mode);
void uiFadeRelease(void);
void buttonHelpRelease(void);
u32 FUN_0023ed64(BtlEvent *event);

/* Enter the battle event script once both fade channels are ready. */
u32 FUN_0023f074(BtlEvent *event)
{
    if (FUN_002c2a04(0) == 3 && FUN_002c2a04(1) == 3) {
        FUN_002898e4();
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
