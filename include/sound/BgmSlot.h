#ifndef SOUND_BGMSLOT_H
#define SOUND_BGMSLOT_H

#include "common.h"

/* One music playback slot (0x20 bytes): a sound handle and its playback state, flag bits at 0x1C. */
struct BgmSlot {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 fadeFrames;
    /* 0x0C */ s32 id;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;
};

#endif
