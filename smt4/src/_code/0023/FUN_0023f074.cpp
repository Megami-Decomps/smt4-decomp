/* NON_MATCHING: cleanup result return is shared at function end rather than before the completed-script branch. */
#include "battle/btlEvent.h"
#include "battle/btlMain.h"
#include "script/scrScriptProcess.h"
extern "C" {
s32 FUN_002c2a04(u32 channel);
void FUN_002898e4(void);
void buttonHelpCreate(void);
void FUN_00289880(void);
void buttonHelpSetPreset(s32 preset);
ScriptRunState *FUN_00297060(void *data, void *context);
void scrScriptProcessStartEntry(ScriptRunState *runner, s32 entry);
void scriptProcessSetMode(ScriptRunState *runner, s32 mode);
s32 scrRunOpcodesStub(ScriptRunState *runner);
void uiFadeRelease(void);
void buttonHelpRelease(void);
BtlMainState *btlGetMainState(void);
u32 FUN_0023ed64(BtlEvent *event);

/* Enter the battle event script once both fade channels are ready. */
u32 FUN_0023f074(BtlEvent *event)
{
    if (FUN_002c2a04(0) == 3 && FUN_002c2a04(1) == 3) {
        FUN_002898e4();
        buttonHelpCreate();
        FUN_00289880();
        buttonHelpSetPreset(0xA9);
        event->runner = FUN_00297060(event->dataB, event->process);
        scriptProcessSetMode(event->runner, 1);
        scrScriptProcessStartEntry(event->runner, 0);
        event->state = 7;
        u32 result;
        if (scrRunOpcodesStub(event->runner) != 2) {
            result = 0;
        } else {
            uiFadeRelease();
            buttonHelpRelease();
            /* This flag lies beyond the shared BtlMainState prefix. */
            struct EventCompletionView {
                u8 prefix[0x4978];
                s32 completed;
            };
            EventCompletionView *battle = reinterpret_cast<EventCompletionView *>(btlGetMainState());
            if ((event->flags & 1) == 0 && battle->completed != 1) {
                event->state = 8;
                result = FUN_0023ed64(event);
            } else {
                battle->completed = 1;
                result = ~0u;
                event->state = 9;
            }
        }
        return result;
    }
    return 0;
}
}
