/* NON_MATCHING: retail keeps the constant 6 (messageWindowShowOrPoll's fourth argument) in r5 across the earlier calls (mov r5, #6 first), which shifts the other saved registers; built passes it with mov r3, #6 */
#include "ui/MessageMainA.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 scrGetCommandOwner(void);
extern u32 scrGetCommandFrame(void);
extern u32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern void bustupCutAnimRequestStopSlots(void);
extern void eventTexRequestStopAll(void);
extern void msgBoxFlagsSetBit7(u32 message);

u32 FUN_003baa68(void)
{
    MessageWindowA *window = g_messageMain.window;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x15;
    }
    first = scrGetCommandOwner();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = messageWindowShowOrPoll(first, second, third, 6, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(window->box);
        window->displayEnabled = 0;
        window->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
