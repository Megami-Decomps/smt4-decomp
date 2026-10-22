#ifndef NN_APPLET_EVENTSTATE_H
#define NN_APPLET_EVENTSTATE_H

#include "common.h"

struct AppletEventState {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 sleepQueryEvent[2];
    /* 0x0C */ u32 homeButtonEvent[2];
};

#endif
