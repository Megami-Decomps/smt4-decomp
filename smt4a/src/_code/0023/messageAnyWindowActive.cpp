#include "common.h"

struct MessageActivityWindow {
    u8 unk00[0x95];
    u8 active; // 0x95
};
struct MessageActivityGlobals {
    u32 unk00;
    MessageActivityWindow *windows[3]; // 0x04
};

extern "C" {
extern MessageActivityGlobals g_messageMain;
extern MessageActivityWindow *DAT_005e2010[12];

u32 messageAnyWindowActive()
{
    if (g_messageMain.windows[0]->active || g_messageMain.windows[1]->active ||
        g_messageMain.windows[2]->active) {
        return 1;
    }
    for (s32 i = 0; i < 12; ++i) {
        if (DAT_005e2010[i]->active) {
            return 1;
        }
    }
    return 0;
}
}
