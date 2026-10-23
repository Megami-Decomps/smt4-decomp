#ifndef ADDON_BOOTTRANSITIONWORK_H
#define ADDON_BOOTTRANSITIONWORK_H
#include "common.h"
struct BootTransitionWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 complete;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 state;
};
#endif
