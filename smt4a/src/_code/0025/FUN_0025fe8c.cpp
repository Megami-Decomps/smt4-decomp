/* NON_MATCHING: retail keeps the constant 7 for the last call's fourth argument in r4 across the earlier calls (mov r4, #7 first); built passes it with mov r3, #7 */
#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 FUN_002ba85c(void);
extern u32 scrGetCommandFrame(void);
extern void FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern MessageGlobalsA g_messageMain;

void FUN_0025fe8c(void)
{
    u32 first;
    u32 second;
    u32 third;

    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x15;
    }
    first = FUN_002ba85c();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    FUN_0021bdac(first, second, third, 7, 0, 0);
}

} /* extern "C" */
