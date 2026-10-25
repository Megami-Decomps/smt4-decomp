/* NON_MATCHING: retail keeps command 8 in r4 across calls; built passes it directly and saves one fewer register. */
#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
u32 FUN_002ba85c(void);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

/* Switches the message display mode, then dispatches script message command 8. */
void FUN_0031a1a4(void)
{
    if (g_messageMain.state != NULL)
        g_messageMain.state->displayMode = 0x15;
    u32 first = FUN_002ba85c();
    u32 second = scrGetArg(0);
    u32 third = scrGetCommandFrame();
    FUN_0021bdac(first, second, third, 8, 0, 0);
}
}
