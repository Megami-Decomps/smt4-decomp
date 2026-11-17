#include "ui/MessageMain.h"

extern "C" {

u8 sys43e188GetStateB(void)
{
    return g_messageMain.window->state == 4;
}

} /* extern "C" */
