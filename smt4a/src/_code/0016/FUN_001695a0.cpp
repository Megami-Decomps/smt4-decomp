#include "ui/MessageMain.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
extern MessageGlobalsA g_messageMain;

/* Sets the mode byte at 0x19C5 of the record to 0x15, if there is one. */
void FUN_001695a0(void)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x15;
    }
}

} /* extern "C" */
