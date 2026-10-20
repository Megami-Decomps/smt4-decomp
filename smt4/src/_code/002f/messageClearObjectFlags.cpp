#include "shard/W4_W4Match5b_MessageMain.h"

extern "C" {

/* Clears the flag byte of the message state object and of the banner, when they exist. */
void messageClearObjectFlags(void)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->unk5f = 0;
    }
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk5f = 0;
    }
}

} /* extern "C" */
