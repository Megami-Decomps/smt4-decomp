#include "common.h"

extern "C" {

struct MessageState { u8 unk00[0x6d]; u8 active; };
struct MessageMain { u32 unk00; MessageState *first; MessageState *second; };
extern MessageMain g_messageMain;

void messageClearActiveFlags(void)
{
    if (g_messageMain.first != NULL) {
        g_messageMain.first->active = 0;
    }
    if (g_messageMain.second != NULL) {
        g_messageMain.second->active = 0;
    }
}

} /* extern "C" */
