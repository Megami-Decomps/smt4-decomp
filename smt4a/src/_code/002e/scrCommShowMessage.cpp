#include "ui/MessageMain.h"
extern "C" {
extern MessageGlobalsA g_messageMain;
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 owner, u32 argument, u32 frame, u32 kind, u32 optionA, u32 optionB);

/* Sets the message display mode and queues the scripted message. */
void scrCommShowMessage(u32 owner, u32 kind)
{
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    if (g_messageMain.state != NULL)
        g_messageMain.state->displayMode = 21;
    FUN_0021bdac(owner, argument, frame, kind, 0, 0);
}
}
