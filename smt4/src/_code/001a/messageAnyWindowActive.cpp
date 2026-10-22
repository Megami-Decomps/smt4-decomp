#include "common.h"

struct MessageWindow {
    /* 0x00 */ u8 unk00[0x83];
    /* 0x83 */ u8 active;
};
struct MessageMainState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageWindow *windows[3];
};

extern "C" {

extern MessageMainState g_messageMain;

/* Reports whether any of the three message windows is active. */
bool messageAnyWindowActive(void)
{
    return g_messageMain.windows[0]->active != 0 ||
           g_messageMain.windows[1]->active != 0 ||
           g_messageMain.windows[2]->active != 0;
}

} /* extern "C" */
