#include "ui/MessageMain.h"

extern "C" {

/* Reports whether any of the three message windows is active. */
bool messageAnyWindowActive(void)
{
    return g_messageMain.window->activeState != 0 ||
           g_messageMain.banner->activeState != 0 ||
           g_messageMain.aux->activeState != 0;
}

} /* extern "C" */
