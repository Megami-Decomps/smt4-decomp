#ifndef MAP_NAVIGATIONFADEWORK_H
#define MAP_NAVIGATIONFADEWORK_H

#include "common.h"
#include <stddef.h>
#include "map/NavigationInterpolation.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* The navigation scene's work block while it fades in (observed prefix: it continues past 0x20510).
 * It starts with the shared interpolation prefix; the sprites and flags below are what the fade touches. */
struct NavigationFadeWork {
    /* 0x00000 */ NavigationInterpolation interpolation;
    /* 0x00164 */ u8 unk00164[0x368];
    /* 0x004CC */ u8 scene[4];
    /* 0x004D0 */ u8 unk004D0[0x770];
    /* 0x00C40 */ UiAnimatedSprite sprites[6];
    /* 0x00F88 */ u8 unk00F88[0x118];
    /* 0x010A0 */ UiAnimatedSprite headerSprite;
    /* 0x0112C */ UiAnimatedSprite footerSprite;
    /* 0x011B8 */ u8 unk011B8[0x69D8];
    /* 0x07B90 */ u8 flag7B90;
    /* 0x07B91 */ u8 flag7B91;
    /* 0x07B92 */ u8 unk07B92[0x1897E];
    /* 0x20510 */ u32 cursorMode;
};

typedef char NavigationFadeWorkOffsets[
    offsetof(NavigationFadeWork, scene) == 0x4CC && offsetof(NavigationFadeWork, sprites) == 0xC40 &&
    offsetof(NavigationFadeWork, headerSprite) == 0x10A0 && offsetof(NavigationFadeWork, footerSprite) == 0x112C &&
    offsetof(NavigationFadeWork, flag7B90) == 0x7B90 && offsetof(NavigationFadeWork, cursorMode) == 0x20510 ? 1 : -1];

#endif
