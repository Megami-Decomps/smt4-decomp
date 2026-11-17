#include "ui/MessageMain.h"

extern "C" {
void FUN_0028dcf4(MessageWindow *, u32);
void FUN_0028e6d0(MessageWindow *, u32, u32, u32, u32, u32, u32);

// Select the message layout and open the requested message.
void FUN_001ed64c(u32 kind, u32 message, u32 argument)
{
    MessageWindow *window = g_messageMain.window;
    window->empty = 0;
    FUN_0028dcf4(window, kind);
    FUN_0028e6d0(window, message, argument, kind, 0, 2, 0);
}
}
