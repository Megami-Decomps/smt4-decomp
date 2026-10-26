/* NON_MATCHING: shared flag constants are kept across calls differently and the stack frame is smaller. */
#include "ui/MessageMain.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
u32 scrGetCommandFrame();
s32 scrGetArg(u32 index);
void *scrGetCommandOwner();
u32 FUN_0021bdac(void *context, s32 message, u32 frame, u32 mode, u32 first, u32 second);

u32 FUN_0031a29c()
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        if (g_messageMain.panel) {
            g_messageMain.panel->unk30 = 1;
        }
        g_messageMain.panel->unk31 = 1;
    }
    if (g_messageMain.state) {
        g_messageMain.state->displayMode = 21;
    }
    void *context = scrGetCommandOwner();
    s32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return FUN_0021bdac(context, message, frame, 6, 1, 0);
}
}
