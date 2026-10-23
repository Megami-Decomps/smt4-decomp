#ifndef GFX_ANIMATIONCOMPLETION_H
#define GFX_ANIMATIONCOMPLETION_H
#include "shard/W6_W6Match2_AnimationPlayback.h"
#include <stddef.h>
struct AnimationChannel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AnimationSelection selection;
    /* 0x28 */ u8 unk28[8];
};
struct AnimationCompletionWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1C */ s32 current;
    /* 0x20 */ AnimationChannel channels[4];
};
typedef char AnimationCompletionLayoutCheck[(sizeof(AnimationChannel) == 0x30 && offsetof(AnimationCompletionWork, channels) == 0x20) ? 1 : -1];
#endif
