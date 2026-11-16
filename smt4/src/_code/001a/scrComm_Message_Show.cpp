#include "common.h"

extern "C" {

int messageWindowShowOrPoll(u32 a, u32 b, u32 c, int d, int e, int f);
extern u32 scrGetCommandOwner(void);
extern int btlTalkGetPortraitCode(void);
extern u32 scrGetCommandFrame(void);
extern u32 scrGetArg(u32 index);

void scrComm_Message_Show(void)
{
    int style = btlTalkGetPortraitCode();
    u32 a;
    u32 b;
    u32 c;

    style = (style == 0x14) ? 5 : style;
    a = scrGetCommandOwner();
    b = scrGetArg(0);
    c = scrGetCommandFrame();
    messageWindowShowOrPoll(a, b, c, style, 0, 0);
}

} /* extern "C" */
