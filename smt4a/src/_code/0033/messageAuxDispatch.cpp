#include "ui/MessageMainA.h"
extern "C" {
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
u32 messageWindowShowOrPoll(u32 message, u32 argument, u32 frame, s32 mode, s32 option, u32 flags);
/* Set the auxiliary message value and dispatch in mode twelve. */
u32 messageAuxDispatch(u32 message, u32 value)
{
    if (message == 0) message = scrGetCommandOwner();
    g_messageMain.aux->argument = value;
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return messageWindowShowOrPoll(message, argument, frame, 12, 0, 0);
}
}
