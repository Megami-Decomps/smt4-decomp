#include "ui/MessageMain.h"
#include "code/Code002a_Smt4.h"

extern "C" {
/* Sets the enable byte of the dialogue and banner windows. */
void messageStatesSetFirst(u8 value)
{
    g_messageMain.banner->enabled = value;
    g_messageMain.window->enabled = value;
}
}
