#include "common.h"
extern "C" {
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 owner, u32 argument, u32 frame, u32 kind, u32 optionA, u32 optionB);
extern struct { u32 unk00; struct { u8 unk00[0x19C5]; u8 kind; } *work; } g_messageMain;
/* Sets the message display mode and queues the scripted message. */
void FUN_002e48c4(u32 owner, u32 kind)
{
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    if (g_messageMain.work != NULL)
        g_messageMain.work->kind = 21;
    FUN_0021bdac(owner, argument, frame, kind, 0, 0);
}
}
