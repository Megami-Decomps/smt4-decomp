#include "ui/MessageMain.h"
extern "C" MessageGlobals g_messageMain;

extern "C" {

/* Clears the flag byte of the message state object and of the banner, when they exist. */
void messageClearObjectFlags(void)
{
    if (g_messageMain.state != NULL) {
        reinterpret_cast<MessageObject *>(g_messageMain.state)->unk5f = 0;
    }
    if (g_messageMain.banner != NULL) {
        reinterpret_cast<MessageObject *>(g_messageMain.banner)->unk5f = 0;
    }
}

} /* extern "C" */
