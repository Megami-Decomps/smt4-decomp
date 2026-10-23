#ifndef CAMP_COMMONBG_H
#define CAMP_COMMONBG_H
#include "common.h"
#include <stddef.h>
struct CommonBgState {
    u32 job;
    u32 unk04[2];
    u32 titleSprite;
    u32 promptSprite;
    u32 unk14[4];
};
struct CommonBgOwner { u32 job; };
struct CommonBgGlobals {
    u32 unk00;
    CommonBgOwner *owner;
    CommonBgState *work;
};
typedef char CommonBgStateSizeCheck[sizeof(CommonBgState) == 0x24 && offsetof(CommonBgState, titleSprite) == 0xC ? 1 : -1];
#endif
