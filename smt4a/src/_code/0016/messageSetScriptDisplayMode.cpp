#include "ui/MessageMainA.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

/* Sets the mode byte at 0x19C5 of the record to 0x15, if there is one. */
void messageSetScriptDisplayMode(void)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x15;
    }
}

} /* extern "C" */
