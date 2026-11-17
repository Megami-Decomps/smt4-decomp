#include "ui/MessageMainA.h"

extern "C" {
extern MessageWindowA *g_messageWindows[12];

u32 messageAnyWindowActive()
{
    if (g_messageMain.window->activeState || g_messageMain.banner->activeState ||
        g_messageMain.aux->activeState) {
        return 1;
    }
    for (s32 i = 0; i < 12; ++i) {
        if (g_messageWindows[i]->activeState) {
            return 1;
        }
    }
    return 0;
}
}
