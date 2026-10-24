#ifndef MAP_NAVIDISPLAYTRANSITION_H
#define MAP_NAVIDISPLAYTRANSITION_H
#include "ui/UiSpriteState.h"
#include <stddef.h>

struct MapNaviDisplay;
struct NaviDisplayTransitionView {
    u8 unk000[4];
    u32 stage;
    s32 state;
    u8 mapVisible;
    u8 unk00D[3];
    u32 flags;
    s32 step;
    u32 counter;
    u8 unk01C[0x10];
    f32 dragOriginX;     // 0x2C touch position where the drag started
    f32 dragOriginY;     // 0x30
    f32 cursorStartX;    // 0x34 map cursor position at that moment
    f32 cursorStartY;    // 0x38
    f32 velocityX;       // 0x3C scroll speed left over from the drag
    f32 velocityY;       // 0x40
    f32 touchX;          // 0x44 latest touch position
    f32 touchY;          // 0x48
    f32 lastTouchX;      // 0x4C touch position before that
    f32 lastTouchY;      // 0x50
    s8 touchAge;         // 0x54 frames the touch has been still
    u8 unk055[6];
    s8 phase;
    s32 map;
    u8 unk060[0x102];
    u16 mapState;
    f32 origin[2];
    u8 unk16C[0xC];
    u8 window[0x20];
    UiSpriteState outgoing;
    UiSpriteState incoming;
    u8 unk2B0[0x368];
    UiSpriteState lines[5];
    UiSpriteState indicator;
    UiSpriteState overlay;
    u8 unk9EC[0x50A0];
    u8 mapDirty;
    u8 overlayDirty;
};
typedef char NaviDisplayTransitionOffsets[
    offsetof(NaviDisplayTransitionView, phase) == 0x5B &&
    offsetof(NaviDisplayTransitionView, map) == 0x5C &&
    offsetof(NaviDisplayTransitionView, mapState) == 0x162 &&
    offsetof(NaviDisplayTransitionView, origin) == 0x164 &&
    offsetof(NaviDisplayTransitionView, outgoing) == 0x198 &&
    offsetof(NaviDisplayTransitionView, incoming) == 0x224 &&
    offsetof(NaviDisplayTransitionView, indicator) == 0x8D4 &&
    offsetof(NaviDisplayTransitionView, overlay) == 0x960 &&
    offsetof(NaviDisplayTransitionView, mapDirty) == 0x5A8C &&
    offsetof(NaviDisplayTransitionView, overlayDirty) == 0x5A8D &&
    offsetof(NaviDisplayTransitionView, state) == 0x8 &&
    offsetof(NaviDisplayTransitionView, step) == 0x14 &&
    offsetof(NaviDisplayTransitionView, window) == 0x178 &&
    offsetof(NaviDisplayTransitionView, lines) == 0x618 ? 1 : -1];
#endif
