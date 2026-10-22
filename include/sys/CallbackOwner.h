#ifndef SYS_CALLBACKOWNER_H
#define SYS_CALLBACKOWNER_H

#include "common.h"

struct CallbackPosition {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 unk20;
};
struct CallbackOwner {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ CallbackPosition position;
    /* 0x054 */ u8 unk054[0x2F0];
    /* 0x344 */ s32 state;
};
struct CallbackOwnerSlots {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CallbackOwner *owner;
};

#endif
