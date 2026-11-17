#include "ui/MessageMainA.h"
#include "ui/UiControl.h"

extern "C" {

void messageSetMode(u8 mode)
{
    g_messageMain.banner->enabled = mode;
    g_messageMain.window->enabled = mode;
}
}
