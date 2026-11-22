#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {
void FUN_0028dcf4(MessageWindow *, u32);
void messageWindowOpen(MessageWindow *, u32, u32, u32, u32, u32, u32);

// Select the message layout and open the requested message.
void FUN_001ed64c(u32 kind, u32 message, u32 argument)
{
    MessageWindow *window = g_messageMain.window;
    window->empty = 0;
    FUN_0028dcf4(window, kind);
    messageWindowOpen(window, message, argument, kind, 0, 2, 0);
}
}
