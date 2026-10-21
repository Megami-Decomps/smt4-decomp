#include "common.h"
extern "C" {
struct MessageAuxWork { u8 unk00[0x24]; u32 value; };
struct MessageAuxGlobals { u8 unk00[0xC]; MessageAuxWork *work; };
extern MessageAuxGlobals g_messageMain;
u32 FUN_002865f8(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32 message, u32 argument, u32 frame, s32 mode, s32 option, u32 flags);
/* Set the auxiliary message value and dispatch in mode twelve. */
u32 messageAuxDispatch(u32 message, u32 value)
{
    if (message == 0) message = FUN_002865f8();
    g_messageMain.work->value = value;
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return FUN_002866b4(message, argument, frame, 12, 0, 0);
}
}
