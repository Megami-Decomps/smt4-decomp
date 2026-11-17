/* Script command body: marks the battle UI as in a command state (byte 0x15 at +0x19c5 of the global's second word), then calls messageWindowShowOrPoll with the script argument and scrGetCommandFrame's result. `unit` is what the stub in front passes in r0. */
#include "ui/MessageMainA.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void messageWindowShowOrPoll(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

void FUN_00330644(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x15;
    }
    messageWindowShowOrPoll(unit, arg, value, 11, 0, 0);
}

}
