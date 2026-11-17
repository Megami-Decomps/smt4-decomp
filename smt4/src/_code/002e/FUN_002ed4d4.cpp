#include "ui/MessageMain.h"

extern "C" {

extern u32 scrGetCommandOwner(void);
extern s32 btlTalkGetPortraitCode(void);
extern u32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 style, s32 d, s32 e);
extern s32 scrGetCommandFrame(void);
extern u32 scrGetArg(s32 index);
extern void msgBoxFlagsSetBit7(u32 message);

u32 FUN_002ed4d4(void)
{
    MessageWindow *window = g_messageMain.window;
    s32 raw = btlTalkGetPortraitCode();
    s32 style = raw == 0x14 ? 5 : raw;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    first = scrGetCommandOwner();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = messageWindowShowOrPoll(first, second, third, style, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(window->box);
        window->displayEnabled = 0;
        window->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
